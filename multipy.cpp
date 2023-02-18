#include<iostream>
using namespace std;
int mul(int n,int m)
{
  if(n==0||m==0){
     return 0;
  }
  if(m>0)
  {
    int smallmul=mul(n,m-1);
    return n+smallmul;
  }
  if(m<0)
  {
   return -mul(n,-m);
  }
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<mul(n,m);
    return 0;
}