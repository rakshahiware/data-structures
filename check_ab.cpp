#include<iostream>
using namespace std;
bool check(string input){
 
  if(input.size()==0){
    return true;
  }
  if(input.size()==1){
    if(input[0]=='a'){
     return true;
    }
    else{
     return false;
    }
  }
  if(input[0]=='a'){
     string smallString1 = input.substr(1);
     return check(smallString1);
  }  
  else if(input[0]=='b'){
    if(input[1]=='b'){
      string smallString2 = input.substr(2);
      return check(smallString2);
     }
     else {
      return false;
     }
   }
   else{
      return false;
   }
    
}
int main()
{
    string input;
    cin>>input;
    if(check(input)){
     cout<<"True";
    }
    else{
     cout<<"False";
    }
    return 0;
}