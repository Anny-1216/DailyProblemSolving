/*Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0
 

Constraints:

0 <= num <= 231 - 1*/

#include <stdio.h>
int addDigits(int num) {
    int a = num % 10;
    int b = (num - a)/10;
    int c = a+b;

    if (c<10){
        return c;
    }
    else {
        return addDigits(c);
    }
}
// Time Complexity: O(log n) - The number of digits in the number determines the number of recursive calls.