#include<iostream>
using namespace std;
int main()
{
int n,arr[100000],i,t,flag;
cin >> n;
t=n-1;
for(i=0;i<n;i++)
{
cin >> arr[i];
}
for(i=0;i<n-1;i++)
{
flag=0;
for(int j=i+1;j<n;j++)
{
if(arr[i]>=arr[j])
{
flag++;
}
else
{
break;
}
}
if(flag==(t-i))
{
cout<< arr[i]<<" " ;
}
}
cout << arr[n-1];
return 0;
}