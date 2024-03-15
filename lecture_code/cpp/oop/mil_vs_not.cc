#include <stdio.h>
#include <stdlib.h>

int primes(unsigned int n) {
  int len = n-2;
  int *arr = new int[len];
  for (int i = 0; i < len; ++i) arr[i] = 1;
  for (int i = 0; i < len; ++i) {
    if (!arr[i]) continue;
    int prime = i+2;
    for (int j = i+prime; j < len; j = j + prime) arr[j] = 0;
  }
  for (int i = len-1; i >= 0; --i) {
    if (arr[i]) {
      int prime = i+2;
      delete[] arr;
      return prime;
    }
  }
  delete[] arr;
  return 2;
}

struct Foo {
  int x;
  Foo() : x{primes(100000000)} {}
  Foo(int x) : x{primes(x)} {}
};

struct Bar {
  Foo f;
  #ifndef USEMIL
  Bar(int x) {
    f = Foo(x);
  }
  #else
  Bar(int x) : f{x} {}
  #endif
};

int main() {
  Bar b{500};
}


