  // Layan alfuhaid (2210003515)
//Sahar Almaqadi (2210003612)
//Jenan Albarrak (2210003585)
//Hawraa Al Shief (2210003659)

#include <iostream>
using namespace std;

void displayMenu() {
  cout << "Choose a law to learn about:" << endl;
  cout << "1. Hooke's Law" << endl;
  cout << "2. Ohm's Law" << endl;
  cout << "3. Conservation of Energy" << endl;
  cout << "4. Pascal's Law" << endl;
  cout << "5. Exit" << endl;
}

int main() {
  int choice;
  do {
    displayMenu();
    cout << "Enter the number of your choice: ";
    cin >> choice;
    switch (choice) {
      case 1: // "Hooke's Law"
        float F, x, k;
        cout << "Enter the value of Displacement x: ";
        cin >> x;
        cout << "Enter the value of Spring Constant k: ";
        cin >> k;
        F = (-k) * x;
        cout << "The Restoring Force = " << F << endl;
        break;
      case 2: // "Ohm's Law"
        float I, R, V;
        cout << "Enter the value of Current I: ";
        cin >> I;
        cout << "Enter the value of Resistance R: ";
        cin >> R;
        V = I * R;
        cout << "The required Voltage V = " << V << endl;
        break;
      case 3: // "Conservation of Energy"
        double k1, k2, u1, u2, E;
        cout << "The law of conservation of energy" << endl;
        cout << "Enter the kinetic energy (k1, k2): ";
        cin >> k1 >> k2;
        cout << "Enter the potential energy (u1, u2): ";
        cin >> u1 >> u2;
        E = (k1 + u1) - (k2 + u2);
        cout << E << endl;
        if (E == 0) {
          cout << "The Energy is conserved" << endl;
        } else {
          cout << "The energy is not conserved" << endl;
        }
        break;
      case 4: // "Pascal's Law"
        float F1, A, pressure;
        cout << "To find the pressure" << endl;
        cout << "Input the force F1: ";
        cin >> F1;
        cout << "Input the area A: ";
        cin >> A;
        pressure = F1 / A;
        cout << "The pressure is: " << pressure << endl;
        break;
      case 5:
        cout << "Exiting..." << endl;
        break;
      default:
        cout << "Invalid choice. Please try again." << endl;
        break;
    }
  } while (choice != 5);
    return 0;
}

