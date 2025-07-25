#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void recursive_insertion_sort(vector<int> &arr, int n, int i) {
        if (i == n) return;
            
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j];
            arr[j] = arr[ j - 1];
            arr[j - 1] = temp;
            j--;
        }
        recursive_insertion_sort(arr, n, i+1);
}

};

int main() {
    
    Solution sol;
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = arr.size();

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    sol.recursive_insertion_sort(arr, n, 0);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}