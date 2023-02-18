#include<iostream>
using namespace std;
bool check(int a[],int n,int x)
{
  if(n==0){
    return false;
  }
  else if(a[0]==x){
    return true;
  }
 
   bool smallcheck = check(a+1,n-1,x);
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
    bool result = check(a,n,x);
    if(result){
      cout<<"true";
    }
    else{
      cout<<"false";
    }
    return 0;
}