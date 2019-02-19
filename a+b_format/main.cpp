/*
    1001 A+B Format （20 分）
    Calculate a+b and output the sum in standard format -- that is,
    the digits must be separated into groups of three by commas (unless there are less than four digits).

    Input Specification:
    Each input file contains one test case. Each case contains a pair of integers a and b where −10
    ​6
    ​​ ≤a,b≤10
    ​6
    ​​ . The numbers are separated by a space.

    Output Specification:
    For each test case, you should output the sum of a and b in one line.
    The sum must be written in the standard format.

    Sample Input:
    -1000000 9
    Sample Output:
    -999,991
 */


#include <iostream>

using namespace std;


int main() {
    int a, b, sum, start = 0, left;
    scanf("%d %d", &a, &b);
    sum = a + b;
    string s = to_string(sum);

    int length = s.length() - 1;

    if (sum < 0) {
        start += 1;
        cout << s[0];
    }

    for (int i = start; i <= length; i++) {
        cout << s[i];
        left = length - i;
        if (left % 3 == 0 and left != 0) {
            cout << ",";
        }
    }

    return 0;
}