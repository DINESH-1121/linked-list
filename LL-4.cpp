/*
    delete a node without using head node
*/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void deleteNode(Node *del)
{
    del->data = del->next->data;
    Node *temp = del->next;
    del->next = temp->next;
    delete temp;
}


int main()
{

}