/* 
Problem links: 
https://takeuforward.org/plus/dsa/problems/gcd-of-two-numbers
https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1

Problem Description:

You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.

The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.

Examples:
Input: n1 = 4, n2 = 6
Output: 2
Explanation: 
Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6
Greatest Common divisor = 2.

Input: n1 = 9, n2 = 8
Output: 1
Explanation: 
Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.
Greatest Common divisor = 1.
 */

// Solution:

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int gcd(int n1, int n2) {
            
            int result = 0;
            
            if (n1 < n2) {
                // For swapping two numbers without a temp variable.
                // n1 = n1 ^ n2;
                // n2 = n1 ^ n2;
                // n1 = n1 ^ n2;
                swap(n1, n2);
            }
            
            while (n2 != 0) {
                result = n1 % n2;
                n1 = n2;
                n2 = result;
            }
            return n1;
        }
};

int main() {
    Solution sol;
    int n1;
    int n2;

    cout << "Enter an integer: ";
    cin >> n1;
    cout << "Enter an integer: ";
    cin >> n2;

    int gcd = sol.gcd(n1, n2);
    cout << "GCD: " << gcd << endl;

    return 0;
}

/* 
Explanation:

My Approach:

I was not sure about the approach. So, I viewed the solution for this and explored "Euclidean algorithm".

Efficient Approach:

Using the Euclidean algorithm, we can find the GCD of two numbers by calculating the remainder of the first number and the second one. The first one must be greater than the second number. We do this in a while loop, till the remainder becomes 0. 

"GCD keeps replacing the bigger number with the remainder until remainder is 0."

Time Complexity: O(log(min(n1, n2))) => Since no loop.

Space Complexity: O(1) 

*/