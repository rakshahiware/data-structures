#include<iostream>
using namespace std;
void remove_dup(char input[]){
  if(input[0]=='\0'){
    return;
  }
  if(input[0]==input[1]){
    for(int i=0;input[i]!='\0';i++){
      input[i]=input[i+1];
    }
    remove_dup(input);
  }
  remove_dup(input+1);
}
int main(){
    char input[100];
    cin>>input;
    remove_dup(input);
    cout<<input;
    return 0;
}