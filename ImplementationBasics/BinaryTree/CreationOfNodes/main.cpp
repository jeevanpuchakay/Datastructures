#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x;
    node *left,*right;
};
node* createnode(int a)
{
    node* child=new node;
    child->left=NULL;
    child->right=NULL;
    child->x=a;
    return child;
}

int main() {
    node* root=createnode(1);
    root->left=createnode(2);
    root->right=createnode(3);
    (root->left)->left=createnode(4);
    (root->left)->right=createnode(5);
    (root->right)->left=createnode(6);
    (root->right)->right=createnode(7);

    return 0;
}