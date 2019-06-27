#include <bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node *left,*right;
};
node* createnode(int x)
{
    node* newnode=new node;
    newnode->key=x;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
node* insertnode(node* paren,int x)
{
    if(paren==NULL)
    {
        paren=createnode(x);
    } else{
        if(x<=paren->key)
        {
            paren->left=insertnode(paren->left,x);

        }
        else
        {
            paren->right=insertnode(paren->right,x);
        }
    }
    return paren;
}
int height(node* root)
{
    if(root==NULL)
        return 0;
    else
    {
        int lheight=height(root->left);
        int rheight=height(root->right);
        return (lheight>rheight?1+lheight:1+rheight);
    }

}
int main() {
    int n,x;//no of nodes
    node* root=NULL;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        root=insertnode(root,x);
    }
    cout<<"height of tree :"<<height(root);
    return 0;
}