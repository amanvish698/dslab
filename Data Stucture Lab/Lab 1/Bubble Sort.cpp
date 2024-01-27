#include<iostream> 
using namespace std; 
int main() 
{ 
int a[50],n,i,j,temp; 
cout<<"Enter the size of array: "; cin>>n; 
cout<<"Enter the array elements:"<<endl; for(i=0;i<n;i++) 
cin>>a[i]; 
for(i=1;i<n;i++) //for n-1 passes 
{ 
for(j=0;j<(n-i);j++) 
if(a[j]>a[j+1]) 
{ 
temp=a[j]; 
a[j]=a[j+1]; 
a[j+1]=temp; 
} 
} 
cout<<"Array after Bubble sort: "<<endl; for(i=0;i<5;i++) 
{ 
cout<<a[i]<<endl;
} 
return(0); 
} 
