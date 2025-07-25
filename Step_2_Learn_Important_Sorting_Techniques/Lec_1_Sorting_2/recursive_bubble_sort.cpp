#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recursive_bubble_sort(vector<int> &arr, int n) {
            
            int i = n;
        
            if (i == 0) return;

            bool isSwapped = false;
            
            for (int j = 0; j < i; j++) {
                if (arr[j] > arr[ j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[ j + 1];
                    arr[j + 1] = temp;

                    isSwapped = true;
                } 
            }   
            
            if (isSwapped == false) return;

            recursive_bubble_sort(arr, n-1);
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
    sol.recursive_bubble_sort(arr, n-1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}