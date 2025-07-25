/* 
Problem links: 
https://takeuforward.org/data-structure/check-if-a-number-is-prime-or-not/
https://www.geeksforgeeks.org/problems/prime-number2314/1

Problem Description:

Prime Number
Difficulty: BasicAccuracy: 22.2%Submissions: 349K+Points: 1
Given a number n, determine whether it is a prime number or not.

A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.

Examples :

Input: n = 7
Output: true
Explanation: 7 has exactly two divisors: 1 and 7, making it a prime number.

Input: n = 25
Output: false
Explanation: 25 has more than two divisors: 1, 5, and 25, so it is not a prime number.

Input: n = 1
Output: false
Explanation: 1 has only one divisor (1 itself), which is not sufficient for it to be considered prime.
 */

// Solution:

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPrime(int n) {
        
        if (n <= 1) {
            return false;
        }
        
        int c = 0;
        
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                c++;
            }
        }
        
        return (c > 0) ? false : true;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    int result = sol.isPrime(n);

    (result == 1) ? cout << "True" : cout << "False";

    return 0;
}

/* 
Explanation:

My Approach:

I had an idea of iterating through all the numbers from 1 till n. But, I knew that it was not the optimal solution. So, I had help. 

Efficient Approach:

Like the finding all the divisors problem we can find all the divisors of the n from 2 till its square root. And if the count is greater than 0, it is not a prime. This is based on the following principle. 

"The smallest factor of a number greater than one cannot be greater than the square root of that number."

Time Complexity: O(√n)

Space Complexity: O(1) 

*/