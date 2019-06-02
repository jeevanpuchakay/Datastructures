#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x;
	node *right,*left;
};
void createnode()
{
	node* child=new node;
	child->x=NULL;
	child->left=NULL;
	child->right=NULL;
}
int main()
{
	node *tee=NULL;
	int n;
	cout<<"enter number of nodes :";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		initialise();
	}
}
