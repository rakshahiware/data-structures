#include<iostream>
using namespace std;
int sum(int a[],int n)
{
  if(n==0){
    return 0;
  }
  else if(n==1){
    return a[0];
  }
  else{
   int smallsum = sum(a+1,n-1);
   return a[0]+smallsum;
  }
}
int main()
{
    int n;
    cin>>n;
    int a[50];
    for(int i=0;i<n;i++)
    {
     cin>>a[i];
    }
    cout<<sum(a,n);
    return 0;
}