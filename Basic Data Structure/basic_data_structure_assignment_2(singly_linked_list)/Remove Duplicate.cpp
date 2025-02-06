#include <bits/stdc++.h>

using namespace std;
class Node {
    public: int val;
    Node * next;

    Node(int val) {
        this -> val = val;
        this -> next = NULL;
    }
};

void remove_duplicates(Node* &head){
    Node* tmp = head;
    
    while(tmp != NULL){
        Node* tmp2 = tmp;
        Node* comp = tmp->next;
        while(comp != NULL){
            if(comp->val == tmp->val){
                Node* deleteNode = comp;
                tmp2->next = comp->next;
                comp = comp->next;
                delete deleteNode;
            }else{
                comp = comp->next;
                tmp2 = tmp2->next;
            }
        }
        tmp = tmp->next;
    }
}


void insert_at_tail(Node * &head, Node* &tail, int val) {
    Node * newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail -> next = newNode;
    tail = tail -> next;
}

void print_linked_list(Node * head) {
    Node * tmp = head;
    while (tmp != NULL) {
        cout << tmp -> val << " ";
        tmp = tmp -> next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
   remove_duplicates(head);
   print_linked_list(head);
}