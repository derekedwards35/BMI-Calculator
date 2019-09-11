#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
double body_weight;
double body_height;
  cout << "Body Mass Index Calculator" << endl;
  cout << "How much do you weigh? (in pounds):" << endl;
  cin >> body_weight;
  cout << "How tall are you? (in inches):" << endl;
  cin >> body_height;
double numB = 703;
double heightTwo = body_height * body_height;
double bodyMass = numB * body_weight;
double bodyMassTwo = bodyMass / heightTwo;
  cout << "Your BMI is: " << bodyMassTwo << " lbs/inches^2" << endl;
return 0;
}
