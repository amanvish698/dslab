#include<iostream> 
#include<climits>  
#include<conio.h>  
using namespace std; 
void swap(int *x, int *y); 
class MinHeap 
{ 
int *harr; 
int capacity; 
int heap_size; 
public: 
MinHeap(int capacity); 
void MinHeapify(int ); 
int parent(int i) { return (i-1)/2; } int left(int i) { return (2*i + 1); } int right(int i) { return (2*i + 2); } int extractMin(); 
void decreaseKey(int i, int new_val); int getMin() { return harr[0]; } void deleteKey(int i); 
void insertKey(int k);
}; 
MinHeap::MinHeap(int cap) 
{ 
heap_size = 0;  
capacity = cap; 
harr = new int[cap]; 
} 
void MinHeap::insertKey(int k) 
{ 
if (heap_size == capacity) 
{ 
cout << "\nOverflow: Could not insertKey\n";  return; 
} 
heap_size++; 
int i = heap_size - 1;  
harr[i] = k; 
while (i != 0 && harr[parent(i)] > harr[i]) { 
swap(&harr[i], &harr[parent(i)]);  
i = parent(i); 
} 
} 
void MinHeap::decreaseKey(int i, int new_val) { 
harr[i] = new_val; 
while (i != 0 && harr[parent(i)] > harr[i])
{ 
swap(&harr[i], &harr[parent(i)]);  i = parent(i); 
} 
} 
int MinHeap::extractMin() { 
if (heap_size <= 0)  
return INT_MAX; 
if (heap_size == 1) 
{ 
heap_size--;  
return harr[0]; 
} 
int root = harr[0]; 
harr[0] = harr[heap_size-1];  heap_size--;  
MinHeapify(0); 
return root; 
} 
void MinHeap::deleteKey(int i) { 
decreaseKey(i, INT_MIN);  extractMin(); 
} 
void MinHeap::MinHeapify(int i) { 
int l = left(i); 
int r = right(i); 
int smallest = i; 
if (l < heap_size && harr[l] < harr[i]) 
smallest = l; 
if (r < heap_size && harr[r] < harr[smallest])  smallest = r; 
if (smallest != i) 
{ 
swap(&harr[i], &harr[smallest]); MinHeapify(smallest); } 
} 
void swap(int *x, int *y) 
{ 
int temp = *x; 
*x = *y; 
*y = temp; 
} 
int main() 
{ 
MinHeap h(11);  
h.insertKey(3);  
h.insertKey(2);  
h.deleteKey(1);  
h.insertKey(15);  
h.insertKey(5);  
h.insertKey(4);  
h.insertKey(45); 
cout << h.extractMin() << " ";  
cout << h.getMin() << " ";  
h.decreaseKey(2, 1);
cout << h.getMin();  
getch(); 
return 0; 
} 


//Maximum Heap Tree: 
#include <iostream>  
#include <conio.h>  
using namespace std; 
void max_heapify(int *a, int i, int n) { 
int j, temp;  
temp = a[i];  
j = 2 * i; 
while (j <= n) 
{ 
if (j < n && a[j+1] > a[j])  
j = j + 1; 
if (temp > a[j])  
break; 
else if (temp <= a[j]) 
{ 
a[j / 2] = a[j]; j = 2 * j; 
} 
} 
a[j/2] = temp;  
return; 
} 
void build_maxheap(int *a,int n)
{ 
int i; 
for(i = n/2; i >= 1; i--) 
{ 
max_heapify(a,i,n); 
} 
} 

int main1() { 
int n, i, x; 
cout<<"enter no of elements of array\n";  
cin>>n; 
int a[20]; 
for (i = 1; i <= n; i++) { 
cout<<"enter element"<<(i)<<endl;  
cin>>a[i]; 
} 
build_maxheap(a,n);  
cout<<"Max Heap\n";  
for (i = 1; i <= n; i++) { 
cout<<a[i]<<endl; 
}
getch(); 
}
