
 
#include <bits/stdc++.h>
using namespace std;
 
// Structure of Node
class Node {
public:
    int data;
    Node* next;
};
 
// Function to print the content of
// linked list starting from the
// given node
void printList(Node* n)
{
 
    // Iterate till n reaches NULL
    while (n != NULL) {
 
        // Print the data
        cout << n->data << " ";
        n = n->next;
    }
}
 
// Driver Code
int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
 
    // Allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();
 
    // Assign data in first node
    head->data = 1;
 
    // Link first node with second
    head->next = second;
 
    // Assign data to second node
    second->data = 2;
    second->next = third;
 
    // Assign data to third node
    third->data = 3;
    third->next = NULL;
 
    printList(head);
 
    return 0;
}