/* 
Problem links: 
https://takeuforward.org/maths/check-if-a-number-is-armstrong-number-or-not/
https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

Check if a number is Armstrong Number or not

Problem Statement: Given an integer N, return true it is an Armstrong number otherwise return false.

An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Input: n = 153
Output: true
Explanation: 153 is an Armstrong number since 13 + 53 + 33 = 153. 

Input: n = 372
Output: false
Explanation: 372 is not an Armstrong number since 33 + 73 + 23 = 378. 

Input: n = 100
Output: false
Explanation: 100 is not an Armstrong number since 13 + 03 + 03 = 1.
 */

// Solution:

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int armstrong(int n)
{
    int sum = 0;
    int original_sum = n;
    while (n != 0)
    {
        int d = n % 10;
        sum += pow(d, 3);
        n /= 10;
    }
    return (sum == original_sum);
}

int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;

    int result = armstrong(n);

    (result == 1) ? cout << "True" : cout << "False";

    return 0;
}

/* 
Explanation:

Time Complexity: O(log₁₀ n) → linear in the number of digits

Space Complexity: O(1) → constant space

*/