#include<iostream> 
using namespace std; 
class stacks 
{ 
private: 
int a[10],n,TOP; 
int MAXSIZE=9; 
int count=0;
public: 
stacks() 
{ 
TOP=-1; 
} 
void push(); 
void pop(); 
void peep(); 
void top(); 
void display(); 
int isempty(); 
int isfull(); 
void checkcount(); 
void change(int,int); 
}; 
void stacks::push() 
{ 
cout<<"Enter element to be pushed"<<endl; cin>>n; 
if(isfull()==1) 
{ 
cout<<"Stack Overflow"<<endl; 
} 
else 
{ 
++TOP; 
a[TOP]=n; 
cout<<n<<" is pushed onto the stack "<<endl; } 
} 
void stacks::pop() 
{ 
if(isempty()==1) 
{ 
cout<<"Stack Empty"<<endl; 
} 
else 
{ 
cout<<a[TOP]<<" removed from the stack"<<endl; TOP--; 
} 
} 
void stacks::top() 
{
if(isempty()==1) 
{ 
cout<<"Stack Empty"<<endl; 
} 
else 
{ 
cout<<"Element at stack top is :"<<a[TOP]<<endl; } 
} 
void stacks::peep() 
{ 
int pos; 
cout<<"Enter the element position from the top of the stack to  display"<<endl; 
cin>>pos; 
if(TOP-pos+1<0) 
{ 
cout<<"Stack underflow on Peep"<<endl; 
} 
else 
cout<<pos<<" element from the top of the stack is :"<<a[TOP - pos + 1]<<endl; 
} 
void stacks::display() 
{ 
if(isempty()==1) 
{ 
cout<<"Stack Empty"<<endl; 
} 
else 
{ 
cout<<"Stack elements are: "<<endl; 
for(int i=TOP;i>=0;i--) 
{ 
cout<<a[i]<<endl; 
} 
} 
} 
int stacks::isempty() 
{ 
if(TOP==-1) 
{ 
return 1; 
}
else 
{ 
return 0; 
} 
} 
int stacks::isfull() 
{ 
if(TOP==MAXSIZE) 
{ 
return 1; 
} 
else 
{ 
return 0; 
} 
} 
void stacks::checkcount() 
{ 
for(int i=0;i<TOP;i++) 
 { 
 if(a[i]!=0) 
 count++; 
 } 
cout<<"Elements in Stack are: "<<count+1<<endl; } 
void stacks::change(int pos, int val) { 
a[pos]=val; 
cout<<"value changed at location"<<pos<<endl; } 
int main() 
{ 
stacks s1; 
int ch; 
int postn,value; 
do 
{ 
cout<<"Enter your choice"<<endl<<endl; cout<<"1: Push Element" <<endl; 
cout<<"2: Pop Element" <<endl; 
cout<<"3: Top Element"<<endl; 
cout<<"4: Peep Element"<<endl;
cout<<"5: Display Stack Element"<<endl; cout<<"6: Check Whether Empty" <<endl; cout<<"7: Check Whether Full" <<endl; cout<<"8: check Count" <<endl; cout<<"9: Change Element" <<endl; cout<<"10: Exit" <<endl; 
cin>>ch; 
switch(ch) 
{ 
case 1: 
s1.push(); 
break; 
case 2: 
s1.pop(); 
break; 
case 3: 
s1.top(); 
break; 
case 4: 
s1.peep(); 
break; 
case 5: 
s1.display(); 
break; 
case 6: 
if(s1.isempty()==1) 
{ 
cout<<"Stack is empty"<<endl; } 
else 
{ 
cout<<"stack is not empty"<<endl; } 
break; 
case 7: 
if(s1.isfull()==1) 
{ 
cout<<"Stack is full"<<endl; 
} 
else 
{ 
cout<<"stack is not full"<<endl; }
break; 
case 8: 
s1.checkcount(); 
break; 
case 9: 
cout<<"Enter position of item you want to change"; cin>>postn; 
cout<<endl; 
cout<<"enter the value of item you want to change"; cin>>value; 
s1.change(postn,value); 
break; 
case 10: 
exit(0); 
break; 
default: 
cout<<"Wrong option"<<endl; 
break; 
} 
}while(ch!=10); 
return 0; 
} 
