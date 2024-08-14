/*Write a program to give the following
output for the given input
Example 1:
Input: a1b10
Output: abbbbbbbbbb
Example 2:
Input: b3c6d15
Output: bbbccccccddddddddddddddd
The number varies from 1 to 99.*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string input;
    string output = "";

    // Input the string
    cout << "Enter the input string: ";
    cin >> input;

    for (size_t i = 0; i < input.length(); i++) {
        if (isalpha(input[i])) {
            char ch = input[i];
            int num = 0;

            // Read the number following the character
            while (i + 1 < input.length() && isdigit(input[i + 1])) {
                num = num * 10 + (input[++i] - '0');
            }

            // Append the character 'num' times to the output
            output.append(num, ch);
        }
    }

    cout << "Output: " << output << endl;

    return 0;
}
