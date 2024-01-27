#include <iostream>
using namespace std;
#define MAX 50
int queue_array[MAX];
int rear = -1;
int front = -1;
int count = 0;
void insertQ()
{
int add_item;
if (rear == MAX - 1)
{
cout << "Queue Overflow" << endl;
}
else
{
if (front == -1)
{
front = 0;
}
cout << "Inset the element in queue : " << endl;cin
>> add_item;
rear = rear + 1; queue_array[rear]
= add_item;
}
} /* End of insert() */
void Qfront()
{
if (front == -1)
{
cout << "front : " << 0 << endl;
}
else
{
cout << "Front of queue : " << front << endl;
}
}

void EmptyQ()
{
if (front == -1)
{
cout << "Queue is empty" << endl;
}
else
{
cout << "Queue not empty" << endl;
}
}
void deleteQ()
{
if (front == -1 || front > rear)
{
cout << "Queue Underflow" << endl;
return;
}
else
{
cout << "Element deleted from queue is : " << queue_array[front] <<
endl;
front = front + 1;
}
} /* End of delete() */
void Qfull()
{
if (front == 0 && rear == MAX - 1)
{
cout << "Queue is Full" << endl;
}
else
{
cout << "Queue is not full" << endl;
}
}

void Qcount()
{
if (front == -1)
{
cout << "Queue is underflow" << endl;
}
else
{
cout << "Total values in queue is: " << count << endl;
}
}
void displayQ()
{
int i;
if (front == -1)
{
cout << "Queue is empty" << endl;
}
else
{
cout << "Queue is : " << endl;
for (i = front; i <= rear; i++)
{
cout << queue_array[i] << endl;
}
}
} /* End of display() */
int main()
{
int choice;do
{
cout << "1.Insert element to queue" << endl; cout
<< "2.Delete element from queue" << endl;
cout << "3.Display whether queue is full or not" << endl; cout
<< "4.Display whether queue is empty or not" << endl;cout <<
"5.Display front of queue" << endl;
cout << "6.Total elements in queue" << endl;

cout << "7.Display Queue" << endl;
cout << "8.Quit" << endl;
cout << "Enter your choice : " << endl;
cin >> choice;
switch (choice)
{
case 1:
insertQ();
count++;
break;
case 2:
deleteQ();
--count;
break;
case 3:
Qfull();
break;
case 4:
EmptyQ();break;
case 5:
Qfront();break;
case 6:
Qcount();break;
case 7:
displayQ();break;
default:
cout << "Wrong choice" << endl;
}
} while (choice != 8);
return 0;
}