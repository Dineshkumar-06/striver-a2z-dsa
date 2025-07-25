/*
Problem links:
https://leetcode.com/problems/palindrome-number/description/
https://takeuforward.org/data-structure/check-if-a-number-is-palindrome-or-not/

Problem Description:

9. Palindrome Number

Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 */

// Solution:

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }

        int temp_x = x;

        int reversed_no = 0;
        int temp = 0;

        while (temp_x != 0)
        {
            temp = temp_x % 10;

            if ((reversed_no > INT_MAX / 10) || ((reversed_no == INT_MAX / 10) && temp > 7))
                return false;

            reversed_no = (reversed_no * 10) + temp;
            temp_x /= 10;
        }

        if (x == reversed_no)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/*
Explanation:

My Approach:
I did this problem myself. Since I did the reverse a number previously, I used the same logic here to reverse the number and then compare it with the original number.

Time Complexity: O(log₁₀N + 1)
Reason:
    The time complexity of O(log₁₀N + 1) comes from the number of digits in the integer N.

    Here’s why:

    Digits in N: The number of digits in an integer N is proportional to log₁₀N.

    Loop Execution: In the problem, you process each digit of N (e.g., using x % 10 and x /= 10), which takes 1 iteration per digit. Hence, the loop runs approximately log₁₀N + 1 times.

Space Complexity: O(1)

*/