#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node* next;
    Node* prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void visit_func(Node* head, Node* &tmp, string add){
    Node* tmp2 = head;
    while(tmp2 != NULL){
        if(tmp2->val == add){
            cout << tmp2->val << endl;
            tmp = tmp2;
            return;
        }
        tmp2 = tmp2 -> next;
    }
    cout << "Not Available\n";
}

void next_func(Node* &tmp){
    if(tmp->next == NULL){
        cout << "Not Available\n";
    }
    else{
        tmp = tmp->next;
        cout << tmp->val << endl;
    }
}

void prev_func(Node* &tmp){
    if(tmp->prev == NULL){
        cout << "Not Available\n";
    }
    else{
        tmp = tmp->prev;
        cout << tmp->val << endl;
    }
}

void insert_at_tail(Node* &head, Node* &tail, string val)
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
    while(true)
    {
        string val;
        cin >> val;
        if(val == "end")
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    Node* tmp = head;
    int n;
    cin >> n;
    while (n--) {
        string x;
        cin >> x;
        if (x == "visit") {
            string add;
            cin >> add;
            visit_func(head, tmp, add);
        } else if (x == "next") {
            next_func(tmp);
        } else if (x == "prev") {
            prev_func(tmp);
        }
    }
    return 0;
}
