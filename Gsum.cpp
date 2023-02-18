#include<bits/stdc++.h>
using namespace std;
double Gsum(int k)
{
  if(k==0){
    return 1;
  }
  else{
   double smallsum = Gsum(k-1);
   return smallsum+1/pow(2,k);
  }
}
int main()
{
    int k;
    cin>>k;
    cout<<Gsum(k);
    return 0;
}