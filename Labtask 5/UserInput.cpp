#include <iostream>
using namespace std;

int main() {
    int userInput;
    cout << "Enter a digit between 5 and 10: " << endl;
    cin >> userInput;

    while (userInput < 5 || userInput > 10) {
        cout << "You Entered " << userInput << ". Please enter a number between 5 and 10: " << endl;
        cin >> userInput;
        
    }

    cout << "Your input value (" << userInput << ") has been accepted." << endl;

    return 0;
}
