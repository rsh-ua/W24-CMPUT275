#include <iostream>
using namespace std;
void printArray(int *arr, size_t size) {
  for (size_t i = 0; i < size; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main() {
  int *p = new int[10];
  for (int i = 0; i < 10; ++i) p[i] = i*2;
  int &r = p[2];
  printArray(p, 10);
  r = -20;
  printArray(p, 10);

  delete[] p;
  cout << r << endl; // Undefined Behaviour!!!!
  // r was a reference to the third element of the array p pointed at.
  // That array has now been freed! That item no longer exists.
  // This is a dangling reference, same as a dangling pointer would be.
  // Reading or writing from r is illegal.
  // Have to be aware of your references and the lifetime of the data they're bound to
  // Since you can't reseat a reference generally make sure to never bind a reference to
  // a piece of data it will outlive.
}
