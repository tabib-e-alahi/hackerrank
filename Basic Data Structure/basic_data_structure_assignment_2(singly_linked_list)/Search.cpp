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


void find_an_element(Node * head, int element) {
    Node * tmp = head;
    int i = 0;
    int flag = 0;
    while (tmp != NULL) {
        if (tmp -> val == element) {
            flag = 1;
            break;;
        }
        tmp = tmp -> next;
        i++;
    }
    flag == 1 ? cout << i << endl : cout << -1 << endl;
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



int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        Node * head = NULL;
        Node * tail = NULL;
        int val;
        while (true) {
            cin >> val;
            if (val == -1) {
                break;
            }
            insert_at_tail(head, tail, val);
        }
        cin >> val;
        find_an_element(head, val);
    }

}