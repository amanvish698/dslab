#include<iostream> #include<conio.h> #include<process.h> 
using namespace std; 
#define MAX 3

int a[MAX]; class circularq
{
int f,r,item,i; public:
circularq()
{
f=-1;
r=-1;
}
void insert(); void del(); void display();
};
void circularq::insert()
{
if(((r==MAX-1)&& (f==0))||(r+1==f))
{
cout<<"\nCircular queue is overflow."; return;
}
if(r==MAX-1) r=0;
else r=r+1;
cout<<"\nEnter new element-"; cin>>item;
a[r]=item; if(f==-1) f=0;
}

void circularq::del()
{
if(f==-1)
{
cout<<"Circular queue is empty."; return ;
}
cout<<"\nDeleted element is- "<<a[f]; a[f]=0;
if(f==r) f=r=-1;
else
{
if(f==MAX-1) f=0;
else f=f+1;
}
}
void circularq::display()
{
if(f==-1)
cout<<"\nCircular queue is empty."; else
{
for(i=0;i<=MAX-1;i++)
cout<<a[i]<<"\t";
}
}
int main()
{

cout<<"MCA students"<<endl; circularq q;
int ch;
for(int i=0;i<=MAX-1;i++) a[i]=0;
cout<<"1: Insert"<<endl; cout<<"2: Delete"<<endl; cout<<"3: Dispaly"<<endl; cout<<"4: Exit"<<endl;
do
{
cout<<"\nEnter choice-"; cin>>ch;
switch(ch)
{
case 1: q.insert(); break;
case 2: q.del(); break;
case 3: q.display(); break;
case 4: exit(0);
}
}
while(ch!=4); return 0;
}
