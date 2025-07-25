/* 
Problem links: 
https://leetcode.com/problems/reverse-integer/description/
https://takeuforward.org/maths/reverse-digits-of-a-number

Problem Description:

7. Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:
Input: x = 123
Output: 321

Example 2:
Input: x = -123
Output: -321

Example 3:
Input: x = 120
Output: 21
 */

// Solution:

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int res = 0;
        int temp = 0;

        while (x != 0) {
            temp = x % 10;

            // Check for overflow (positive side)
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && temp > 7)) return 0;

            // Check for underflow (negative side)
            if (res < INT_MIN / 10 || (res == INT_MIN / 10 && temp < -8)) return 0;

            res = (res * 10) + temp;
            x /= 10;
        }

        return res;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    int reversed = sol.reverse(n);
    cout << "Reversed integer: " << reversed << endl;

    return 0;
}


/* 
Explanation:

My Approach:

I thought about reducing the number by dividing by 10 but I was not able to come up with a common formula to bind it together. Also, I didn't think about modulo. I had help to solve this.

Efficient Approach:

res = (res * 10) + temp; This formula changed the game for me. Also, the edge case handling is a very nice thought process where INT_MAX = 2147483647 and INT_MIN = -2147483648. 
It accounted for both the multiplication case where we do (res * 10) with (res > INT_MAX / 10) and for the addition case (res == INT_MAX / 10 && temp > 7). 

Time Complexity: O(log₁₀N + 1)
Reason: 
    The time complexity of O(log₁₀N + 1) comes from the number of digits in the integer N.

    Here’s why:

    Digits in N: The number of digits in an integer N is proportional to log₁₀N.

    Loop Execution: In the problem, you process each digit of N (e.g., using x % 10 and x /= 10), which takes 1 iteration per digit. Hence, the loop runs approximately log₁₀N + 1 times.

Space Complexity: O(1) 

*/