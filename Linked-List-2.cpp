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

Node *findMidPoint()
{
    Node *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *findLastKthItem(int k)
{
    Node *fast = head,*slow = head;

    for(int i=0;i<k;i++)
    {
        fast = fast->next;
        if(fast==NULL)
        {
            cout << "kth item doesn't exist" << endl;
            return NULL;
        }
    }


    while(fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow = slow->next;

    return slow;
}

Node *intersection()
{
    Node *p = head,*q = head;
    int n1 = 0,n2 = 0;

    while(p->next != NULL)
    {
        n1++;
    }
    while(q->next != NULL)
    {
        n2++;
    }

    int x = n1-n2;
    if(x>=0)
    {
        while(x--)
        {
            p = p->next;
        }
    }
    else
    {
        while(x--)
        {
            q = q->next;
        }
    }

    while(p->data != q->data)
    {
        p = p->next;
        q = q->next;
    }

    return p;

}

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
    insertAtEnd(1);
    print();

    /********************/
    Node *mid = findMidPoint();
    cout << "mid point : " << mid->data << endl;
    /********************/

    /********************/
    int k;
    cout << "enter k : ";
    cin >> k;
    Node *kth_item = findLastKthItem(k);
    cout << "kth item from the last : " << kth_item->data << endl;
    /********************/

    
}