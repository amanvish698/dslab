#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
int c=0;
class Queue
{
struct node
{
int info;
node *link;
}
node1;
struct node *first;

int item;
public:
Queue()
{
first=NULL;
}
void insert(); //insert in LL from last

void del(); // delete from LL from front
void display();
};
void Queue::insert()
{

node *temp;
if(c==3)
cout<<"\nQueue overflow.";
else
{
node *node1=new node;
cout<<"\nEnter element to be inserted:";
cin>>item;

node1->info=item;
node1->link=NULL;

if(first==NULL)
{ c++;
first=node1;
}
else
{

temp=first;
while(temp->link!=NULL)
{

temp=temp->link;
}

temp->link=node1;
c++;
}
}
}

void Queue::del()
{
if(first==NULL) cout<<"\nUnderflow.";
else
{
cout<<"\nDeleted element is:"<<first->info;

first=first->link;
}
}

void Queue::display()
{
node *temp;
temp=first;
if(first==NULL)

cout<<"\nUnderflow.";
else
{
while(temp!=NULL)
{
cout<<"\nElements in satck are:"<<temp->info;
temp=temp->link;

}
}
}
int main()
{
int ch;
Queue q;
cout<<"\n1:Insert \n2:Delete \n3:Display \n4:Exit";
do
{
cout<<"\nEnter choice:";
cin>>ch;
switch(ch)
{
case 1:
q.insert();
break;
case 2:
q.del();
break;
case 3:
q.display();
break;
case 4:
exit(0);
}
}while(ch!=4);
}