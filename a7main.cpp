/*
 * Assignment 7: Car Class
 * COSC 1336 - C++ Programming I
 *
 * This program defines a Car class with private member variables
 * (yearModel, make, speed) and public member functions (constructor,
 * accessors, accelerate, brake). The main function demonstrates the
 * class by accelerating and braking a Car object five times each,
 * displaying the speed after every call.
 *
 * Student Name: [Student Name]
 * Date: [Date]
 */

#include <iostream>
#include <string>
using namespace std;

// --- Car Class Definition ---
class Car
{
private:
    int    yearModel; // The car's year model
    string make;      // The make (manufacturer) of the car
    int    speed;     // The car's current speed

public:
    // Constructor: sets yearModel and make; initializes speed to 0
    Car(int year, string carMake)
    {
        yearModel = year;
        make      = carMake;
        speed     = 0;
    }

    // Accessor: returns the year model
    int getYearModel()
    {
        return yearModel;
    }

    // Accessor: returns the make
    string getMake()
    {
        return make;
    }

    // Accessor: returns the current speed
    int getSpeed()
    {
        return speed;
    }

    // accelerate: adds 5 to speed each time it is called
    void accelerate()
    {
        speed += 5;
    }

    // brake: subtracts 5 from speed each time it is called
    void brake()
    {
        speed -= 5;
    }
};

// --- main ---
int main()
{
    // Create a Car object
    Car myCar(2024, "Toyota");

    // Display basic car info
    cout << "Year:  " << myCar.getYearModel() << endl;
    cout << "Make:  " << myCar.getMake()      << endl;
    cout << "Speed: " << myCar.getSpeed()     << " (initial)" << endl;
    cout << endl;

    // Accelerate five times, displaying speed after each call
    cout << "Accelerating..." << endl;
    for (int i = 0; i < 5; i++)
    {
        myCar.accelerate();
        cout << "Speed: " << myCar.getSpeed() << endl;
    }
    cout << endl;

    // Brake five times, displaying speed after each call
    cout << "Braking..." << endl;
    for (int i = 0; i < 5; i++)
    {
        myCar.brake();
        cout << "Speed: " << myCar.getSpeed() << endl;
    }
    cout << endl;

    return 0;
}

