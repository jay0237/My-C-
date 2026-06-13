#include<iostream>
using namespace std;

int main(){
    int a;
    int b;

    cout << "Enter a number: " << endl;
    cin >> a;

    cout << "Enter a second number: " << endl;
    cin >> b;

    int sum = a+b;
    int sub = a-b;
    int mul =a*b;
    int div = a/b;

    cout <<"1.Sum" << endl;
    cout <<"2.Subtraction" << endl;
    cout <<"3.Multiplication" << endl;
    cout <<"4.Division" << endl;
    cout <<"Enter your Choice: " <<endl;

    int choice;
    cin >> choice;

    switch(choice){
        case 1:
            cout << "Sum: " << sum << endl;
            break;
        case 2:
            cout << "Subtraction: " << sub << endl;
            break;
        case 3:
            cout << "Multiplication: " << mul << endl;
            break;
        case 4:
            cout << "Division: " << div << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}