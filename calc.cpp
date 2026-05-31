#include<iostream>
using namespace std;

int main() {

    int a;
    int b;

    cout << "Enter a first number: " << endl;
    cin >> a;

    cout << "Enter a second number: " << endl;
    cin >> b;

    int sum = a+b;
    int subtract = a-b;
    int product = a*b;
    int div = a/b;

    cout << "1.sum" << endl;
    cout << "2.subtract" << endl;
    cout << "3.product" << endl;
    cout << "4.division" << endl;
    cout << "Enter your choice: " << endl;

    int choice;
    cin >> choice;

    if(choice == 1){
        cout << "The sum of two number is: " << sum << endl;
    }
    else if(choice == 2){
        cout << "The subtract of two number is: " << subtract << endl;
    }
    else if(choice == 3){
        cout << "the product of two number is: " << product << endl;        
    }
    else if(choice == 4){
        cout << "The division of two number is: " << div << endl;
    }
    else{
        cout << "Invalid Choice" << endl;   
    }
    

    return 0;
}
