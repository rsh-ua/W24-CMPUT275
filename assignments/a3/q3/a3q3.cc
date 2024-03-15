#include "intSet.h"
#include <iostream>
#include <sstream>
#include <utility>
using namespace std;


// continuously read int values from stdin and
// add to the passed intSet. Function stops when input 
// contains a non-int value. Discard the first non-int
// character
void readIn(intSet* is) {
  int x;  
  while(true) {
    if (!(cin>>x)) {
      cin.clear();
      cin.ignore();
      return;
    } else {
      is->add(x);
    }
  }
}


// Test harness for intSet functions.
int main() { 
  bool done = false;
  intSet **arr = new intSet*[4];
  for (int i = 0; i < 4; ++i) {
    arr[i] = nullptr;
  }
  while (!done) {
    char c;
    char which;
    char lhs, rhs;
    int x;
    cerr << "command?" << endl;
    // Valid commands: n <ind>,  p <ind>, & <ind1> <ind2>,
    //                 | <ind1> <ind2>, = <ind1> <ind2>,
    //                 s <ind1> <ind2>, c <ind1> <elem>,
    //                 a <ind1> <elem>, r <ind1> <elem>,
    //                 d <ind1>, < <ind> <ind>, m <ind>,
    //                 v <ind1> <ind2>, q
    // Every <ind> must be either a, b, c, or d. Anything else is invalid.
    // Every <elem> must be an integer
    /*
     * n <ind>        - Creates a brand new set at the target index, and reads integers from
                        stdin adding them to the set until seeing the first non-integer input
                        which is removed from the stream.
    * p <ind>         - prints out the set at the target index
    * & <ind1> <ind2> - Applies the & (intersect) operator to the two sets at the 
                        target indices and prints out the result.
    * | <ind1> <ind2> - Applies the | (union) operator to the two sets at the
                        target indices and prints out the result
    * = <ind1> <ind2> - Applies the == (equality) operator to the two sets at the
                        target indices and prints out the result
    * s <ind1> <ind2> - Calls the subset method to check if <ind2> is a subset 
                        of <ind1> and prints out the result
    * c <ind1> <elem> - Calls the contains method to check if <elem> is contained
                        within the target set and prints out the result
    * a <ind1> <elem> - Calls the add method to add the given <elem> 
                        to the target set
    * r <ind1> <elem> - Calls the remove method to remove the given <elem> 
                        from the tareget set
    * d <ind1> <ind2> - If there is an intSet at <ind1> deletes it. Then copy constructs
                        the intSet at <ind1> with the intSet at <ind2>
                        given index with a default constructed intSet
    < <ind1> <ind2>   - Assigns <ind1> = <ind2> calling the copy assignment
                        operator
    m <ind1> <ind2>   - Move constructs <ind1> using <ind2> as the argument,
                        after this <ind2> is unusable until a new intset is
                        created there!
    v <ind1> <ind2>   - Move assigns <ind1> = <ind2>, after this <ind2> is
                        unusable until a new intset is created there!
    q                 - Exits the program
    */

    cin >> c; // reads one of the command names
    if (cin.eof()) break;
    switch(c) {
      case 'n':
        // Create new intSet with name a, b, c, or d
        // read in integers to add to it until hitting non int.
        cin >> which;
        if (arr[which-'a']) delete arr[which-'a'];
        arr[which-'a'] = new intSet;
        readIn(arr[which-'a']);
        break;
      case 'p':
        // Print intSet with name which.
        cin >> which;
        cout << *arr[which-'a'] << endl;
        break;
      case '&':
        // Print intersection of lhs and rhs.
        cin >> lhs >> rhs; // reads in two indices
        cout << (*arr[lhs-'a'] & *arr[rhs-'a']) << endl;
        break;
      case '|':
        // Print union of lhs and rhs.
        cin >> lhs >> rhs;
        cout << (*arr[lhs-'a'] | *arr[rhs-'a']) << endl;
        break;
      case '=':
        // Print 1 if lhs == rhs, 0 otherwise.
        cin >> lhs >> rhs;
        cout << (*arr[lhs-'a'] == *arr[rhs-'a']) << endl;
        break;
      case 's':
        // Print 1 if rhs is subset of lhs, 0 otherwise.
        cin >> lhs >> rhs;
        cout << arr[lhs-'a']->isSubset(*arr[rhs-'a']) << endl;
        break;
      case 'c':
        // Print 1 if lhs contains element x, 0 otherwise.
        cin >> lhs >> x;
        cout << arr[lhs-'a']->contains(x) << endl;
        break;
      case 'a':
        // Add elem x to set lhs
        cin >> lhs >> x;
        arr[lhs-'a']->add(x);
        break;
      case 'r':
        // Remove elem x from set lhs
        cin >> lhs >> x;
        arr[lhs-'a']->remove(x);
        break;
      case 'q':
        // Quit
        done = true;
        break;
      case 'd':
        // Create a new intSet at which copying 
        // intSet at index rhs.
        cin >> which >> rhs;
        if (arr[which-'a']) delete arr[which-'a'];
        arr[which-'a'] = new intSet{*arr[rhs-'a']};
        break;
      case '<':
        // Assign intSet at lhs to intSet at rhs.
        cin >> lhs >> rhs;
        *arr[lhs-'a'] = *arr[rhs-'a'];
        break;
      case 'm':
        // Move constructs lhs from rhs, rhs is now
        // no longer usable until a new intSet is created there!
        cin >> lhs >> rhs;
        if (arr[lhs-'a']) delete arr[lhs-'a'];
        arr[lhs-'a'] = new intSet{std::move(*arr[rhs-'a'])};
        break;
      case 'v':
        // Move assigns lhs from rhs, rhs is now
        // no longer usable until a new intSet is created there!
        cin >> lhs >> rhs;
        *arr[lhs-'a'] = std::move(*arr[rhs-'a']);
        break;
      default:
        cout << "Invalid command: " << c << " encountered!" << endl;
    }
  }
  for (int i = 0; i < 4; ++i) delete arr[i];
  delete[] arr;
}
