#include<iostream>
#include<stdio.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node()
    {
        data=0;
        next=NULL;
    }
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

int main()
{
    Node* NewNode=new Node(5);
}