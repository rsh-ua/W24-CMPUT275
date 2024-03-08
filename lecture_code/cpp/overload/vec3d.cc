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

int main() {
  Vec3D v;
  v.x = 1; v.y = 2; v.z = 3;
  Vec3D q = v*5;
  cout << q.x << " " << q.y << " " << q.z << endl;
  Vec3D p = 2*q;
  cout << p.x << " " << p.y << " " << p.z << endl;
  p = p+v;
  cout << p.x << " " << p.y << " " << p.z << endl;
  cout << q*p << endl;
}
