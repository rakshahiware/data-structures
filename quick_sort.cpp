#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
   int pivot = arr[si];
   int count=0;
   for(int i=si;i<=ei;i++){
     if(arr[i]<pivot){
      count++;
     }
   }
   return count;
}
void quick_sort(int arr[],int si,int ei){
   if(si>=ei){ //base case
      return;
   }
   int c=partition(arr,si,ei);
   int temp=arr[si+c];
   arr[si+c]=arr[si];
   arr[si]=temp;
   int x=arr[si+c];
   int i=si;
   int j=ei;
   while(arr[i]!=x||arr[j]!=x){
     if(arr[i]<x){
      i++;
     }
     else if(arr[j]>x){
       j--;
     }
     else{
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
       i++;
       j--; 
     }
   }
   quick_sort(arr,si,c-1);
   quick_sort(arr,c+1,ei);
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
  //print the elements
    cout<<"sorted array is "<<endl;
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}