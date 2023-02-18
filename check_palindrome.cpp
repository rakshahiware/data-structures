#include<iostream>
#include<cstring>
using namespace std;
bool plaindrome(char input[],int s,int e)
{
  if(input[0]=='\0')
  {
    return true;
  }
  if(input[s]==input[e])
  {
    plaindrome(input,s+1,e-1);
    return true;
  }
  else{
   return false;
  }
}
int main()
{
    char input[50];
    cin>>input;
    int len=strlen(input);
    int s=0;
    int e=len-1;
    bool result = plaindrome(input,s,e);
    if(result)
    {
      cout<<"true";
    }
    else{
      cout<<"false";
    }
    return 0;
}