#include <bits/stdc++.h>
#define maxn 1000005
#define endl "\n"
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int node_la(node *root, bool isRight)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL && isRight)
        return root->data;
    return node_la(root->left, false) + node_la(root->right, true);
}
void deleteRoot(node *root){
    if(root == NULL) return;
    delete(root->left);
    delete(root->right);
    delete(root);
}
void buil()
{
    int n;
    cin >> n;
    map<int, node *> mp;
    set<int> child;
    for (int i = 0; i < n; ++i)
    {
        int u, v;
        char c;
        cin >> u >> v >> c;
        if (!mp[u])
            mp[u] = new node(u);
        if (!mp[v])
            mp[v] = new node(v);
        if (c == 'L')
            mp[u]->left = mp[v];
        else
            mp[u]->right = mp[v];
        child.insert(v);
    }

    node *root = NULL;
    for (auto [val, nd] : mp)
    {
        if (child.find(val) == child.end())
        {
            root = nd;
            break;
        }
    }
    cout << node_la(root, false) << endl;
    deleteRoot(root);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        buil();
    }
    return 0;
}