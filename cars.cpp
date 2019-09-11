#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
string carS[5] = {"> BMW", "> Ford", "> Maserati", "> Lamborghini",
"> Honda"};
int typeCar;
  cout << endl;
  cout << "###########################" << endl;
  cout << "#  RANDOM CAR GENERATOR!  #" << endl;
  cout << "###########################" << endl;
  cout << endl;
  cout << " Pick a number 0-4: " << endl;
  cin >> typeCar;
  if ( typeCar > 4 ) {
    cout << "Invalid! Please chose a # between 0-4!" << endl;
  }
string carB[3] = {" M4", " X6", " i8"};
string carF[3] = {" Fiesta", " Mustang", " F-150"};
string carM[3] = {" GranTurismo", " Quattroporte", " Levante"};
string carL[3] = {" Huracan EVO", " Urus", " Aventador S"};
string carH[3] = {" Fit", " CRV", " Civic"};
int modelCar;
  cout << endl;
  cout << " Pick another number 0-2:" << endl;
  cin >> modelCar;
  cout << endl;
  cout << "Congrats, you're the proud owner of a:" << endl;
  if (typeCar == 0) {
  cout << carS[typeCar] << carB[modelCar] << endl;
} else if (typeCar == 1) {
  cout << carS[typeCar] << carF[modelCar] << endl;
} else if (typeCar == 2) {
  cout << carS[typeCar] << carM[modelCar] << endl;
} else if (typeCar == 3) {
  cout << carS[typeCar] << carL[modelCar] << endl;
} else if (typeCar == 4) {
  cout << carS[typeCar] << carH[modelCar] << endl;
} else if (modelCar > 4) {
  cout << "Invalid! Make sure you select a number" << endl;
  cout << "within the said parameters." << endl;
}
// Error loop neeed if incorrect number is entered!
  return 0;
}
