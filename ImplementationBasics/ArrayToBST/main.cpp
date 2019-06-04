#include<iostream>
using namespace std;
struct node
{
    int x;
    node *left,*right;
};
node* createnode(int a)
{
    node* temp=new node;
    temp->x=a;
    temp->left=temp->right=NULL;
    return temp;
}
node*createbst(node*troot,int arr[],int i,int j)
{
    int m=(i+j)/2;
    troot=createnode(arr[m]);
    if(i==j)
        return troot;
    troot->right=createbst(troot->right,arr,m+1,j);
    troot->left=createbst(troot->left,arr,i,m-1);
    return troot;
}
void printinorder(node*root)
{
    if(root==NULL)
        return;
    printinorder(root->left);
    cout<<root->x;
    printinorder(root->right);
}
void printpostorder(node*root)
{
    if(root==NULL)
        return;
    printpostorder(root->left);
    printpostorder(root->right);
    cout<<root->x<<" ";
}
void printpreorder(node*root)
{
    if(root==NULL)
        return;
    cout<<root->x<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    node*root=NULL;
    root=createbst(root,arr,0,n-1);
    printinorder(root);
    cout<<endl;
    printpostorder(root);
    cout<<endl;
    printpreorder(root);
    return 0;
}