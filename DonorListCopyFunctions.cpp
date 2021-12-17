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

#include "DonorList.h"
#include <set>

#include <iostream>

using namespace std;

DonorList::DonorList(const DonorList& otherList)
{
    donorList = new set<DonorType>;
    *donorList = *(otherList.donorList);
}

DonorList& DonorList::operator=(const DonorList& otherList)
{
    if(donorList != otherList.donorList)
       *donorList = *otherList.donorList;
    else
        cerr << "\nAttempted assignment to itself." << endl;
    
    return *donorList;
}
