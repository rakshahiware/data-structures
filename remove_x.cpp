#include<iostream>
#include<cstring>
using namespace std;
void remove(char input[]){
  int len=strlen(input);
  if(len==0){
    return;
  }
  if(input[0]=='x'){
    for(int i=0;i<len;i++){
      input[i]=input[i+1];
    }
    remove(input);
  }
  remove(input+1);
}
int main()
{
    char input[100];
    cin.getline(input,100);
    remove(input);
    cout<<input;
    return 0;
}