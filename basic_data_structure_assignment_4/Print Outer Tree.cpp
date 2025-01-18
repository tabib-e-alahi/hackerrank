#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree()
{
    int val;
    cin >> val;
    Node* root;
    if(val == -1){
        root = NULL;
    }
    else{
        root = new Node(val);
    }

    queue<Node*> q;
    if(root){
        q.push(root);
    }

    while(!q.empty()){
        Node* parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l == -1){
            myLeft = NULL;
        }else
        {
            myLeft = new Node(l);
        }
        if(r == -1){
            myRight = NULL;
        }
        else{
            myRight = new Node(r);
        }

        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left)
            q.push(parent->left);

        if(parent->right)
            q.push(parent->right);
    }

    return root;
}

void left_sub_tree(Node* root)
{
    if(root == NULL){
        return;
    }
    if(root->left){
        left_sub_tree(root->left);
        cout << root->left->val << " ";
    }
    else if(root->right){
        left_sub_tree(root->right);
        cout << root->right->val << " ";
    }
    else{
        return;
    }
}

void right_sub_tree(Node* root)
{
    if(root == NULL){
        return;
    }
    if(root->right){
        cout << root->right->val << " ";
        right_sub_tree(root->right);
    }
    else if(root->left){
        cout << root->left->val << " ";
        right_sub_tree(root->left);
    }
    else{
        return;
    }
}


int main()
{
    Node* root = input_tree();
    if(root->left)
        left_sub_tree(root);
    cout << root->val << " ";
    if(root->right)
        right_sub_tree(root);
    return 0;
}

