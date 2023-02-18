#include<iostream>
using namespace std;
int count_zero(int n)
{
   static int count=0;
   if(n==0){
     return 1;
   }
   if(n%10==0)
   {
     count++;
   }
   int smallcount= count_zero(n/10);
   return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<count_zero(n);

    return 0;
} 