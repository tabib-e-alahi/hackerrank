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

bool check_palindrome(Node* head, Node* tail)
{
    Node* tmp1 = head;
    Node* tmp2 = tail;

    if (head == NULL)
    {
        return true;
    }

    while (tmp1 != tmp2 && tmp2->next != tmp1)
    {
        if (tmp1->val != tmp2->val)
        {
            return false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->prev;
    }
    return true;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode ->prev = tail;
    tail = newNode;
}

void print_doubly_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    bool is_pal = check_palindrome(head, tail);
    if(is_pal == true)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
