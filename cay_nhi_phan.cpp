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

void makeRoot(node *root, int u, int v, char c){
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c){
    if(root == NULL) return; 
    if(root->data == u) makeRoot(root, u, v, c);
    else{
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

void inorder(node *root){
    if(root != NULL){
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preorder(node *root){
    if(root != NULL){
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
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

void spiralorder(node *root){
    stack<node*>s1, s2; 
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            node *x = s1.top(); s1.pop();
            cout << x->data << " ";
            if(x->right != NULL)
                s2.push(x->right);
            if(x->left != NULL)
                s2.push(x->left);

        }
        while(!s2.empty()){
            node *x = s2.top(); s2.pop();
            cout << x->data << " ";
            if(x->left != NULL)
                s1.push(x->left);
            if(x->right != NULL)
                s1.push(x->right);
        }
    }
}

bool search(node *root, int key){
    if(root == NULL) return false;
    if(root->data == key) return true;
    else if(root->data < key)
        return search(root->right, key);
    else
        return search(root->left, key);
}

node *insert(node *root, int key){
    if(root == NULL)
        return new node(key);
    if(key < root->data)
        root->left = insert(root->left, key);
    else if(key > root->data)
        root->right = insert(root->right, key);
    return root;
}

node *minNode(node *root){
    node *tmp = root; 
    while(tmp != NULL && tmp->left != NULL)
        tmp = tmp->left;
    return tmp;
}

node *deleteNode(node *root, int key){
    if(root == NULL) return root;
    if(key < root->data)
        root->left = deleteNode(root->left, key);
    else if(key > root->data)
        root->right = deleteNode(root->right, key);
    else{
        if(root->left == NULL){
            node *tmp = root->right; 
            delete root; 
            return tmp;
        }
        else if(root->right == NULL){
            node *tmp = root->left;
            delete root; 
            return tmp;
        }
        else{
            node *tmp = minNode(root->right);
            root->data = tmp->data; 
            root->right = deleteNode(root->right, tmp->data);
        }
    }
    return root;
}

set<int>se;
void node_la_cung_muc(node *root, int cnt){
    if(root == NULL) return; 
    if(root->left == NULL && root->right == NULL) se.insert(cnt);
    node_la_cung_muc(root->left, cnt + 1);
    node_la_cung_muc(root->right, cnt + 1);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n; 
    node *root = NULL;
    for(int i = 0; i < n; ++i){
        int u, v; char c; cin >> u >> v >> c;
        if(root == NULL){
            root = new node(u);
            if(c == 'L') root->left = new node(v);
            else root->right = new node(v);
        }
        else  insertNode(root, u, v, c);
    }
    root = deleteNode(root, 3);
    levelorder(root);
    return 0;
}

/*
12
1 2 L 1 3 R 2 4 L 2 5 R 4 8 L 4 9 R 5 10 L 5 11 R
3 6 L 3 7 R 6 13 R 7 14 L
*/