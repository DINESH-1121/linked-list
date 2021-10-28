#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d = 0)
    {
        data = d;
        next = NULL;
    }

};

int main()
{
    Node *head = new Node();
    head->data = 10;
    head->next = new Node();
    head->next->data = 20;
    head->next->next = new Node();
    head->next->next->data = 30;
    head->next->next->next = NULL;

    while(head!=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    
    /************  OR   *************/

    Node *head1 = new Node(10);
    head1->next = new Node(20);
    head1->next->next = new Node(30);

    while(head1 != NULL)
    {
        cout << head1->data << " ";
        head1 = head1->next;
    }

}
