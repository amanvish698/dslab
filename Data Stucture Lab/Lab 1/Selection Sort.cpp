#include<iostream>
using namespace std;
int main()
{
int arr[5],i,j,temp,min_index;
cout<<"Selection sort"<<endl;
cout<<"Enter 5 numbers for sorting: "<<endl;
for(i=0;i<5;i++)
{
cin>>arr[i];
}
cout<<"Sorted numbers are: "<<endl;
for(i=0;i<5;i++) //n-1 passes
{
min_index=i;
for(j=i+1;j<5;j++)
{
if(arr[j]<arr[min_index])
min_index=j;
}
if(min_index!=i) //place smallest element ai the ith place
{

temp=arr[i];
arr[i]=arr[min_index];
arr[min_index]=temp;
}
}
for(i=0;i<5;i++)
{
cout<<arr[i]<<endl;
}
return(0);
}