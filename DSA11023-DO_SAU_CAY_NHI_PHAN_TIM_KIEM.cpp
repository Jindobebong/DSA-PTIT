#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
    node (int x){
        data = x; 
        left = right = NULL;
    }
};

void makeRoot(node *root, int u, int v, int c){
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root, int u, int v, int c){
    if(root == NULL) return; 
    if(root->data == u) makeRoot(root, u, v, c);
    else{
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

node *insert(node *root, int val){
    if(root == NULL) return new node(val);
    if(val < root->data)
        root->left = insert(root->left, val);
    else   
        root->right = insert(root->right, val);
    return root;
}

int height(node *root){
    if(root == NULL) return -1; 
    return max(height(root->left), height(root->right)) + 1;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        node *root = NULL;
        int n; cin >> n; 
        for(int i = 0; i < n; ++i){
            int x; cin >> x; 
            root = insert(root, x);
        }
        cout << height(root) << endl;
    }
    return 0;
}

