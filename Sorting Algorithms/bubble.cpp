#include <bits/stdc++.h>
using namespace std;



void bubblesort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[10] = {2, 3, 45, 20, 48, 90, 12, 0, 12, 23};
    bubblesort(10, arr);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}
