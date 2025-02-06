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

int count_nodes(Node* root){
    if(root == NULL){
        return 0;
    }

    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l+r+1;
}


int max_depth(Node* root){
    if(root == NULL){
        return 1;
    }
    if(root->left == NULL && root->right == NULL){
        return 1;
    }

    int l = max_depth(root->left);
    int r = max_depth(root->right);

    return max(l,r)+1;
}

int main()
{
    Node* root = input_tree();
    int total_nodes = count_nodes(root);
    int d = max_depth(root);
    if(total_nodes == (pow(2,d)-1)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}

