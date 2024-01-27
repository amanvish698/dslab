#include<iostream>
using namespace std;
int main()
{

int n,i,exp,m,max,arr[15];
cout<<"Enter the number of elements you want to be sorted:"<<endl;
cin>>n;
cout<<"Enter the elements for sorting:"<<endl;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"array before sorting:"<<endl;
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}
max=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
m=max;
}
for(exp=1;m/exp>0;exp*=10)
{

int output[n], count[10]={0};
for(i=0;i<n;i++)
{
count[(arr[i]/exp)%10]++;
}
for(i=1;i<10;i++)
{
count[i]+=count[i-1];
}
for(i=n-1;i>=0;i--)
{
output[count[(arr[i]/exp)%10]-1]=arr[i];
count[(arr[i]/exp)%10]--;
}
for(i=0;i<n;i++)
{
arr[i]=output[i];
}
}

cout<<"The sorted array is:"<<endl;
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}

return (0);
}