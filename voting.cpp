#include <iostream>
using namespace std;

int main() {

    int a;

    cout << "Enter your age: ";
    cin >> a;

    if(a>=18){
        cout << "Eligible for vote."  << endl;
    }
    else{
        cout << "not eligible for vote." << endl;
    }

    return 0;
}
