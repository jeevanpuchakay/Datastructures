#include <bits/stdc++.h>
using namespace std;
void show(queue<int>a)
{
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
}

int main() {
    queue<int>q;
    q.push(1);//appends 1 to the queue
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout<<"q before poping "<<1<<":";
    show(q);
    return 0;
}