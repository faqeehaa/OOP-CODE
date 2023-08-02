
// C++ program to illustrate creation
// and traversal of Doubly Linked List
 
#include <bits/stdc++.h>
using namespace std;
 
// Doubly linked list node
class Node {
public:
    int data;
    Node* next;
    Node* prev;
};
 
// Function to push a new element in
// the Doubly Linked List
void push(Node** head_ref, int new_data)
{
    // Allocate node
    Node* new_node = new Node();
 
    // Put in the data
    new_node->data = new_data;
 
    // Make next of new node as
    // head and previous as NULL
    new_node->next = (*head_ref);
    new_node->prev = NULL;
 
    // Change prev of head node to
    // the new node
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
 
    // Move the head to point to
    // the new node
    (*head_ref) = new_node;
}
 
// Function to traverse the Doubly LL
// in the forward & backward direction
void printList(Node* node)
{
    Node* last;
 
    cout << "\nTraversal in forward"
         << " direction \n";
    while (node != NULL) {
 
        // Print the data
        cout << " " << node->data << " ";
        last = node;
        node = node->next;
    }
 
    cout << "\nTraversal in reverse"
         << " direction \n";
    while (last != NULL) {
 
        // Print the data
        cout << " " << last->data << " ";
        last = last->prev;
    }
}
 
// Driver Code
int main()
{
    // Start with the empty list
    Node* head = NULL;
 
    // Insert 6.
    // So linked list becomes 6->NULL
    push(&head, 6);
 
    // Insert 7 at the beginning. So
    // linked list becomes 7->6->NULL
    push(&head, 7);
 
    // Insert 1 at the beginning. So
    // linked list becomes 1->7->6->NULL
    push(&head, 1);
 
    cout << "Created DLL is: ";
    printList(head);
 
    return 0;
}