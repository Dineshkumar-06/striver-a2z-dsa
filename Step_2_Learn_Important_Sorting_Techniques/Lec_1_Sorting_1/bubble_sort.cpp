#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void bubble_sort(vector<int> &arr, int n) {
        
        for (int i = n - 1; i >= 0; i--) {
            
            for (int j = 0; j < i; j++) {
                if (arr[j] > arr[ j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[ j + 1];
                    arr[j + 1] = temp;
                } 
            }
        }
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
    sol.bubble_sort(arr, n);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}