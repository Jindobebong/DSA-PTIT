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

// void levelorder(node *root){
//     queue<node*>q;
//     q.push(root);
//     while(!q.empty()){
//         node* x = q.front(); q.pop();
//         cout << x->data << ' ';
//         if(x->left)
//             q.push(x->left);
//         if(x->right)
//             q.push(x->right);
//     }
// }

void pre(node *root){
    if(root != NULL){
        cout << root->data << ' ';
        pre(root->left);
        pre(root->right);
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
        pre(root);
        cout << endl;
    }
    return 0;
}