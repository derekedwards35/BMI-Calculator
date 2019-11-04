// Derek Edwards CPSC120 Section 19

#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char* argv[]) {
  string UserChoiceString = argv[1];
  int UserChoice = std::stoi(UserChoiceString);


    srand(time(0)); .
    int computerChoice = rand() % 3;
    if (UserChoice < 0 || UserChoice > 2) {
        cout << "Invalid. This is not an acceptable choice." << endl;
        cout << "Please stay within the parameters [0, 1, 2]." << endl;
        cout << "I chose rock for you" << endl;
        cout << "and sincerely hope you lose." << endl;
      UserChoice = 0;
    } else if (UserChoice == 0) {
        cout << "You chose rock." << endl;
    } else if (UserChoice == 1) {
        cout << "You chose paper." << endl;
    } else if (UserChoice == 2) {
        cout << "You chose scissors." << endl;
    }

    if (computerChoice == 0) {
      cout << "The computer chose rock" << endl;
    } else if (computerChoice == 1) {
      cout << "The computer chose paper" << endl;
    } else if (computerChoice == 2) {
      cout << "The computer chose scissors" << endl;
    }

    if (UserChoice == computerChoice) {
        cout << "Draw!" << endl;
    } else if (UserChoice == 0 && computerChoice == 1) {
        cout << "You lose!" << endl;
    } else if (UserChoice == 0 && computerChoice == 2) {
        cout << "You win!" << endl;
    } else if (UserChoice == 1 && computerChoice == 0) {
        cout << "You win!" << endl;
    } else if (UserChoice == 1 && computerChoice == 2) {
        cout << "You lose!" << endl;
    } else if (UserChoice == 2 && computerChoice == 0) {
        cout << "You lose!" << endl;
    } else if (UserChoice == 2 && computerChoice == 1) {
        cout << "You win!" << endl;
    }
    
    return 0;
  }
