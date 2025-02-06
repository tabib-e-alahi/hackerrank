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


void min_max(Node* head){
    Node* tmp = head;
    int max = INT_MIN;
    int min = INT_MAX;
    while(tmp != NULL){
        if(tmp->val > max){
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    Node* tmp2 = head;
    while(tmp2 != NULL){
        if(tmp2->val < min){
            min = tmp2->val;
        }
        tmp2 = tmp2->next;
    }
    
    cout << max - min << endl;
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

void print_linked_list(Node* head){
	Node* tmp = head;
	while(tmp != NULL){
	    cout << tmp -> val <<" ";
	    tmp = tmp -> next;
	}
	cout << endl;
}

int main() {
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

    min_max(head);
}