#include <iostream>

template <typename T>
T max(T a, T b) {
  return a > b ? a : b;
}

struct Operation {
  int lhs, rhs;
  char op;

  // Calculate is a const method, it promises it
  // will not mutate the object on which it is called
  // (the object pointed at by the this pointer)
  int Calculate() const {
    int val = 0;
    switch (op) {
      case '+':
        val = lhs+rhs;
        break;
      case '-':
        val = lhs-rhs;
        break;
      case '*':
        val = lhs*rhs;
        break;
      case '/':
        val = lhs/rhs;
        break;
    }
    return val;
  }

  bool operator>(const Operation &r) {
    return Calculate() > r.Calculate() ? 1 : 0;
  }
};

std::ostream &operator<<(std::ostream &out, const Operation &r) {
  return out << "Expression(" << r.lhs << r.op << r.rhs <<")";
}

int main() {
  using std::cout;
  using std::endl;
  Operation op{1,5,'+'};
  cout << "1+5=" << op.Calculate() << endl;
  Operation mult{20,7, '*'};
  cout << "20*7=" << mult.Calculate() << endl;
  int i = 10;
  int j = -50;
  short int x = 5;
  float q = 33.3;
  float z = 56.7;
  // max(i,j) is same as max<int>(i, j)
  // The compiler infers the type for T
  // from the arguments i and j since
  // the Params are type T
  std::cout << max(i, j) << std::endl;
  // Similarly, max(q, z) is the same as
  // max<float>(q,z)
  std::cout << max(q, z) << std::endl;
  // Here, the arguments don't have the same type
  // The compiler expects that the params are both type T,
  // whatever that may be.
  // If this were a regular function that took an int, we could
  // convert a short int into an int to pass in. We can do that
  // here also, but must tell the compiler which type to use for T
  // to know it has to do that conversion.
  // So cannot write just max(x,i);
  std::cout << max<int>(x,i) << std::endl;
  cout << max(op, mult) << endl;
}
