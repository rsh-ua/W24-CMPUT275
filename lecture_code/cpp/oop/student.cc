#include <iostream>

using namespace std;

struct Student {
  int cCount;
  float gpa;
  const int sID;

  Student(int cCount, float gpa, int sID) : cCount{cCount}, gpa{gpa}, sID{sID} {}
};

ostream &operator<<(ostream &out, const Student &s) {
  out << "Student is taking " << s.cCount << " courses and their GPA is: " << s.gpa << " and their ID is " << s.sID;
  return out;
}

int main() {
  Student s{5, 2.7, 1893340};
  Student t{3, 3.5, 1924467};
  cout << s << endl;
  cout << t << endl;
}
