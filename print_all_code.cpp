#include<iostream>
using namespace std;

int print_code(string input,string output){
   if(input.size()==0){              //base case
      cout<<output<<endl;                     //print the output string
      return 1;
   }
   char start='a'+(input[0]-'0')-1;                //converting the first char to integer and then to code
   print_code(input.substr(1),output+start);       //recursive call for remaining string 1,123
   char start2;
   int firstnum=10*(input[0]-'0')+(input[1]-'0');      //getting the two digit integer from char

   if (firstnum>=10 && firstnum<=26)          //if it is greator than 10 means it is k and so on 
   {
       start2='a'+firstnum-1;
       print_code(input.substr(2),output+start2); //recursive call for 11,23
   }
}

int main(){
    string input;
    cin>>input;
    string output="";       //initially th eoutput string will be empty
    int count = print_code(input,output);
    return 0;
}


