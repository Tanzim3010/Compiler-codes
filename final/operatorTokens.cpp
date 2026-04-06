#include <iostream>
using namespace std;
int main() {
    string s;
    cout << "Enter the expression: ";
    cin >> s;

    int result = s[0]-'0';
    char op;

    for(int i = 1; i<(int)s.length();i++){
        if(s[i] == '@' || s[i] == '#' || s[i] == '&' || s[i] == '$'){
            op = s[i];
        }
        else {
            int num = s[i]-'0';

            if(op == '@') {
                result = result + num;
            }
            else if(op == '#') {
                result = result - num;
            }
            else if(op == '&') {
                result = result * num;
            }
            else if(op == '$') {
                result = result / num;
            }
        }
    }

    cout << "Output: " << result << endl;
    return 0;
}