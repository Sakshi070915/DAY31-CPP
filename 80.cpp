/*write a program that defines a fucntion int add(int a, int b)to calculate and return the sum of two integers. 
Call this function from main() with two user input values. Display the returned result. */
#include <iostream>

using namespace std;
int add(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    int result = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}