//Joe Parsa
//Program 6
//12/13/2020

#include "Queue.h"
#include <iostream>
#include "Queue.h"

using namespace std;
bool checkPlate(string p);

void main() {

    Queue newCars, oldCars, luxCars;
    string choice, menuChoice;
    bool contType = true, contMain = true;
    Car c;

    while (contMain) {
        cout << "Welcome to Mercedes \n";
        "1. New Cars \n";
        "2. Old and Historical Cars \n";
        "3. Luxury Cars \n";
        "4. Exit \n";
            "Please Enter your Choice : ";
            cin >> menuChoice;
        cout << endl;


        if (menuChoice == "1") {
            while (contType) {
                cout << "Welcome to Exhibition: New Cars \n"
                    "Please Enter your Choice :\n";
                "1. Add Car\n";
                "2. Add VIP Car\n";
                "3. Auction Car\n";
                "4. Cancel Car \n";
                "5. List all currently Queued Cars\n";
                "6. Exit to Main Menu\n"; 
                    cin >> choice;
                cout << endl;

                if (choice == "1") {
                    cout << "Enter the Car's name, model and plate: ";
                    cin >> c.name >> c.model >> c.plate;
                    if (checkPlate(c.plate))
                        newCars.addCar(c);
                }
                else if (choice == "2") {
                    cout << "Enter the VIP Car's Name, Model and Plate: ";
                    cin >> c.name >> c.model >> c.plate;
                    if (checkPlate(c.plate))
                        newCars.addVipCar(c);
                }
                else if (choice == "3") {
                    newCars.auctionCar();
                }
                else if (choice == "4") {
                    cout << "Enter the Canceled Car's Name, Model and Plate: ";
                    cin >> c.name >> c.model >> c.plate;
                    if (checkPlate(c.plate))
                        newCars.cancelCar(c);
                }
                else if (choice == "5") {
                    newCars.listCars();
                }
                else if (choice == "6")
                    contType = false;
                else
                    cout << "That is not a valid choice. ";

                cout << endl;
            }
        }
        else if (menuChoice == "2") {
            cout << "Welcome to Mercedes: Old and Historical Cars \n"
                "Please Enter your Choice : \n;"
                " 1. Add Car\n;"
                "2. Add VIP Car\n;"
                "3. Auction Car\n;"
                "4. Cancel Car \n;"
                "5. List all currently Queued Cars\n"
                "6. Exit to Main Menu\n";
                cin >> choice;
            cout << endl;

            if (choice == "1") {
                cout << "Enter the Car's name, model and plate: ";
                cin >> c.name >> c.model >> c.plate;
                if (checkPlate(c.plate))
                    oldCars.addCar(c);
            }
            else if (choice == "2") {
                cout << "Enter the VIP Car's Name, Model and Plate: ";
                cin >> c.name >> c.model >> c.plate;
                if (checkPlate(c.plate))
                    oldCars.addVipCar(c);
            }
            else if (choice == "3") {
                oldCars.auctionCar();
            }
            else if (choice == "4") {
                cout << "Enter the Canceled Car's Name, Model and Plate: ";
                cin >> c.name >> c.model >> c.plate;
                if (checkPlate(c.plate))
                    oldCars.cancelCar(c);
            }
            else if (choice == "5") {
                oldCars.listCars();
            }
            else if (choice == "6")
                contType = false;
            else
                cout << "That is not a valid choice.";

            cout << endl;
        }
        else if (menuChoice == "3") {
            cout << "Welcome to Exhibition: Luxury Cars \n"
                "Please Enter your Choice : \n"
                "1. Add Car\n";
                "2. Add VIP Car\n";
                "3. Auction Car\n";
                "4. Cancel Car \n";
                "5. List all currently Queued Cars\n";
                "6. Exit to Main Menu\n";
                cin >> choice;
            cout << endl;

            if (choice == "1") {
                cout << "Enter the Car's name, model and plate: ";
                cin >> c.name >> c.model >> c.plate;
                if (checkPlate(c.plate))
                    luxCars.addCar(c);
            }
            else if (choice == "2") {
                cout << "Enter the VIP Car's Name, Model and Plate: ";
                cin >> c.name >> c.model >> c.plate;
                if (checkPlate(c.plate))
                    luxCars.addVipCar(c);
            }
            else if (choice == "3") {
                luxCars.auctionCar();
            }
            else if (choice == "4") {
                cout << "Enter the Canceled Car's Name, Model and Plate: ";
                cin >> c.name >> c.model >> c.plate;
                if (checkPlate(c.plate))
                    luxCars.cancelCar(c);
            }
            else if (choice == "5") {
                luxCars.listCars();
            }
            else if (choice == "6")
                contType = false;
            else
                cout << "That is not a valid choice.";
        }

        else if (menuChoice == "4") {
            contMain = false;
        }
        else
            cout << "That is not a valid choice.";

        cout << endl;
    }
}

bool checkPlate(string p) {
    if (p == "\n")
        return false;
    else
        return true;
}