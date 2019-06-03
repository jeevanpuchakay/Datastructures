#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x;
    node *left,*right;
};
node* createnode()
{
    node* child=new node;
    child->left=NULL;
    child->right=NULL;
    child->x=NULL;
    return child;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}