#include <iostream>
#include <cmath> 

using namespace std;

int main() { 
    
    //this program will find the sum of three numbers and find the largest of the three numbers//

    double num1, num2, num3;

    cout << "Please enter your first number";
    cin >> num1 ;

    cout << "Please enter your second number";
    cin >> num2 ;

    cout <<"Please enter your third number";
    cin >> num3 ;
    
  //Sum of three integers//

    double sum = num1 + num2 +num3;
    cout << "The sum of the entered numbers is: " << sum << endl;
    
  //Largest of the three entered numbers//

    cout << "The largest of the entered numbers is: " << fmax(num1, fmax(num2, num3)) << endl;
    
    return 0;
}


//References : https://youtu.be/vLnPwxZdW4Y //
