#include <iostream>
using namespace std;

int main() 
{
    int arr[5] = {45, 23, 86, 12, 9};
    int n = 5;

   
    for (int i = 1; i < n; i++) 
    {
        int current = arr[i]; 
        int j = i - 1;

        
        while (j >= 0 && arr[j] > current) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current; 
    }

   
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl; 

    return 0;
}
/*
output: 
The sorted array is: 9 12 23 45 86 
*/