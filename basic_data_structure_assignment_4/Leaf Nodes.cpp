
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
vector<int> v;
void print_leaf_nodes(Node* root){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        v.push_back(root->val);
    }

    print_leaf_nodes(root->left);
    print_leaf_nodes(root->right);
}

int main()
{
    Node* root = input_tree();
    print_leaf_nodes(root);
    sort(v.begin(), v.end(), greater<>());
    for(auto i: v){
        cout << i << " ";
    }
    return 0;
}
