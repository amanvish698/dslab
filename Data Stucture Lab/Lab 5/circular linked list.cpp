#include<iostream>
#include<conio.h>
#include <process.h>
using namespace std;
class CLL
{
struct node
{
node *link;
int info;
};
node *first, *temp,*pred, *node1,*move;
int item;
public: CLL()

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
void CLL::insert_front()
{
node *node1=new node;
cout<<"\nEnter item:";

cin>>item;

node1->info=item;

if(first==NULL)
{
first=node1;
first->link=first;
}

else
{
temp=first; node1->link=first;
while(temp->link!=first)
{
temp=temp->link;
}
temp->link=node1;
first=node1;
}

}
void CLL::insert_last()
{
node *node1=new node;
cout<<"\nEnter item:";
cin>>item;

node1->info=item;

if(first==NULL)
{
first=node1;

first->link=first;
}
else
{
temp=first;
while(temp->link!=first)
{
temp=temp->link;
}
temp->link=node1;
node1->link=first;
}
}
void CLL:: display()
{
if( first==NULL) cout<<"\nCLL is empty.";
else
{ cout<<"\nElements in cLL are:";
temp=first;
while(temp->link!=first)
{
cout<< temp->info<<"\t";

temp=temp->link;
}

cout<<temp->info;
}
}

void CLL::del_front()
{
if(first==NULL) cout<<"\nCLL is empty.";
else if(first->link==first)
{

cout<<"\nDeleted node is"<<first->info;
first=NULL;
}

else
{
temp=first; move=first;
cout<<"\nDeleted node is:"<< first->info;
first=first->link;
while(move->link!=temp)
{
move=move->link;
}

move->link=first;
}
}
void CLL::del_last()
{
if(first==NULL) cout<<"\nCLL is empty.";
else if(first->link==first)

{

cout<<"\nDeleted node is:"<<first->info;
first=NULL;
}

else
{
temp=first;
while(temp->link!=first)
{

pred=temp; temp=temp->link;
}
cout<<"\nDeleted node is:"<<temp->info;
pred->link=first;
}
}

void CLL::search()
{

int c=0; if(first==NULL)
{

cout<<"CLL is empty.";
return;
}

else
{

move=first;
c=1;
cout<<"\n Enter the element to be search:";
cin>>item;
while(move->link!=first)
{
if(move->info==item)
{
cout<< "\nElement is found at: "<<c;
return;

}
c++;
move=move->link;

}
if(move->info==item)
{
cout<<" \nElement is found at: "<<c;
}
else
{
cout<<"\nElement is not found.";
}
}
}

void CLL:: count()
{

int c=0; if(first==NULL)

cout<<"CLL is empty.";
else
{
move=first; c=1;

while(move->link!=first)
{
c++;

move=move->link;
}
cout<<"\nNo of nodes are:"<<c;
}}

int main()
{
CLL L;
int ch;
cout<<"\n1:Insert front \n2:Insert last \n3:Display \n4:Delete front\n5:Delete last \n6:Search\n7:Count \n8:Exit";
do
{

cout<<"\nEnter choice: ";
cin>>ch;
switch(ch)
{
case 1:
L.insert_front();
break;
case 2:

L.insert_last();
break; case 3:
L.display();
break;
case 4:
L.del_front();
break;
case 5:
L.del_last();
break; case 6:
L.search();
break;
case 7:
L.count();
break;

case 8: exit(0);
}
}while(ch!=8);
return 0;
}