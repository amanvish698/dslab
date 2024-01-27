#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
class DLL
{

struct node
{
int info;
node *left;
node *right;
};
node *node1,*first,*temp,*pred;
int c,item;
public:
DLL()
{
first=NULL;
}
void insert_front();

void insert_last();
void display();

void del_front();
void del_last();
void search();
void count();
};
void DLL::insert_front()
{
node *node1=new node;
cout<<"\nEnter node:";
cin>>item;
node1->info=item;
node1->left=NULL;
node1->right=NULL;
if(first==NULL)
{
first=node1; return;
}
else
{
node1->right=first;
first->left=node1;
first=node1;
}
}

void DLL::insert_last()
{
node *node1=new node;

cout<<"\nEnter node:";
cin>>item;
node1->info=item;
node1->left=NULL;
node1->right=NULL;
if(first==NULL)
{
first=node1; return;
}
else
{
temp=first;
while(temp->right!=NULL)
{
temp=temp->right; // temp=right[temp]
}
temp->right=node1; // right[temp]=node1
node1->left=temp; //left[node1]=temp
}
}
void DLL::display()

{
temp=first;
if(temp==NULL)
{

cout<<"\n DLL is empty";
return;
}

else
{
cout<<"\nElements in dLL are:";
while(temp!=NULL)
{
cout<<temp->info<<" ";
temp=temp->right;
}
}
}

void DLL::del_front()
{

if(first==NULL)
cout<<"DLL Empty.";
else
{

temp=first;
first=temp->right;

temp->right=NULL;
first->left=NULL;
cout<<"\nDeleted node is:"<<temp->info;
}
}

void DLL::del_last()
{

if(first==NULL) cout<<"DLL empty.";
else
{

temp=first;
while (temp->right!=NULL)
{
pred=temp;
temp=temp->right;
}
pred->right=NULL;
temp->left=NULL;
cout<<"\nDeleted node is:"<<temp->info;
}
}

void DLL::search()
{
int c=0,x;

cout<<"\nEnter element:"; cin>>x;
for(temp=first;temp!=NULL;temp=temp->right)
{
c++;
if(temp->info==x)
{
cout<<"nElement is fount at:"<<c;
return;
}
}
cout<<"\nElement is not found:";

}
void DLL::count()
{
int c=0;

for(temp=first;temp!=NULL;temp=temp->right)
{
c++;
}
cout<<"\nNo of nodes are:"<<c;
}
int main()
{
DLL d;
int ch;
cout<<"\n1:Insert front \n2:Insert last \n3:Display \n4:Delete front\n5:Delete last \n6:Search\n7:Count \n8:Exit";
do
{

cout<<"\nEnter choice:";
cin>>ch;
switch(ch)
{
case 1:
d.insert_front();
break;
case 2:
d.insert_last();
break;

case 3: d.display();
break;
case 4: d.del_front();
break;
case 5:
d.del_last();
break;
case 6:
d.search();
break;
case 7:
d.count();
break;
case 8:
exit(0);
}
}while(ch!=8);
return 0;
}