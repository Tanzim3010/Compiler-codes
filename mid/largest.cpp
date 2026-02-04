#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    if(x>y) {
        cout << "the first number is the largest" << endl;
    }
    else if(x==y) {
        cout << "The numbers are equal" << endl;
    }
    else {
        cout << "The second number is the largest" << endl;
    }
}