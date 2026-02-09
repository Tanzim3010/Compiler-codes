#include <iostream>
using namespace std;
int main(){
    double grades[4];
    double sum,cgpa;

    cout << "Enter grades for English,Math,Physics and IP respectively (all 3 credits):  " << endl;
    for(int i = 0; i < 4; i++){
        cin >> grades[i];
    }

    for(int i = 0; i < 4; i++){
        sum = sum + grades[i];
    }

    cgpa = sum / 4.0;

    cout << "Your Cgpa is : " << cgpa << endl;

    if (cgpa >= 3.75 && cgpa <= 4.00) {
        cout << "Performance: GOOD" << endl;
    } 
    else if (cgpa >= 3.50) {
        cout << "Performance: SATISFACTORY" << endl;
    } 
    else if (cgpa >= 3.00) {
        cout << "Performance: NEED TO IMPROVE" << endl;
    } 
    else {
        cout << "Performance: POOR" << endl;
    }

    return 0;
}