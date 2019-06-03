#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node* left,*right;
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
        createnode(x);
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
    return node;
}

int main()
{
    node*root=NULL;
    root=insertnode(root,1);
    insertnode(root,2);
    insertnode(root,3);
    insertnode(root,4);
    insertnode(root,6);
    insertnode(root,7);
    insertnode(root,8);
    showtree(root);
    return 0;
}