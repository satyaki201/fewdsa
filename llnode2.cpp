#include <iostream>
using namespace std;

struct Node2 {
    int data;
    Node2* next=NULL; // Note that Node2* points to the next node of the same type
};

int main()
{
    // Creating a new node
    Node2* newNode = new Node2;
    newNode->data = 5;

    cout << "Node data: " << newNode->data << endl;

    // Freeing the allocated memory
    delete newNode;

    return 0;
}
