#include<iostream>
using namespace std;

// Main Logic----->Pick a pivot and place it at its correct position,smalller on the left and larger on the right
//Tc->O(nlogn),Sc->O(1)


int partitionIndex(int arr[],int low,int high){
  int i=low;
  int j=high;
  while (i<j)
  {
   while (arr[i]<=arr[low] && i<=high-1)
   {
    i++;
   }
   while (arr[j]>arr[low] && j>=low+1)
   {
      j--;
   }
   if(i<j)swap(arr[i],arr[j]);
  }
  swap(arr[j],arr[low]);//pivot is at its correct position
  return j;
}
void quickSort(int arr[],int low,int high){
    if (low<high)
    {
        int pIndex=partitionIndex(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);
    }
}

int main(){
    int arr[7]={2,3,0,2,-1,89,44};
    quickSort(arr,0,6);
    for (int i = 0; i < 7; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}