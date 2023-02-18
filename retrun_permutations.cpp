#include<iostream>
#include<string>
using namespace std;
int return_permu(string input,string output[100]){
    if(input.size()==0){        //base case when string becomes empty
        output[0]=" ";
        return 1;
    }
    if(input.size()==1){      //when string has single char
        output[0]=input[0];
        return 1;
    }
    int r=0;                       //no of rows in output string  
    int size=input.length();
    for(int i=0;i<size;i++){
        char A=input[i];         // assing the value of input[o] to the char variable a
        string o1[100];   //output string

        int s1=return_permu(input.substr(0,i)+input.substr(i+1),o1);    //recursive call for the string
        for(int k=0;k<s1;k++){
            output[r++]=o1[k]+A;      //adding char a to the small str
        }
    }
    return r;
}
int main(){
    string input;
    cin>>input;string output[100];
    int count=return_permu(input,output);
    for(int i=0;i<count&&i<100;i++){
        cout<<output[i]<<endl; //print the str
    }
    return 0;
}