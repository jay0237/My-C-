#include<iostream>
using namespace std;

int digitsum(int n){
    int sum = 0;
    while (n > 0){
        sum += n %10;
        n /= 10;
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;

    int result = digitsum(number);
    cout << "the sum of the digits is: " << result << endl;

    return 0;
}