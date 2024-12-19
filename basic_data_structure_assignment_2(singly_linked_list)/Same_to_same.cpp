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


void print_linked_list(Node * head) {
    // creating a tmp for storing the head
    Node * tmp = head;
    while (tmp != NULL) {
        cout << tmp -> val << " ";
        tmp = tmp -> next;
    }
    cout << endl;
}

void insert_at_tail(Node * & head, Node * & tail, int val) {
    Node * newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail -> next = newNode;
    tail = tail -> next;
}

void check_list(Node * head1, Node * head2) {
    Node * tmp1 = head1;
    Node * tmp2 = head2;
    int flag = 1;
    while (tmp1 != NULL && tmp2 != NULL) {
        if (tmp1 -> val != tmp2 -> val) {
            flag = 0;
            break;
        }
        tmp1 = tmp1 -> next;
        tmp2 = tmp2 -> next;
    }
    
    if(flag == 1){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}



int main() {
    Node * head1 = NULL;
    Node * tail1 = NULL;
    Node * head2 = NULL;
    Node * tail2 = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }

    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }

    if (head1 -> val != head2 -> val || tail1 -> val != tail2 -> val) {
        cout << "NO\n";
        return 0;
    }

    check_list(head1, head2);
}