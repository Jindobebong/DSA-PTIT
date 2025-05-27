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

node *build(vector<int>&a, int l, int r){
    if(l > r) return NULL; 
    int mid = (l + r) / 2;
    node *root = new node(a[mid]);
    root->left = build(a, l, mid - 1);
    root->right = build(a, mid + 1, r);
    return root;
}

int count_la(node *root){
    if(root == NULL) return 0; 
    if(!root->left && !root->right) return 1;
    return count_la(root->left) + count_la(root->right);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        int n; cin >> n; 
        vector<int>a(n);
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a.begin(), a.end());
        node *root = build(a, 0, n - 1);
        cout << count_la(root) << endl;
    }
    return 0;
}