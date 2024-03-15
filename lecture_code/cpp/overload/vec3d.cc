#include <iostream>
using namespace std;

struct Vec3D {
  int x, y, z;
};

Vec3D operator*(Vec3D, int);

Vec3D operator*(int n, Vec3D v) {
  return v*n;
}

Vec3D operator*(Vec3D v, int n) {
  Vec3D ret;
  ret.x = v.x*n;
  ret.y = v.y*n;
  ret.z = v.z*n;
  return ret;
}

Vec3D operator+(Vec3D lhs, Vec3D rhs) {
  Vec3D ret;
  ret.x = lhs.x + rhs.x;
  ret.y = lhs.y + rhs.y;
  ret.z = lhs.z + rhs.z;
  return ret;
}

int operator*(Vec3D lhs, Vec3D rhs) {
  return lhs.x*rhs.x + lhs.y*rhs.y + lhs.z*rhs.z;
}

ostream &operator<<(ostream &out, const Vec3D &v) {
  return out << "[" << v.x << ", " << v.y << ", " << v.z << "]";
}

istream &operator>>(istream &in, Vec3D &v) {
  return in >> v.x >> v.y >> v.z;
}

int main() {
  Vec3D v;
  v.x = 1; v.y = 2; v.z = 3;
  Vec3D q = v*5;
  cout << q << endl;
  Vec3D p = 2*q;
  cout << p << endl;
  p = p+v;
  cout << p << endl;
  cout << q*p << endl;
  Vec3D x;
  cout << "Give me a Vec3D: ";
  cin >> x;
  cout << 5*x << endl;
}
