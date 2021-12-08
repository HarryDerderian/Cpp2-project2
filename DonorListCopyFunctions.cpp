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

/*
Copy constructor
	Parameter: an object of the DonorList class
*/
DonorList::DonorList(const DonorList& otherList)
{
    donorList = new set<DonorType>;
    *donorList = *(otherList.donorList);
}
