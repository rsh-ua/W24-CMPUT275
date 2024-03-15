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

List::Node::Node(int data, Node *next) : data{data}, next{next} {}
List::Node::~Node() {
  delete next;
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
