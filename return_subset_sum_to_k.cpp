#include<iostream>
using namespace std;
int subset_sum(int input[],int n,int output[][50],int k){
  if(n==0){
      if(k==0){
        return 1;
      }
      else{
        return 0;
      }
  }
  int newO1[10000][50];
  int newO2[10000][50];
  int s1=subset_sum(input+1,n-1,newO1,k-input[0]);
  int s2=subset_sum(input+1,n-1,newO2,k);
  for(int i=0;i<s1;i++){
    output[i][0]=newO1[i][0]+1;
    output[i][1]=input[0];

    for(int j=2;j<=newO1[i][0]+1;j++){
        output[i][j]=newO1[i][j-1];
    }
  }
  for(int i=s1;i<s1+s2;i++){
    output[i][0]=newO2[i-s1][0];

    for(int j=0;j<=newO2[i-s1][0];j++){
        output[i][j]=newO2[i-s1][j];
    }
  }
  return s1+s2;
}
int main(){
  int input[20],n,output[10000][50],k;
  cin>>n;
  for(int i=0;i<n;i++){
   cin>>input[i];
  }
  cin>>k;
  int size = subset_sum(input,n,output,k);
  
  for(int i=0;i<size;i++){
    for(int j=1;j<=output[i][0];j++){
      cout<<output[i][j]<<" ";
    }
    cout<<endl;
  }
}