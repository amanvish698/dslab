#include<iostream> 
using namespace std; 
int main()
{ 
int arr[5],i,j,temp; 
cout<<"Insertion Sort"<<endl; 
cout<<"Enter 5 numbers for sorting"<<endl; for(i=0;i<5;i++) 
{ 
cin>>arr[i]; 
} 
cout<<"Sorted Numbers are :"<<endl; for(i=0;i<5;i++) 
{ 
temp=arr[i]; 
j=i-1; 
while((temp<arr[j])&&(j>=0)) 
{ 
arr[j+1]=arr[j]; 
j=j-1; 
} 
arr[j+1]=temp; 
} 
for(i=0;i<5;i++) 
{ 
cout<<arr[i]<<endl; 
}
return(0); 
} 
