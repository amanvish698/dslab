#include <iostream> 
using namespace std; 
int main() 
{ 
int count, i, arr[30], num, low, high, middle; 
cout<<"How many elements would you like to enter? "<<endl; cin>>count; 
for (i=0; i<count; i++) 
{ 
cout<<"Enter number "<<(i+1)<<": "; 
cin>>arr[i]; 
} 
cout<<"Enter the number that you want to search: "; cin>>num; 
low = 0; 
high = count-1; 
middle = (low+high)/2; 
while (low <= high) 
{ 
if(arr[middle] <num) 
{ 
low = middle + 1; 
} 
else if(arr[middle] == num) 
{ 
cout<<"Number "<<num<<" is found in the array at the location:  "<<middle+1<<"\n"; 
break; 
} 
else { 
high = middle - 1; 
}
middle = (low + high)/2; 
} 
if(low > high) 
{ 
cout<<num<<" not found in the array"; } 
return 0; 
} 
