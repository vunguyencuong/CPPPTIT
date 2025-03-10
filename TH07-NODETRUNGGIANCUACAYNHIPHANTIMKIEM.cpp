#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
struct node
{
    int data;
    node* left;
    node* right;
};

node* newNode(node* root, int data){
    if(root == NULL){
        root = new node();
        root->data = data;
        root->left = root->right = NULL;
        return root;
    }
    if(data < root->data){
        root->left = newNode(root->left, data);
    }
    else if(data > root->data)
        root->right = newNode(root->right, data);
    return root;
}

bool isLeaf(node *root){
    if(root == NULL) return false;
    if(root->left == NULL && root->right == NULL) return true;
    return false;
}

int dem = 0;

void LNR(node* root){
    if(root){
        LNR(root->left);
        if(isLeaf(root)) dem++;
        LNR(root->right);
    }
}

void Run()
{
    dem = 0;
    int n; cin>>n;
    node* root = NULL;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        root = newNode(root, x);
    }
    LNR(root);
    cout<<n - dem;
    cout<<endl;
}
int main()
{
    int T;
    cin>>T;
    while(T--) Run();
    return 0;
}