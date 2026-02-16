#include <iostream>
#include <string>
using namespace std;
int main(){

    string x,y;
    cout << "Enter the first name: ";
    cin >> x;
    cout << "Enter the last name: ";
    cin >> y;

    string fullName = x + " " + y;
    cout << "The full name is for the input: " << fullName << endl;
}