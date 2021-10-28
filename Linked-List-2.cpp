#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*head=NULL;

void insertAtBeginning(int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    if(head == NULL)
    {
        newNode->next = NULL;
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insertAtEnd(int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *cur = head;
        while(cur->next != NULL)
        {
            cur = cur->next;
        }
        cur->next = newNode;
    }
}

void dele

void print()
{
    Node *cur = head;
    while(cur != NULL)
    {
        printf("%d ",cur->data);
        cur = cur->next;
    }
    printf("\n");

}

int main()
{
    insertAtEnd(5);
    insertAtEnd(4);
    insertAtEnd(3);
    insertAtEnd(2);
    insertAtBeginning(6);
    print();
}