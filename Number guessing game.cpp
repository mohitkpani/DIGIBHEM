#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int number, guess, nguess = 1;
    
    srand(time(0));
    number = rand() % 100 + 1;
    
    do {
        cout << "Guess a number between 1 to 100" << endl;
        cin >> guess;
        
        if (guess > number) {
            cout << "Guess a lower number please !" << endl;
        } else if (guess < number) {
            cout << "Guess a higher number please !" << endl;
        } else {
            cout << "You have guessed the correct number in " << nguess << "th term" << endl;
        }
        nguess++;
    } while (guess != number);
    
    return 0;
}

