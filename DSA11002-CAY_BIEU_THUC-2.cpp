#include <bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define endl "\n"
using namespace std;

struct node{
    string data; 
    node *left; 
    node *right; 
    node(string x){
        data = x; 
        left = right = NULL;
    }
};
node *build(vector<string>a, int i){
    if(i >= a.size()) return NULL;
    node *root = new node(a[i]);
    root->left = build(a, 2 * i + 1);
    root->right = build(a, 2 * i + 2);
    return root;
}

int calc(node *root){
    if(!root->left && !root->right)
        return stoi(root->data);
    int l = calc(root->left),
    r = calc(root->right);
    if(root->data == "+") return l + r;
    if(root->data == "-") return l - r;
    if(root->data == "*") return l * r;
    return l / r;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        int n; cin >> n; 
        vector<string>a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        node *root = build(a, 0);
        cout << calc(root) << endl;
    }
    return 0;
}