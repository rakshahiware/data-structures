#include<iostream>
using namespace std;
int subset(int input[],int n,int output[][20]){
  if(n==0){            //base case
    output[0][0]=0;
    return 1;
  }
  int smallOutput=subset(input+1,n-1,output);
  int i,j;
  for(i=0;i<smallOutput;i++){
    output[smallOutput+i][0]=output[i][0]+1;
    output[smallOutput+i][1]=input[0];
  }
  for(i=0;i<smallOutput;i++){
    for(j=1;j<output[smallOutput+i][0];j++){
      output[smallOutput+i][j+1]=output[i][j];
    }
  }
  return 2*smallOutput;
}


int main(){
  int input[20],n,output[3500][20];
  cin>>n;
  for(int i=0;i<n;i++){
   cin>>input[i];
  }
  int size = subset(input,n,output);
  cout<<size<<endl;
  for(int i=0;i<size;i++){
    for(int j=1;j<=output[i][0];j++){
      cout<<output[i][j]<<" ";
    }
    cout<<endl;
  }
}