#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {23, 12, 56, 144, 78};
    int n = 5;

    
    for (int i = 0; i < n - 1; i++) {
        int min_index = i; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j; 
            }
        }
        
        if (i != min_index) {
            swap(arr[i], arr[min_index]);
        }
    }

    
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
OUTPUT: 
The sorted array is: 12 23 56 78 144 
*/