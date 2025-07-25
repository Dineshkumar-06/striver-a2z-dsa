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
using namespace std;

int my_count_digits(int n) {
        int c = 0;
        while(n > 0) {
            c += 1;
            n /= 10;
        }
        return c;
}

int efficient_count_digits(int n) {
    if (n == 0) return 1; 
    return floor(log10(n)) + 1; 
}


int main() {
    int n = 5534;
    cout << "Number of digits: " << my_count_digits(n) << endl;
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