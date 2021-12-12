/*
	Noble Team

	Asbun, Guido
	Derderian, Harry
	Kaboli, Seena
	Kim, Yeomyung
	Noble, Trevor

	December 8, 2021

	CS A250
	Project 2
*/

#include "DonorList.h"
#include "set"

#include <iostream>

using namespace std;

/*
Copy constructor
	Parameter: an object of the DonorList class
*/
DonorList::DonorList(const DonorList& otherList)
{
    donorList = new set<DonorType>;
    *donorList = *(otherList.donorList);
}

DonorList& DonorList::operator=(const DonorList& otherList)
{
    if(&otherList != this)
        *this = otherList;
    else
        cerr << "\nAttempted assignment to itself." << endl;
    
    return *this;
}
