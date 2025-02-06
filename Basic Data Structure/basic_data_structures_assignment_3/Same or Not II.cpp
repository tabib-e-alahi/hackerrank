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

class myStack
{
public:
    Node* head = NULL;
    Node* tail = NULL;

    void push(int val)
    {
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        Node* deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if(tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top()
    {
        return tail->val;
    }
    bool empty()
    {
        return head == NULL;
    }
};

class myQueue
{
public:
    Node* head = NULL;
    Node* tail = NULL;

    void push(int val)
    {
        Node* newnode = new Node(val);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    void pop()
    {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }
    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
    bool empty()
    {
        return head == NULL;
    }

};

int main()
{
    int n, m;
    cin >> n >> m;
    bool isSame = true;
    if(n != m)
    {
        isSame = false;
    }
    else
    {
        myStack st;
        for(int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            st.push(v);
        }
        myQueue  q;
        for(int i = 0; i < m; i++)
        {
            int v;
            cin >> v;
            q.push(v);
        }
        while(!st.empty())
        {
            if(st.top() != q.front())
            {
                isSame = false;
                break;
            }
            else
            {
                st.pop();
                q.pop();
            }
        }

    }
    if(isSame == true)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";

    return 0;
}

