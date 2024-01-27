#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
class priority_queue
{

struct node

{
int info, priority;
node *link;
}*first,*node1,*move;
public: priority_queue()
{
first=NULL;
}
void insert();
void del();
void display();
};
void priority_queue::insert()

{

node *node1=new node;
int item,prior;
cout<<"\n Enter item:";
cin>>item;
cout<<"\n Enter priority:";
cin>>prior;
node1->info=item;
node1->priority=prior;
node1->link=NULL;
if(first==NULL || prior< first->priority)

{
node1->link=first;
first=node1;
}
else
{
move=first;
while( move->link !=NULL && move->link->priority <= prior)
{

move=move->link;
}
node1->link=move->link;

node1->link=move->link;
move->link=node1;
}
}

void priority_queue::display()
{
if(first==NULL)
cout<<"\n Priority queue is empty.";
else
{

move=first;
cout<<"\n Elements in priority queue are:";
while(move!=NULL)

{
cout<<"\n"<<move->priority<<"\t"<<move->info;
move=move->link;
}
}
}

void priority_queue::del()
{
if( first==NULL)
{
cout<<"\n Priority queue is empty.";
return;
}
else
{
move=first;
cout<<"\n Deleted element is:"<<move->info;
first=first->link;

}
}
int main()
{
priority_queue q;
int ch;
cout<<"\n 1: Insert\n 2: Delete\n 3: Display \n 4: Exit";
do
{
cout<<"\n Enter choice:";
cin>>ch;
switch(ch)
{
case 1:
q.insert();
break;
case 2:
q.del();
break;
case 3:q.display();
break;
case 4:
exit(0);
}
}while(ch!=4); return 0;
}