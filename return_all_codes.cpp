#include<iostream>
#include<string.h>
using namespace std;
int atoi(char a){
    int i=a-'0';
    return i;
}
char itoa(int i){
    char c='a'+i-1;
    return c;
}

int get_code(string input,string output[100]){
  if(input.size()==0){
      output[0]=" ";
      return 1;
  }
  if(input.size()==1){
      output[0]=itoa(atoi(input[0]));
      return 1;
  }
  string result1[100],result2[100];
  int size2=0;
  int size1=get_code(input.substr(1),result1);
  if(input.size()>1){
      if(atoi(input[0])*10+atoi(input[1])>=10&&atoi(input[0])*10+atoi(input[1])<27){
          size2=get_code(input.substr(2),result2);
      }
  }
  int k=0;
  for(int i=0;i<size1;i++){
      output[k++]=itoa(atoi(input[0]))+result1[i];
  }
  for(int i=0;i<size2;i++){
      output[k++]=itoa(atoi(input[0])*10+atoi(input[1]))+result2[i];
  }
  return k;
}

int main(){
    string input;
    cin>>input;
    string output[100];
    int count = get_code(input,output);
    for(int i=0;i<count && i<100;i++){
      cout<<output[i]<<endl;
  }
  return 0;
}