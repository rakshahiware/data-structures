#include<bits/stdc++.h>
using namespace std;
int staircase(int n){
    if(n<0){                      //base case
        return 0;
    }
    if(n==0){                      //alreaday reached top
        return 1;
    }
    int count=0;
    count += staircase(n-1);      //stepping 1 step
    count += staircase(n-2);      //stepping 2 step
    count += staircase(n-3);      //stepping 3 step
    return count;
}
int main(){
    int n;
    cout<<"Enter the number of stairs"<<endl;
    cin>>n;
    cout<<" Number of possibe ways are "<<staircase(n)<<endl;
    return 0;
}