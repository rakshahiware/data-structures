#include<iostream>
using namespace std;
int no_of_digits(int n){
    static int count=0;//It simply means that once the variable has been initialized, it remains in memory until the end of the program. ... Because count is a static variable, the line "static int count = 0;" will only be executed once. Whenever the function is called, count will have the last value assigned to it.
    if(n==0){ //base case
      return 1;
    }
    count++;
    no_of_digits(n/10);//assumption with small calculation
    return count;
}

int main()
{
    int n;
    cin>>n;
    cout<<no_of_digits(n);
   
    return 0;
}