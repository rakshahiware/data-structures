#include<iostream>
using namespace std;
int  print_permu(string input, string output){
     if(input.size()==0){              //base case
      cout<<output<<endl;                     //print the output string
      return 1;
   }
   int size=input.length();
    for(int i=0;i<size;i++){
        char A=input[i];
        print_permu(input.substr(0,i)+input.substr(i+1),output+A);
    }
}
int main(){
    string input;
    cin>>input;
    string output="";       //initially th eoutput string will be empty
    int count = print_permu(input,output);
    return 0;
}


