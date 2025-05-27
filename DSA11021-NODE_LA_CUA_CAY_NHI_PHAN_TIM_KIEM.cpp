#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;
struct node{
    int data; 
    node *left; 
    node *right; 
    node(int x){
        data = x; 
        left = right = NULL;
    }
};

node *insert(node *root, int val){
    if(root == NULL) return new node(val);
    if(val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

void node_la(node *root){
    if(root == NULL) return;
    if(!root->left && !root->right) cout << root->data << " ";
    node_la(root->left);
    node_la(root->right);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        int n; cin >> n; 
        node *root = NULL;
        for(int i = 0; i < n; ++i){
            int x; cin >> x; 
            root = insert(root, x);
        }
        node_la(root);
        cout << endl;
    }
    return 0;
}