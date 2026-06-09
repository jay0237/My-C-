// #include<iostream>
// using namespace std;

// int main() {

//     int fact = 1;
//     int n;

//     cout << "Enter a number: " << endl;
//     cin >> n;

//     for (int i=1;i<=n;i++){
//         fact = fact * i;
//     }
//     cout << "Factorial of " << n << " is: " << fact << endl;
//     return 0;
// }

#include<iostream>
using namespace std;

double facto(int n){

    double fact=1;
    for (int i=1;i<=n;i++){
        fact = fact * i;
    }

    return fact;
}


int main(){
    int n;

    cout << "Enter a number: "<< endl;
    cin >> n;

    cout << "Factorial: " << facto(n) << endl;

    return 0;
 
}