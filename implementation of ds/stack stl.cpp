#include<bits/stdc++.h>
using namespace std;
void show(stack<int>a)
{
	while(!a.empty())
	{
		cout<<a.top()<<" ";
		a.pop();
	}
	return;
}
int main()
{
	stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	cout<<"stack before poping 6:";
	show(s);
	s.pop();
	cout<<"stack after poping 6:";
	show(s);
}
