#include<iostream>
using namespace std;
bool is_sorted(int arr[],int n)
{
  if(n==0||n==1)
   {
     return true;
   }
  if(arr[0]>arr[1])
   {
     return false;
   }
   is_sorted(arr+1,n-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[50];
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
   
    if(is_sorted(arr,n))
    {
      cout<<"true";
    }
    else
     cout<<"false";
    return 0;
}