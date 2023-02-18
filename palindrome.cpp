#include<iostream>
#include<string.h>
using namespace std;
int main()
{
     char str[10];
     gets(str);
     int len=strlen(str);
     int i=0;

     while(i<len/2){
   
            if(str[i]!=str[len-i-1]){
               cout<<"no";
               break;
            }
            else{
                  i++;
            }
            cout<<"yes";
     }
   
     return 0;
}

