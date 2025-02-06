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

vector<pair<Node*, int>> input_tree()
{
    vector<pair<Node*, int>> v;
    int val;
    cin >> val;
    Node* root;
    if(val == -1){
        root = NULL;
    }
    else{
        root = new Node(val);
    }

    queue<pair<Node*, int>> q;
    if(root){
        q.push({root, 0});
        v.push_back({root, 0});
    }

    while(!q.empty()){
        pair<Node*, int> parent = q.front();
        q.pop();
        Node* node = parent.first;
        int lvl = parent.second;

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

        node->left = myLeft;
        node->right = myRight;

        if(node->left){
            q.push({node->left, lvl+1});
            v.push_back({node->left, lvl+1});
        }

        if(node->right)
            {
                q.push({node->right, lvl+1});
                v.push_back({node->right, lvl+1});
            }
    }
    return v;
}


int main()
{
    vector<pair<Node*, int>> v = input_tree();
    int x;
    cin >> x;
    if(x > v.back().second){
        cout << "Invalid\n";
    }
    else{
        for(auto i: v){
        if(i.second == x){
            cout << i.first->val << " ";
        }
    }
    }

    return 0;
}


