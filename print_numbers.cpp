#include<iostream>
using namespace std;
int print_num(int n){
    if(n!=0){
        print_num(n-1);
        cout<<n<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print_num(n);
    return 0;
}