#include <iostream>
using namespace std;

int getMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr1[] = { 3, 7, 2, 9, 10, 5 };
    int arr2[] = { -10, -5, -3 };
    int arr3[] = { 100, 200, 300, 50, 400 };
    int arr4[] = { 0, 0, -2, 0 };
    int arr5[] = { 10000 };

    cout << getMax(arr1, 6) << endl;  
    cout << getMax(arr2, 3) << endl;  
    cout << getMax(arr3, 5) << endl; 
    cout << getMax(arr4, 4) << endl; 
    cout << getMax(arr5, 1) << endl; 

    return 0;
}