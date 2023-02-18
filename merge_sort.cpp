#include<iostream>
using namespace std;
void merge(int arr[],int si,int mid,int ei){
   int temp[ei-si+1];
   int i=si,j=mid+1,k=0;
  // merge the two parts
   while(i<=mid && j<=ei){
     if(arr[i]<arr[j]){
      temp[k]=arr[i];
      k++;
      i++;
     }
     else{
      temp[k]=arr[j];
      k++;
      j++;
     }
   // Insert all the remaining values from i to mid into temp[]
     while(i<=mid){
       temp[k]=arr[i];
       k++;
       i++;
     }
   // Insert all the remaining values from j to ei into temp[] 
     while(j<=ei){
       temp[k]=arr[j];
       k++;
       j++;
     }
   }
  //assign the values of temp[] to arr[]
   for(i=si;i<=ei;i++){
     arr[i]=temp[i-si];
   }
}
void merge_sort(int arr[],int si,int ei){
   if(si>=ei){ //base case
      return;
   }
   int mid=(si+ei)/2;
 //divide the array in two parts
   merge_sort(arr,si,mid);
   merge_sort(arr,mid+1,ei);
 //merge func merge the two halfs into one array
   merge(arr,si,mid,ei);
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
  //print the elements
    cout<<"sorted array is "<<endl;
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}