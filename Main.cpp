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
#include "Interface.h"
#include "InputHandler.h"

using namespace std;

int main()
{
	DonorList aDonorList;
	getDonorData(aDonorList);
	if (!aDonorList.isEmpty())
	{
		displayMenu();
		processSelection(aDonorList);
	}

    return 0;
}
