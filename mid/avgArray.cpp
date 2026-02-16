#include <iostream>
using namespace std;
int main(){
    int arr[5] = {5,3,1,2,3};
    double sum;
    double avg;

    for(int i = 0; i < 5; i++){
        sum = sum + arr[i];

        avg = sum/5;
    }

    cout << "the avg of the array is: " << avg << endl;
}