#include<iostream>
#include<cstring>
using namespace std;

void pair_star(char str[]){
  if(str[0]=='\0'||str[1]=='\0'){
     return;
  }
  if(str[0]==str[1]){
    int len=strlen(str);
    for(int i=len+1;i>1;i--)
    {
     str[i]=str[i-1];
    }
    str[1]='*';
  }
  pair_star(str+1);
}
int main()
{
    char str[50];
    cin>>str;
    pair_star(str);
    cout<<str;
    return 0;
}