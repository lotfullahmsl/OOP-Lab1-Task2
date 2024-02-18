#include <iostream>
using namespace std;

class Car {
private:
    string carMake;
    string carModel;
    int carYear;
    int carMileage;

public:
    Car(string make, string model, int year, int mileage) : carMake(make), carModel(model), carYear(year), carMileage(mileage) {}

    void setMake(string make) {
        carMake = make;
    }

    void setModel(string model) {
        carModel = model;
    }

    void setYear(int year) {
        carYear = year;
    }

    void setMileage(int mileage) {
        carMileage = mileage;
    }

    void displayInformation() {
        cout << "Make: " << carMake << "\nModel: " << carModel << "\nYear: " << carYear << "\nMileage: " << carMileage << endl;
    }

    void servicing() {
        if (carMileage >= 10000) {
            cout << "Car needs servicing.\n";
        }

        else if (carMileage < 10000 && carMileage > 0) {
            cout << "Car does not need servicing.\n";
        }
    }
};

int main() {
    cout << "\t\t\tWelcome to Car Making Survise." << endl << endl;
    cout << "\t\t\tThis is the Car Class\n";
    int mileage;
    cout << "Enter the car mileage: ";
    cin >> mileage;

    Car myCar("Honda", "SUV", 2023, mileage);

    cout << "\t\t\tVehicle Details:\n";
    myCar.displayInformation();
    cout << "\t\t\tServicing Status:\n";
    myCar.servicing();

    return 0;
}
