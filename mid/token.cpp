#include <iostream>
#include <string>
using namespace std;

bool isKeywords(string s) {
    string key[] = {"int","float","if","else","while","for","return","char","double"};

    for(int i = 0; i < 9; i++){
        if(s == key[i]){
            return true;
        }
    }
    return false;
}

bool isLetter(char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z' )){
        return true;
    }
    return false;
}

bool isDigit(char c){
    if(c >= '0' && c <= '9'){
        return true;
    }
    return false;
}

bool isOperator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '='){
        return true;
    }
    return false;
}

bool isCharacter(char c){
    if(c == ';' || c == '{' || c == '}' || c == '(' || c == ')' || c == ','){
        return true;
    }
    return false;
}

bool isValid(string s){
    if(!(isLetter(s[0])) || s[0] == '_'){
        return false;
    }
    return true;
}

int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin,s);

    string token = "";

    for(int i = 0; i < (int)s.length(); i++){
        if(s[i] == ' '){
            if(token != ""){
                if(isKeywords(token)){
                    cout << token << " = keyword" << endl;
                }
                else if(isValid(token)){
                    cout << token << " = Identifier" << endl;
                }
                else if(isDigit(token[0])){
                    cout << token << " = Number" << endl;
                }
                else {
                    cout << token << " = Invalid" << endl;
                }
                token = "";
            }
        }

        else if(isOperator(s[i])){
            if(token != ""){
                if(isKeywords(token)){
                    cout << token << " = keyword" << endl;
                }
                else if(isValid(token)){
                    cout << token << " = Identifier" << endl;
                }
                else if(isDigit(token[0])){
                    cout << token << " = Number" << endl;
                }
                else {
                    cout << token << " = Invalid" << endl;
                }
                token = "";
            }
            cout << s[i] << " = Operator" << endl;
        }

        else if(isCharacter(s[i])){
            if(token != ""){
                if(isKeywords(token)){
                    cout << token << " = keyword" << endl;
                }
                else if(isValid(token)){
                    cout << token << " = Identifier" << endl;
                }
                else if(isDigit(token[0])){
                    cout << token << " = Number" << endl;
                }
                else {
                    cout << token << " = Invalid" << endl;
                }
                token = "";
            }
            cout << s[i] << " = Special Character" << endl;
        }
        else {
            token = token + s[i];
        }

    }
    if(token != ""){
        if(isKeywords(token)){
            cout << token << " = keyword" << endl;
        }
        else if(isValid(token)){
            cout << token << " = Identifier" << endl;
        }
                else if(isDigit(token[0])){
            cout << token << " = Number" << endl;
        }
        else {
            cout << token << " = Invalid" << endl;
        }
    }
    
    return 0;
}