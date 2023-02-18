#include<iostream>
using namespace std;
int subset(int input[],int n,int k,int output[],int m)
{
  if(n==0){  
      if(k==0){       //base case
         for(int i=0;i<m;i++){
         cout<<output[i]<<" ";
         }
         cout<<endl;
      }
   return 1;
  }
  subset(input+1,n-1,k,output,m);          //this part does not include element at 0 index ,pass output as it is
  int newoutput[m+1];                    //new array for ouput 
  for(int i=0;i<m;i++){                 //copping elements of old output array to new output array
      newoutput[i]=output[i];
  }
  newoutput[m]=input[0];                  //after copying we need to place the element of 0 index at the end of new array and pass m+! becaise sixe of newoutput increases
  subset(input+1,n-1,k-input[0],newoutput,m+1);      //this part  includes element at 0 index ,in  this case we need to pass teh element at 0 index in output array
}
void printSubset( int input[],int n){
  int m=0,k;                      //represents output array is empty 
  int output[m];                  //we need to maintain a output array in case of print que
  cin>>k;                         
   subset(input,n,k,output,m);
}
 
  
int main()
{
  int input[1000],n,k;
  cin>>n;
  for(int i=0;i<n;i++){
   cin>>input[i];
  }
  printSubset(input,n);
}