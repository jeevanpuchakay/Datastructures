#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
class DisjointSet
{
    int *parent,*rank,n;//n=size of input not the set size
public:
    DisjointSet()
    {}
    DisjointSet(int n)
    {
        this->n=n;
        parent=new int[n];
        rank=new int[n];//creates an array of size n and assigns address of array's first elmemnt to rank
        makeset();
    }
    void makeset()
    {
        for (int i = 0; i < n; ++i) {
            parent[i]=i;
        }
    }
    int find(int x)
    {
        if(parent[x]==x)
        {
            return parent[x];
        }
        else
        {
            parent[x]=find(parent[x]);//minimising the height of tree,time complexity
        }
        return parent[x];
    }
    void makeunion(int x,int y)
    {
        int xset=find(x);
        int yset=find(y);
        if(xset==yset)
        {
            return;
        }
        else if(rank[xset]>rank[yset])
        {
            parent[yset]=xset;
        }
        else if(rank[xset]<rank[yset])
        {
            parent[xset]=yset;
        }
        else
        {
            parent[xset]=yset;
            rank[yset]++;
        }
    }
};

int main()
{
    DisjointSet obj(5);
    obj.makeunion(0, 2);
    obj.makeunion(4, 2);
    obj.makeunion(3, 1);
    if (obj.find(4) == obj.find(0))
        cout << "Yes\n";
    else
        cout << "No\n";
    if (obj.find(1) == obj.find(0))
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
    return 0;
}