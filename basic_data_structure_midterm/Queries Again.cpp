#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node* head)
{
    Node* tmp = head;
    cout << "L -> ";
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node* tail)
{
    Node* tmp = tail;
    cout << "R -> ";
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_tail(Node* &head, Node* &tail, int v)
{
    Node* newNode = new Node(v);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_x_pos(Node* &head, Node* &tail, int x, int v)
{
    if(head == NULL)
    {
        cout << "Invalid\n";
        return;
    }
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i =0; i < x-1; i++)
    {
        if(tmp == NULL)
        {
            cout << "Invalid\n";
            return;
        }
        tmp = tmp->next;
    }
    if(tmp->next == NULL)
    {
        insert_at_tail(head, tail, v);
    }
    else
    {
        newNode->next = tmp->next;
        tmp->next->prev = newNode;
        tmp->next = newNode;
        newNode->prev = tmp;
    }
    print_forward(head);
    print_backward(tail);
}

void insert_at_head(Node* &head, Node* &tail, int v)
{
    Node* newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head ->prev = newNode;
        head = newNode;
    }

    print_forward(head);
    print_backward(tail);
}



int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int n;
    cin  >> n;
    while(n--)
    {
        int x, v;
        cin >> x >> v;
        if(x== 0)
        {
            insert_at_head(head, tail, v);
        }
        else
        {
            insert_at_x_pos(head, tail, x, v);
        }
    }

    return 0;
}

