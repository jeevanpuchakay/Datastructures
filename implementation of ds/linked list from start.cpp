#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x;
	node* next;
};
node* head=NULL;
void insert(int a)
{
	node* new_node=new node;
	new_node->x=a;
	new_node->next=head;
	head=new_node;
}
void show()
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->x<<" ";
		temp=temp->next;
	}
	return;
}
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	show();
}
