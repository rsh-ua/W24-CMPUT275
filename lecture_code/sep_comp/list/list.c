#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"
struct Node {
  int data;
  struct Node *next;
};

struct List {
  struct Node *head;
  size_t len;
};

struct List *createList() {
  struct List *ret = malloc(sizeof(struct List));
  ret->len = 0;
  ret->head = NULL;
}

void addToFront(struct List *l, int val) {
  struct Node *newHead = malloc(sizeof(struct Node));
  newHead->next = l->head;
  newHead->data = val;
  l->head = newHead;
  l->len++;
}

size_t len(struct List *l) {
  return l->len;
}

int ith(struct List *l, size_t i) {
  // O(n) !!!! We would never accept this.
  // We'll fix this problem in C++.
  assert(i < l->len);
  struct Node *cur = l->head;
  size_t ind = 0;
  for (; ind < i; ++ind, cur = cur->next);
  return cur->data;
}

void setElem(struct List *l, size_t i, int val) {
  // Also O(n)! That's awful!
  assert(i < l->len);
  struct Node *cur = l->head;
  size_t ind = 0;
  for (; ind < i; ++ind, cur = cur->next);
  cur->data = val;
}

void removeIth(struct List *l, size_t i) {
  assert(i < l->len);
  if (i == 0) {
    struct Node *oldHead = l->head;
    l->head = l->head->next;
    l->len--;
    free(oldHead);
    return;
  }
  struct Node *prev = l->head;
  for (size_t j = 0; j < i-1; prev=prev->next, ++j);
  struct Node *toDelete = prev->next;
  prev->next = prev->next->next;
  free(toDelete);
  l->len--;
  return;
}

void deleteNode(struct Node *n) {
  if (!n) return;
  deleteNode(n->next);
  free(n);
}

void deleteList(struct List *l) {
  if (!l) return;
  deleteNode(l->head);
  free(l);
}
