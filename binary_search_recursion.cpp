#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
int binary_search(int arr[],int search,int start,int end)
{
  int mid;
  if(start>end){
   cout<<"not present"<<endl;
   return -1;
  }
  else{
      mid=(start+end)/2;
      if(arr[mid]==search){
          cout<<"number is present at "<<mid<<" index"<<endl;
          return 0;
      }
      else if(search>mid){
          binary_search(arr,search,mid+1,end);
      }
      else if(search<mid){
          binary_search(arr,search,start,mid-1);
      }
  }
}
int main()
{
   cout<<"Enter the size of array"<<endl;
   int n;
   cin>>n;
   cout<<"Enter the array elements"<<endl;
   int arr[50];
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
   }
   cout<<"Enter the element to be searched"<<endl;
   int search;
   cin>>search;
   int start=0;
   int end =n-1;
   binary_search(arr,search,start,end);
   return 0;
}