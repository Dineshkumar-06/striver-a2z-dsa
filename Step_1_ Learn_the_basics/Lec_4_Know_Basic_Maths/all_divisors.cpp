/* 
Problem links: 
https://takeuforward.org/data-structure/print-all-divisors-of-a-given-number/
https://www.geeksforgeeks.org/problems/all-divisors-of-a-number/1

Problem Description:

All divisors of a Number

Given an integer N, print all the divisors of N in the ascending order.
 
Example 1:

Input : 20
Output: 1 2 4 5 10 20
Explanation: 20 is completely 
divisible by 1, 2, 4, 5, 10 and 20.

Example 2:

Input: 21191
Output: 1 21191
Explanation: As 21191 is a prime number,
it has only 2 factors(1 and the number itself).

Expected Time Complexity: O(sqrt(N))
Expected Space Complexity: O(sqrt(N))
 */

// Solution:

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> print_divisors(int n) {
        vector<int> result;
        
        for(int i = 1; i*i <= n; i++) {
            if (n % i == 0) {
                result.push_back(i);
                if(i != n/i) {
                    result.push_back(n/i);
                }
            }
        }
        sort(result.begin(),result.end());

        return result;

    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    vector<int> result = sol.print_divisors(n); 
    
    for (auto i : result)
    cout << i << " ";

    return 0;
}

/* 
Explanation:

My Approach:

I initially used brute force method by iterating from 1 till n to find all the divisors. 

Time Complexity: O(n) => The loop runs for n times. 

Space Complexity: O(1)

Efficient Approach:

We can optimise the previous approach by using the property that for any non-negative integer n, if d is a divisor of n then n/d is also a divisor of n.

This property is symmetric about the square root of n. 

Part	                    Time Complexity
Finding divisors	            O(√n)
Sorting divisors	          O(√n log n)
Total (dominated by sort)	  O(√n log n)


Time Complexity: O(√n log n) => Since no loop.

Space Complexity: O(√n)

*/