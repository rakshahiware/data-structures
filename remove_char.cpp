#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[20];
    gets(str);

   int i=0;
   while (str[i]!='\0')
   {
    /* code */ if(!(str[i]>='a'&& str[i]<='z'|| str[i]>='A'&& str[i]<='Z')){
            i++;
        }
        else{
            cout<<str[i];
            i++;
        }
   }
   
   return 0;
}