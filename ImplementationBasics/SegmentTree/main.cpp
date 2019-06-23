#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int sum(int arr[],int i,int j)
{
    int temp=0;
    for (int k = i; k <=j ; ++k) {
        temp+=arr[k];
    }
    cout<<i<<" "<<j<<temp;
    return temp;
}
struct node
{
    int key;
    node* left;
    node* right;
};
node* createnode(int x)
{
    node* root=new node;
    root->key=x;
    root->right=root->left=NULL;
    return root;
}
node* insert(node* root,int arr[],int i,int j)
{
    int m=(i+j)/2;
    if(root==NULL)
        return root=createnode(sum(arr,i,j));
    else
    {
        root->left=insert(root->left,arr,i,m);
        root->right=insert(root->right,arr,m+1,j);
    }
    return root;
}
void printinorder(node* root)
{
    if(root==NULL)
        return;
    else
    {
        printinorder(root->left);
        cout<<root->key<<" ";
        printinorder(root->right);
    }
}
int main()
{
    int n;
    int arr[n];
    for (int i = 0; i <n ; i++) {
        cin>>arr[i];
    }
    node* root=NULL;
    root=insert(root,arr,0,n-1);

    return 0;
}