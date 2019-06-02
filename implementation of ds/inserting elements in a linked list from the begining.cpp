#include<bits/stdc++.h>
using namespace std;
struct node
{	
	int x;
	node* next;
};
node*head;
void initialise()
{
	node*first=new node();
	//allocates memory to a new variable in such a way it can store a node
	//actually returns a pointer
		int a;
		cout<<"enter data to be stored";
		cin>>a;
		first->x=a;
		first->next=head;
		head=first;
	}
int main()
{
	int a;
	cout<<"enter the data to be stored in the first elment";
	cin>>a;
	node* end;
	end->x=a;
	end->next=NULL;
	head=end;
	initialise();
	initialise();	
	
}
