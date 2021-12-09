/*
	Noble Team
	Noble, Trevor
	Derderian, Harry
	Kaboli, Seena
	Asbun, Guido
	Kim, Yeomyung
	December 3, 2021
	CS A250
	Project 1
*/

#include "DonorList.h"
#include <iostream>
#include "set"

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
    {
        *this = otherList;
        
    }
    else
    {
        cerr << "\nAttempted assignment to itself." << endl;
    }
    
    return *this;
}
