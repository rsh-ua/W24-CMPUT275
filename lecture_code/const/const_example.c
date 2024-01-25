

int main() {
  int x = 0;
  int y = 10;
  int z = 20;
  // px is a pointer to a /constant integer/
  // Cannot mutate the integer px points at
  // through px, but can change what px points at
  const int *px = &x;
  /// py is a /constant pointer/ to an int
  // Can mutate the integer py points at through py
  // but cannot change which integer py points at
  int * const py = &y;
  // This is also a pointer to a constant integer,
  // same as px.
  int const *pz = &y;
  *px = 5; // Illegal, px is pointer to a const int
  x = 5; // Legal, x itself is not const
  *py = 7; // Legal, py is a const pointer to an int
  *pz = 10; // Illegal, pz is a pointer to a const int
  px = &y; // Legal, px is a pointer to a const int, can change what it points at
  py = &x; // Illegal, py is a const pointer to an int, cannot change what it points at
  pz = &x; // Legal, pz is a pointer to a const int, can change what it points at
  // c is a /const pointer/ to a /const int/
  // Cannot chage the int it points at through c
  // Cannot change what c points at
  int const * const c = &x;
  *c = 3; // Illegal
  c = &y; // Also Illegal
}
