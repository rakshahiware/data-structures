#include<iostream>
using namespace std;
int check(int a[],int n,int x)
{
   static int count=n;
   if(n==0){
      return -1;
   }
   else if (a[0]==x)
    {
      return count;
    }
   count--;
   return check(a+1,n-1,x);
   
   
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
    int x;
    cin>>x;
    int result=check(a,n,x);
    if(result<1){
      cout<<"-1";
    }
    else{
      cout<<result;
    }
    return 0;
} 