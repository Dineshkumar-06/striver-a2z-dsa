/*
Problem links:
https://takeuforward.org/plus/dsa/problems/count-all-digits-of-a-number
https://www.geeksforgeeks.org/problems/count-digits-1606889545/1

Problem Description:

Count all Digits of a Number

You are given an integer n. You need to return the number of digits in the number.

The number will have no leading zeroes, except when the number is 0 itself.

Examples:
Input: n = 4
Output: 1
Explanation: There is only 1 digit in 4.
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

My Approach:

Looping through the digit by chopping off the last digit at each iteration and incrementing the counter variable each time.

Time Complexity: O(log n) => The loop runs for n number of digits. A number n has approximately log₁₀(n) digits. O(log₁₀ n) → O(log n)

Space Complexity: O(1)

Efficient Approach:

Using the log10() function to calculate the number of times the given input can be divided by 10. Then adding 1 to get the exact answer.

Time Complexity: O(1) => Since no loop.

Space Complexity: O(1)

*/