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

void inp(node *&root){
    int n, u, v; char c; 
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> u >> v >> c;
        if(root == NULL){
            root = new node(u);
            makeRoot(root, u, v, c);
        }
        else insertNode(root, u, v, c);
    }
}
int check(node *root1, node *root2){
    if(root1 == NULL && root2 == NULL) return 1;
    if(root1 == NULL || root2 == NULL) return 0; 
    if(root1->data != root2->data) return 0;
    return check(root1->left, root2->left) && check(root1->right, root2->right);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        node *root1 = NULL, *root2 = NULL; 
        inp(root1);
        inp(root2);
        cout << check(root1, root2) << endl;
    }
    return 0;
}