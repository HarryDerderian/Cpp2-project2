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
#include "DonorType.h"
#include "set"

using namespace std;

//Copy constructor
DonorList::DonorList(const DonorList& otherList)
{
    *DonorList.this = new set<DonorList>(otherList);
}
