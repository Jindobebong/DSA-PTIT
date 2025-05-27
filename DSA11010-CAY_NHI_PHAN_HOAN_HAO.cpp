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

int check(node *root){
    if(root == NULL) return true;
    if(!root->left && !root->right) return true;
    if(!root->left || !root->right) return 0;
    return check(root->left) && check(root->right);
}
set<int>se; 
void node_la(node *root, int cnt){
    if(root == NULL) return; 
    if(!root->left && !root->right) se.insert(cnt);
    node_la(root->left, cnt + 1);
    node_la(root->right, cnt + 1);
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
        node_la(root, 0);
        if(check(root) && se.size() == 1) cout << "Yes";
        else cout << "No";
        se.clear();
        cout << endl;
    }
    return 0;
}