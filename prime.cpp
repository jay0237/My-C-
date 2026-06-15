#include<iostream>
using namespace std;

int prime(int n){
    if (n <= 1) return 0;
    for (int i=2;i<=n/2;i++){
        if (n % i == 0) return 0;
        
    }
    return 1;
}

        int main(){

        int number;
        cout << "Enter a number: " << endl;
        cin >> number;

        if (prime(number)){
            cout << number << " is a prime number." << endl;
        } else {
         cout << number << " is not a prime number." << endl;
        }

        return 0;

        }