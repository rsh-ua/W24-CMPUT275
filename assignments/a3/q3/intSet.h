#ifndef INTSET_H_
#define INTSET_H_
#include <iostream>
class intSet {
  int *data;
  int size;
  int capacity;
 public:
  intSet(); // default constructor
  intSet(const intSet& is); // copy constructor
  intSet(intSet &&is); // move constructor
  intSet &operator=(const intSet& is); // copy assignment operator
  intSet &operator=(intSet &&is); // move assignment operator
  ~intSet();  // destructor
  intSet operator|(const intSet &other) const; // Set union
  intSet operator&(const intSet &other) const; // Set intersection.
  bool operator==(const intSet &other) const;  // Set equality.
  bool isSubset(const intSet &s) const;  // True if s is a subset of *this
  bool contains(int e) const;     // True if *this contains e
  void add(int e);          // Add e to this set.
  void remove(int e);       // Remove e from this set.
  friend std::ostream& operator<<(std::ostream& out, const intSet& is); // output operator for intSet
};


#endif
