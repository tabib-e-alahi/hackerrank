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

void insert_at_head(Node * & head, Node * & tail, int val) {
    Node * newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode -> next = head;
    head = newNode;
}

void insert_at_tail(Node * &head, Node* &tail, int val) {
    // cout << "values: "<< val << endl;
    Node * newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail -> next = newNode;
    tail = tail -> next;
    // cout << "Tails: " << tail->val <<endl;
}

void delete_at_any_position(Node* &head,Node* &tail, int idx) {
    if (head == NULL) {
        return;
    }
    if (idx == 0) {
        // cout <<"Head: 1"<< head->val<<endl;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        // cout <<"Head: 1"<< head->val<<endl;
        return;
    }
    Node * tmp = head;
    for (int i = 0; i < idx - 1; i++) {
        if (tmp == NULL || tmp -> next == NULL) {
            return;
        }
        tmp = tmp -> next;
    }
    // cout << "deleteNode: "<< tmp->next->val<<endl;
    if(tmp->next == tail){
        // jodi je node ta delete korbo ta tail hoi tahole tail ke ager node e rekhe dibo
        tail = tmp;
    }
    if (tmp -> next != NULL) {
        Node* deleteNode = tmp -> next;
        tmp -> next = tmp -> next -> next;
        delete deleteNode;
    }
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
    Node * head = NULL;
    Node * tail = NULL;
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            insert_at_head(head, tail, v);
        }
        else if (x == 1) {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2) {
            delete_at_any_position(head, tail, v);
        }
        print_linked_list(head);
    }
}