#include <iostream>
using namespace std;
int main(){
    int arr[5];

    cout << "Enter 5 numbers: " << endl;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "Entered array: " << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Modified array with even(0)/odd(1): " << endl;
    for(int i = 0; i < 5; i++){
        if(arr[i]%2==0) {
            arr[i] = 0;
        }
        else {
            arr[i] = 1;
        }
        cout << arr[i] << " ";
    }
    return 0;
}