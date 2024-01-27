#include<iostream> 
#include<conio.h> 
using namespace std; 
class dfstree
{
int a[20][20], visited[20],n,i,j; 
public: void dfs(int); 
void get();
};
void dfstree::get()
{
cout<<"\nEnter the number of node"; 
cin>>n; 
for(i=0;i<n;i++)
{

visited[i]=0;
}
cout<<"\nEnter the adjancy matrix:"; 
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cin>>a[i][j];
}
}
dfs(0);
}
void dfstree::dfs(int v)
{
int k; visited[v]=1; 
cout<<"\t"<<v+1; 
for(k=1;k<n;k++)
{
if(a[v][k]==1)
{
if(visited[k]==0)
{
dfs(k);
}
}
}
}
int main()
{

	
dfstree d; 
d.get(); 
return 0;;
}
