
#include <iostream>

template <typename T>
class List;

template <typename T>
std::ostream& operator<<(std::ostream &, const List<T>&);

template <typename T>
class List {
  struct Node {
    T data;
    Node * next;
    Node(T data, Node *next) : data{data}, next{next} {}
    Node(const Node &o) : data{o.data}, next{o.next ? new Node{*o.next} : nullptr} {}
    //Node &operator=(const Node &);
    ~Node() { delete next; }
  };
  Node *theHead;
  int len;
  void swap(List<T> &o) {
    std::swap(len, o.len);
    std::swap(theHead, o.theHead);
  }
 public:
  List() : theHead{nullptr}, len{0} {}
  List<T> &addToFront(T x) {
    theHead = new Node{x, theHead};
    ++len;
    return *this;
  }
  // DESTRUCTOR - called *implicitly* whenever and object of this type
  // is destroyed - for stack based objects when they go out of scope
  // and for heap objects when delete is called on them
  ~List() { delete theHead; }
  // Copy Ctor
  List(const List<T> &o) : theHead{o.theHead ? new Node{*o.theHead} : nullptr}, len{o.len} {}
  // Move Ctor
  List(List<T> &&o) : theHead{o.theHead}, len{o.len} {
    o.theHead = nullptr;
    o.len = 0;
  }
  // Copy Assignment Operator
  List<T> &operator=(const List<T> &o) {
    List<T> tmp{o};
    swap(tmp);
    return *this;
  }
  // Move assignment operator
  List<T> &operator=(List<T> &&o) {
    swap(o);
    return *this;
  }
  void setIth(int i, T val) {
    if (i < 0 || i >= len) return;
    Node *cur = theHead;
    for(int j = 0; j < i; ++j, cur=cur->next);
    cur->data = val;
  }
  T getIth(int i) {
    if (i < 0 || i >= len) return T{};
    Node *cur = theHead;
    for(int j = 0; j < i; ++j, cur=cur->next);
    return cur->data;
  }
  int length() {
    return len;
  }
  friend std::ostream& operator<< <>(std::ostream &out, const List<T> &l);
};

template <typename T>
std::ostream& operator<<(std::ostream &out, const List<T> &l) {
  auto *cur = l.theHead;
  while (cur != nullptr) {
    out << cur->data << " ";
    cur = cur->next;
  }
  return out;
}
