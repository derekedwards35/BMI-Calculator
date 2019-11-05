// Derek Edwards CPSC120 Section 19

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <thread>
#include <chrono>
using namespace std;

int main(int argc, char* argv[]) {
  string UserPinString = argv[1];
  int UserPin = std::stoi(UserPinString);

  string UserMoneyString = argv[2];
  float UserMoney = std::stof(UserMoneyString);

  if (argc != 3) {
  cout << "Invalid!" << endl;
  cout << "Usage: ./bank_simulator <pin> <balance>";
}
  else {
  cout << "########################################" << endl;
  cout << "# Welcome to branch #120 at CPSC bank! #" << endl;
  cout << "########################################" << endl;
  cout << "Please enter your PIN!: ";
}
  int PinEntry;
  int PinAttempts = 3;
  int i;
  int p;
  string UserContinue;
  cin >> PinEntry;

do {
if (PinEntry == UserPin) {
    cout << "Accessing..." << endl;
}

else {
  do {
    cout << "Invalid Pin! You have " << PinAttempts << " tries left." << endl;
    cout << "Please re-enter the correct pin: ";
    PinAttempts = PinAttempts - 1;
    cin >> PinEntry;
      if (PinAttempts == 0) {
        cout << "Have a nice day, goodbye!" << endl;
        return 0;
    }
  }
    while (PinEntry != UserPin);
}

  int MenuEntry;
  std::this_thread::sleep_for(std::chrono::seconds(1));
  cout << "What would you like to do today?" << endl;
  cout << "1 - Check Balance" << endl;
  cout << "2 - Deposit Cash" << endl;
  cout << "3 - Withdraw Cash" << endl;
  cout << "4 - Exit" << endl;
  cout << ": ";
  cin >> MenuEntry;

  float WithdrawBalance;
  float WithdrawAmount;
  float DepositAmount;
  float DepositBalance;


  if (MenuEntry == 1) {
    cout << "Your current balance is: $" << UserMoney << endl;
}

  else if (MenuEntry == 2) {
    cout << "Enter amount to deposit: $";
    cin >> DepositAmount;
    DepositBalance = UserMoney + DepositAmount;
    cout << "Thank you! Your account now has a balance of $" << DepositBalance
    << endl;
    UserMoney = DepositBalance;
}

  else if (MenuEntry == 3) {
    cout << "Enter amount to withdraw: $";
    cin >> WithdrawAmount;

      if (WithdrawAmount > UserMoney) {
        do {
      cout << "Invalid, Insufficient Funds!" << endl;
      cout << "Enter amount to withdraw: $";
      cin >> WithdrawAmount;
    }
        while (WithdrawAmount > UserMoney);
      WithdrawBalance = UserMoney - WithdrawAmount;
      cout << "Success! You currently have $" << WithdrawBalance
      << " in your account." << endl;
      UserMoney = WithdrawBalance;
    }
        else {
      WithdrawBalance = UserMoney - WithdrawAmount;
      cout << "Success! You currently have $" << WithdrawBalance
      << " in your account." << endl;
      UserMoney = WithdrawBalance;
    }
}

  else {
    cout << "Have a great day, bye bye! :)" << endl;
    return 0;
}


  if (MenuEntry < 4) {
    cout << "Would you like an additional transaction? (y/n): ";
    cin >> UserContinue;
}
  if (UserContinue == "n") {
      cout << "Have a nice day, goodbye!" << endl;

}
}
while (UserContinue == "y");



  return 0;
  }
