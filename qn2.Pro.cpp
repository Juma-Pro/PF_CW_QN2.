#include <iostream>
using namespace std;

int main() {
    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you." << endl;
    cout << "The program will repeatedly prompt you to enter a positive integer." << endl;
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << endl;

    while (true) {
        int num;
        cout << "Please enter a positive integer (or 0 to quit): ";
        cin >> num;

        if (num <= 0) {
            cout << "Program halted. Goodbye!" << endl;
            break;
        }

        cout << "The divisors of " << num << " are:" << endl;
        for (int i = num; i >= 1; i--) {
            if (num % i == 0) {
                cout << i << endl;
            }
        }

        char response;
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> response;

        while (response != 'y' && response != 'Y' && response != 'n' && response != 'N') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> response;
        }

        if (response == 'n' || response == 'N') {
            cout << "Goodbye!" << endl;
            break;
        }
    }

    return 0;
}

