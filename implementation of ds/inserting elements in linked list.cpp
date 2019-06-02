#include<bits/stdc++.h>
using namespace std;
struct node
{	
	int x;
	node* next;
};
node* initialise()
{
	node*end=new node();
	//allocates memory to a new variable in such a way it can store a node
	//actually returns a pointer
	if(!end)
	{
		cout<<"memory allocation failed";
		return 0;
	}
	else
	{
		int a;
		cout<<"enter data to be stored";
		cin>>a;
		end->x=a;
		end->next=NULL;
	}
	node*
	return end;
}
int main()
{
	int a;
	cout<<"enter the data to be stored in the first elment";
	cin>>a;
	node* head;
	head->x=a;
	head->next=initialise();
	
	
}
