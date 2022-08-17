#include <iostream>
using namespace std;

// node creation
class Node {
public:
   int data;
  Node* next;
   Node* prev;
};

// insert node at the front
void insertFront(Node** tail, int data) {
  // allocate memory for newNode
   Node* newNode = new Node;

  // assign data to newNode
  newNode->data = data;

  // make newNode as a head
  newNode->next = (*tail);

  // assign null to prev
  newNode->prev = NULL;

  // previous of head (now head is the second node) is newNode
  if ((*tail) != NULL)
    (*tail)->prev = newNode;

  // head points to newNode
  (*tail) = newNode;
}





// print the doubly linked list
void displayList(Node* node) {
   Node* last;

  while (node != NULL) {
    cout << node->data << "->";
    last = node;
    node = node->next;
  }
  if (node == NULL)
    cout << "NULL\n";
}

int main() {
  // initialize an empty node
   Node* head = NULL;

 
  insertFront(&head, 1);
  insertFront(&head, 6);
  insertFront(&head, 68);
  
  // insert 15 after the seond node
 
  displayList(head);



}
