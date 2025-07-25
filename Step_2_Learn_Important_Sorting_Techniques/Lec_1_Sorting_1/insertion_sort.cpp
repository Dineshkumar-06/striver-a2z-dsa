#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void insertion_sort(vector<int> &arr, int n) {
        
        for (int i = 0; i <= n - 1; i++) {
            
            int j = i;
            
            while (j > 0 && arr[j - 1] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[ j - 1];
                arr[j - 1] = temp;
                j--;
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
    sol.insertion_sort(arr, n);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}