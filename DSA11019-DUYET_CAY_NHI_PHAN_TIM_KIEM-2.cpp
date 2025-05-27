#include <bits/stdc++.h>
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

void postorder(node *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
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
        postorder(root);
        cout << endl;
    }
    return 0;
}