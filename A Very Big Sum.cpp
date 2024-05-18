#include<iostream>
using namespace std;

long aVeryBigSum(long ar[], int n) {
    long sum = 0; // Initialize sum before using it
    for (int i = 0; i < n; i++) {
        sum = sum + ar[i];
    }
    return sum;
}

int main() {
    int j;
    cin >> j;
    long arr[j];
    for (int i = 0; i < j; i++)
        cin >> arr[i]; // Use arr[i] instead of arr[j]
    
    long sum1 = aVeryBigSum(arr, j); // Pass the array itself, not arr[j]
    cout << sum1;
    
    return 0;
}
