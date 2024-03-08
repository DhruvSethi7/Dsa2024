#include<bits/stdc++.h>
using namespace std;

// Main Logic -------->Find Minimum and send it to its correct position which is start
// Tc-->O(n*n)

void selectionSort(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n ; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}


int main(){
    int arr[10] = {2, 3, 45, 20, 48, 90, 12, 0, 12, 23};
    selectionSort(10, arr);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}