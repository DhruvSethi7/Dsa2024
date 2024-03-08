#include <bits/stdc++.h>
using namespace std;


// Tc----->O(Nlogn)

void merge(int arr[],int low,int mid,int high){
    int sortedarr[high-low+1]={};
    int index=0;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high)
    {
        if (arr[i]<arr[j])
        {
           sortedarr[index]=arr[i];
           i++;
        }
        else{
            sortedarr[index]=arr[j];
           j++;
        }
        index++;
    }
    while (i<=mid)
    {
        sortedarr[index]=arr[i];
        i++;
        index++;
    }
    while (j<=high)
    {
        sortedarr[index]=arr[j];
        j++;
        index++;
    }
    for (int  i = 0; i < index; i++)
    {
       arr[low+i]=sortedarr[i];
    }
}
void mergeSort(int low, int arr[],int high)
{
    if (low==high)return;
    int mid=(low+high)/2;
    mergeSort(low,arr,mid);
    mergeSort(mid+1,arr,high);
    merge(arr,low,mid,high);
}
int main()
{
    int arr[10] = {2, 3, 45, 20, 48, 90, 12, 0, 12, 23};
    mergeSort(0, arr,9);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}
