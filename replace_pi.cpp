#include<iostream>
#include<cstring>
using namespace std;

void replacePI(char input[])
{
  //base case 
  if(input[0]=='\0'||input[1]=='\0')
  {
    return;
  }
  
  if(input[0]=='p'&&input[1]=='i')
 { 
   int len=strlen(input);
   
   for(int i=len+2;i>1;i--)//Shifting the characters to right side to put 3.14 in 
   {
     input[i]=input[i-2];
   }
   input[0]='3';
   input[1]='.';
   input[2]='1';
   input[3]='4';
 }
  replacePI(input+1);
}
int main()
{
    char input[50];
    cin.getline(input,50);
    replacePI(input);
    cout<<input;
    return 0;
}