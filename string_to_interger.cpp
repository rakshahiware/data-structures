#include<iostream>
#include<cstring>
using namespace std;
int con(char str[],int len)
{
  if(len==0){
     return str[len]-'0';//retuen value of a[0]
  }
  else{
   int smallcon=con(str,len-1);
   int smallcal=str[len]-'0';
   return 10*smallcon+smallcal;
 }
}
int main(){
   char str[50];
   cin>>str;
   int len=strlen(str);
   cout<<con(str,len-1);
   return 0;
}