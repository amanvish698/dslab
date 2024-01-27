#include <iostream>
using namespace std;
struct Node {
int data;
Node *next;
};
class LinkedList
{

Node* head; public:
LinkedList()
{

head = NULL;

}

void insert(int val)
{

Node* new_node = new Node;
new_node->data = val;
new_node->next = NULL;
if (head == NULL) head = new_node;
else

{
new_node->next = head;
head = new_node;
}
}

bool search(int val)
{

Node* temp = head;
while(temp != NULL)
{

if (temp->data == val)
{

cout<<"Element found"<<endl;
return true;

}

temp = temp->next;

}
cout<<"Element not found!"<<endl;
return false;
}

void remove(int val)
{

if (head->data == val)

{
delete head;
head = head->next;
return;
}

if (head->next == NULL)
{

if (head->data == val)
{

delete head;
head = NULL;
return;

}

cout << "Value not found!" << endl;
return;
}

Node* temp = head;
while(temp->next!= NULL)
{

if (temp->next->data == val)
{

Node* temp_ptr = temp->next->next;
delete temp->next;
temp->next = temp_ptr;
return;

}
temp = temp->next;
}

cout << "Value not found" << endl;
}

void display()
{

Node* temp = head;
while(temp != NULL)
{

cout << temp->data << " ";
temp = temp->next;
}

cout << endl;
}
};

int main()
{

LinkedList l;
int ch, n;
do{

cout<<"Enter your choice: "<<endl;
cout<<"1. Add element in the linked list:"<<endl;
cout<<"2. Display current linked list: "<<endl;

cout<<"3. Delete element from linked list: "<<endl;
cout<<"4. Search an element from linked list:"<<endl;
cout<<"5. Exit"<<endl;
cin>>ch;
switch(ch)
{

case 1: {
cout<<" Enter the element you want to insert:"<<endl;
cin>>n;
l.insert(n);

break;
}
case 2:{
cout << "Current Linked List: "<<endl;
l.display();
break;
}
case 3:{
cout << "Delete element: "<<endl;
cin>>n;
l.remove(n);
break;
}
case 4:{
cout<<"Enter the element you want to search: "<<endl;

cin>>n;
l.search(n);
break;
}

case 5:
break; default:
cout<<"Wrong option"<<endl; break;
}

}while(ch!=5);

return 0;

}