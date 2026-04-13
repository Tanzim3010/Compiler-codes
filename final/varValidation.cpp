#include <iostream>
#include <string>
using namespace std;

bool isLetter(char c){
    if(c >= 'a' && c <= 'z') {
        return true;
    }
    if(c >= 'A' && c <= 'Z') {
        return true;
    }
    return false;
}

bool isDigit(char c){
    if(c >= '0' && c <= '9') {
        return true;
    }
    return false;
}

bool startType(string s){
    if(s[0]=='i' && s[1]=='n' && s[2]=='t' && s[3]==' ') {
        return true;
    }
    else if(s[0]=='f' && s[1]=='l' && s[2]=='o' && s[3]=='a' && s[4]=='t' && s[5]==' ') {
        return true;
    }
    else if(s[0]=='b' && s[1]=='o' && s[2]=='o' && s[3]=='l' && s[4]==' ') {
        return true;
    }

    return false;
}


bool isVardec(string s){
    bool equal = false;
    bool colon = false;

    for(int i = 0; i <= (int)s.length(); i++){
        if(s[i] == '=') {
            equal = true;
        }
        if(s[i] == ';') {
            colon = true;
        }
    }
    int i = 0;
    while(s[i] != ' ' && s.length()){
        i++;
    }
    i++;

    if(startType(s) && isLetter(s[i]) && equal && colon){
        return true;
    }
    return false;
}

bool isFuncdec(string s){
    bool open = false;
    bool close = false;

    for(int i = 0; i <= (int)s.length(); i++){
        if(s[i] == '(') {
            open = true;
        }
        if(s[i] == ')') {
            close = true;
        }   
    }

    int i = 0;
    while(s[i] != ' ' && s.length()){
        i++;
    }
    i++;

    if(startType(s) && isLetter(s[i]) && open && close){
        return true;
    }
    return false;
}

int main() {
    string s;
    cout << "Enter expression: ";
    getline(cin,s);

    if(isVardec(s)){
        cout << "This is a proper var declaration" << endl;
    }
    else {
        cout << "This is not a proper var declaration" << endl;
    }

    if(isFuncdec(s)){
        cout << "This is a proper function declaration" << endl;
    }
    else {
        cout << "This is not a proper function declaration" << endl;
    }
    
}