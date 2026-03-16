#include <iostream>
#include <string>
using namespace std;

bool isExpValid(string y) {
    if(y[1] != '='){
        return false;
    }
    else {
    for(int i = 2 ; i < (int)y.length(); i++){
        if(y[i+1] != '+' || y[i+1] != '-' || y[i+1] != '*' || y[i+1] != '/' || y[i+1] != '\0'){
            return false;
        }
    }
  }   
    return 0;
}

bool isValid(string x) {
    if(x.length() != 3) {
        return false;
    }

    else if((x[0] == '-' && x[1] == '-') || (x[0] == '+' && x[1] == '+') || 
            (x[1] == '-' && x[2] == '-') || (x[1] == '+' && x[2] == '+')){
                return true;
    }
    return 0;
}

int main(){
    string s;
    cout << "Enter the expression: ";
    cin >> s;

    string t;
    cout << "Enter the Oparand expression: ";
    cin >> t;

    if(isValid(s)){
        cout << "Valid" << endl;
    }
    else {
        cout << "Invalid" << endl;
    }

    if(isExpValid(t)) {
        cout << "Valid" << endl;
    }
    else {
        cout << "Invalid" << endl;
    }
}