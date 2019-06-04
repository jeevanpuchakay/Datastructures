#include<bits/stdc++.h>
using namespace std;
//BadMemoryAllocationError
struct node
{
    node* children[26];
    bool isendofword;
};
node* createnode()
{
    node* root=(node*)malloc(sizeof(node));
    root->isendofword= false;
    for(int i=0;i<26;i++)
        root->children[i]=NULL;
    return root;
}
void inserttext(node*root,string text)
{
    for(int i=0;i<text.size();i++)
    {
        int index=text[i]-'a';
        if(!root->children[index])
        {
            root->children[index]=createnode();
        }
        root=root->children[index];
    }
    root->isendofword=true;
}
bool search(node* root,string text)
{
    if(root==NULL)
        return 0;
    for (int i = 0;i<text.size();++i) {
        int index=text[i]-'a';
        if(!root->children[index])
            return false;
        root=root->children[index];
    }
    return root->isendofword;
}
int main()
{
    string text[]={"i","learnt","from","geeks","forgeeks","geeksfor","what","about","you"};
    node* root=NULL;
    root=createnode();
    for(int i=0;i<sizeof(text);i++)
        inserttext(root,text[i]);
    search(root,"what")?cout<<"present":cout<<"absent"<<endl;
    search(root,"you")?cout<<"present":cout<<"absent"<<endl;
    search(root,"geek")?cout<<"present":cout<<"absent"<<endl;
    search(root,"learn")?cout<<"present":cout<<"absent"<<endl;
    return 0;
}
