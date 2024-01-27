#include<iostream>
using namespace std;
int main()
{
int n,arr[50],i,j,temp,gap;
cout<<"Shell Sort"<<endl; //entering the elements for sorting
cout<<"Enter the number of elements you want to sort:"<<endl;
cin>>n;
cout<<"Enter the elements of array for sorting: "<<endl;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
//display array before sorting
cout<<"Array before sorting:"<<endl;
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}
//sorting starts from here

for(gap=n/2;gap>=1;gap=gap/2)
{
for(j=gap;j<n;j++)
{
for(i=j-gap;i>=0;i=i-gap)
{
if(arr[i]>arr[i+gap])
{
temp=arr[i+gap];
arr[i+gap]=arr[i];
arr[i]=temp;
}
}
}
}
//for displaying sorted array
cout<<"Array after sorting:"<<endl;
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}
return(0);
}