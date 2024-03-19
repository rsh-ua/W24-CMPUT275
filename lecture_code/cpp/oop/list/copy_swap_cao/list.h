
#include <iostream>

struct Node {
  int x, y;
};

class List {
  struct Node {
    int data;
    Node * next;
    Node(int, Node *);
    Node(const Node &);
    //Node &operator=(const Node &);
    ~Node();
  };
  Node *theHead;
  int len;
  void swap(List &other);
 public:
  List();
  List &addToFront(int x);
  // DESTRUCTOR - called *implicitly* whenever and object of this type
  // is destroyed - for stack based objects when they go out of scope
  // and for heap objects when delete is called on them
  ~List();
  // Copy Ctor
  List(const List &);
  // Copy Assignment Operator
  List &operator=(const List &);
  void setIth(int i, int val);
  friend std::ostream& operator<<(std::ostream &out, const List &l);
};

