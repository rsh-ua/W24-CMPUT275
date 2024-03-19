#include "list.h"
#include <iostream>
using namespace std;


List::List() : theHead{nullptr}, len{0} {}
List &List::addToFront(int x) {
  theHead = new Node{x, theHead};
  ++len;
  return *this;
}

List::~List() {
  delete theHead;
}

List::List(const List &o) : theHead{o.theHead ? new Node{*o.theHead} : nullptr},
  len{o.len} {}

List &List::operator=(const List &rhs) {
  // *this is the left hand operand implicitly
  // if this == &rhs, this is self assignment, no-op
  if (this == &rhs) return this;
  Node *tmp = theHead;
  theHead = rhs.theHead ? new Node{*rhs.theHead} : nullptr;
  delete theHead;
  // has succeeded
  len = rhs.len;
  return *this;
}

List::Node::Node(int data, Node *next) : data{data}, next{next} {}
List::Node::~Node() {
  delete next;
}

List::Node::Node(const Node &o) : data{o.data},
  next{o.next ? new Node{*o.next} : nullptr} {}

void List::setIth(int i, int val) {
  if (i < 0 || i >= len) return;
  Node *cur = theHead;
  for (int j = 0; i < j; ++j, cur = cur->next);
  cur->data = val;
}

ostream &operator<<(ostream &out, const List &l) {
  // Friend, so can use the type Node
  // BUT the type Node is nested in List, so we can't
  // just say Node, we must say where Node is from.
  List::Node *cur = l.theHead;
  while (cur != nullptr) {
    out << cur->data << " ";
    cur = cur->next;
  }
  return out;
}
