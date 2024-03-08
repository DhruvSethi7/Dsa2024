#include<bits/stdc++.h>
using namespace std;

// Main Logic -------->Pick every single element and put it at its correct position
// Tc-->O(n*n)

void insertionSort(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}


int main(){
    int arr[10] = {2, 3, 45, 20, 48, 90, 12, 0, 12, 23};
    insertionSort(10, arr);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}