#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Game rule function
int rule(char p, char c){
    if (p == c) return 0;

    if (p == 'r' && c == 'p') return -1;
    if (p == 's' && c == 'p') return 1;
    if (p == 'p' && c == 'r') return 1;
    if (p == 's' && c == 'r') return -1;
    if (p == 'r' && c == 's') return 1;
    if (p == 'p' && c == 's') return -1;

    return 0;
}

// Convert choice to word
string choiceName(char ch){
    if(ch == 'r') return "Rock";
    if(ch == 'p') return "Paper";
    if(ch == 's') return "Scissors";
    return "Invalid";
}

int main(){
    char computer, player, playmore;

    cout << "\n=====================================================\n";
    cout << "        ROCK  PAPER  SCISSORS  GAME\n";
    cout << "=====================================================\n";

    cout << "\nRules:\n";
    cout << " r : Rock\n";
    cout << " p : Paper\n";
    cout << " s : Scissors\n";


    do{
        srand(time(0));
        int number = rand() % 100;

        if(number < 33) computer = 'r';
        else if(number > 66) computer = 's';
        else computer = 'p';

        cout << "\n-----------------------------------------------------\n";
        cout << "Enter your choice (r / p / s): ";
        cin >> player;

        int result = rule(player, computer);

        cout << "\nYour Choice     : " << choiceName(player);
        cout << "\nComputer Choice : " << choiceName(computer);
        cout << "\n-----------------------------------------------------\n";

        if(result == 1)
            cout << " RESULT : YOU WIN!\n";
        else if(result == -1)
            cout << " RESULT : YOU LOSE!\n";
        else
            cout << " RESULT : IT'S A TIE!\n";

        cout << "\nPlay again? (n to exit, any key to continue): ";
        cin >> playmore;

    } while(playmore != 'n');

    cout << "\nThank you for playing! \n";
    cout << "=====================================================\n";

    return 0;
}
