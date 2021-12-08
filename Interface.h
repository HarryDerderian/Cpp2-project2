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

#ifndef INTERFACE_H
#define INTERFACE_H

#include "DonorList.h"

void displayMenu();
void processSelection(DonorList& aDonorList);
void addDonor(DonorList& aDonorList);
void deleteDonor(DonorList& aDonorList);
void printAllDonors(DonorList& aDonorList);
void printAllDonations(DonorList& aDonorList);
void printTotalDonations(DonorList& aDonorList);
void printHighestDonation(DonorList& aDonorList);

#endif
