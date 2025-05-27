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

void levelorder(node *root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node *x = q.front(); q.pop();
        cout << x->data << " ";
        if(x->left != NULL)
            q.push(x->left);
        if(x->right != NULL)
            q.push(x->right);
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        int n; cin >> n; 
        int u, v; char c;
        node *root = NULL;
        for(int i = 0; i < n; ++i){
            cin >> u >> v >> c;
            if(root == NULL){
                root = new node(u);
                makeRoot(root, u, v, c);
            }
            else insertNode(root, u, v, c);
        }
        levelorder(root);
        cout << endl;
    }
    return 0;
}