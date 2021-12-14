/*
	Noble Team

	Asbun, Guido
	Derderian, Harry
	Kaboli, Seena
	Kim, Yeomyung
	Noble, Trevor

	December 16, 2021

	CS A250
	Project 2
*/

#include "Interface.h"
#include "DonorList.h"

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void displayMenu()
{
    cout << string(49, '*') << endl;
    cout << string(20, ' ') << "MAIN MENU" << endl;
    cout << string(49, '*') << endl;
    cout << "\nSelect one of the following:\n\n";
    cout << string(4, ' ') << "1. Add a donor\n";
    cout << string(4, ' ') << "2. Delete a donor\n";
    cout << string(4, ' ') << "3. Print all donors\n";
    cout << string(4, ' ') << "4. Print all donations\n";
    cout << string(4, ' ') << "5. Print total donations\n";
    cout << string(4, ' ') << "6. Print highest donation\n";
    cout << string(4, ' ') << "7: To Exit\n\n";
}

void processSelection(DonorList& aDonorList)
{
    char willContinue = 'y';
    bool exit = false;

    while ((willContinue == 'y') && !exit)
    {
        cout << "  => Enter your selection: ";
        int selection{ 0 };
        cin >> selection;

        if (selection == 1)
        {
            cout << endl;
            addDonor(aDonorList);
        }
        else if (selection == 2)
        {
            cout << endl;
            deleteDonor(aDonorList);
        }
        else if (selection == 3)
        {
            cout << endl;
            printAllDonors(aDonorList);
        }
        else if (selection == 4)
        {
            cout << endl;
            printAllDonations(aDonorList);
        }
        else if (selection == 5)
        {
            cout << endl;
            printTotalDonations(aDonorList);
        }
        else if (selection == 6)
        {
            cout << endl;
            printHighestDonation(aDonorList);
        }
        else if (selection == 7)
        {
            cout << "\n  => Thank you for visiting our site!\n";
            exit = true;
        }
        else
        {
            cout << "\n  => Sorry. That is not a selection.\n";
        }

        if (!exit)
        {
            cout << " \n  => Would you like to continue? (y/n) ";
            cin >> willContinue;
            cout << endl;
            if (willContinue == 'y')
                displayMenu();
            else
                cout << "  => Thank you for visiting our site!\n";
        }
    }
}

void addDonor(DonorList& aDonorList)
{
    string firstName;
    cout << "  => Enter donor's first name: ";
    cin >> firstName;

    string lastName;
    cout << "  => Enter donor's last name: ";
    cin >> lastName;

    int memberNumber = 0;
    cout << "  => Enter donor's membership number: ";
    cin >> memberNumber;

    double donationAmount = 0.0;
    cout << "  => Enter amount donated: $ ";
    cin >> donationAmount;

    aDonorList.addDonor(firstName, lastName, memberNumber,
        donationAmount);
    cout << "\n  => Donor has been added. \n";
}

void deleteDonor(DonorList& aDonorList)
{
    if (aDonorList.getNoOfDonors() == 0)
    {
        cout << "The database has no donors.\n";
    }
    else
    {
        int membershipNumber = 0;
        cout << "  => Enter donor's membership number: ";
        cin >> membershipNumber;
        cout << endl;

        aDonorList.deleteDonor(membershipNumber);

        cout << "  => Donor has been deleted. \n";
    }
}

void printAllDonors(const DonorList& aDonorList)
{
    aDonorList.printAllDonors();
    cout << endl;
}

void printAllDonations(const DonorList& aDonorList)
{
    aDonorList.printAllDonations();
    cout << endl;
}

void printTotalDonations(const DonorList& aDonorList)
{
    cout << fixed << showpoint << setprecision(2);
    cout << string(5, ' ') << "Total donations: $" <<
		aDonorList.getTotalDonations() << endl;
}

void printHighestDonation(const DonorList& aDonorList)
{
    cout << string(5, ' ') << "Highest donation: $" <<
		aDonorList.getHighestDonation() << endl;
}
