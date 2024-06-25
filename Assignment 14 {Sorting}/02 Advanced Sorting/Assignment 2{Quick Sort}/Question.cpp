/*
Q3. Given an array where all its elements are sorted in increasing order except two swapped
elements, sort it in linear time. Assume there are no duplicates in the array.

Input: A[] = [3, 8, 6, 7, 5, 9, 10]
Output: A[] = [3, 5, 6, 7, 8, 9, 10]
*/

#include<iostream>
using namespace std;
int main(){
    int arr[]={3, 8, 6, 7, 5, 9, 10};
    int n=sizeof(arr)/sizeof(arr[0]);

   int idx2=-1;
   int idx1=-1;
   // Find the first and second violations
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            if(idx1 == -1) {
                idx1 = i;
            } else {
                idx2 = i + 1;
                break;
            }
        }
    }

    // Special case when the swapped elements are adjacent
    if(idx2 == -1) {
        idx2 = idx1 + 1;
    }

    // Swap the two elements
    int temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;

    // Output the sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}