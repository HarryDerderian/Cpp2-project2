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

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

void createDonorList(std::ifstream& infile, DonorList& donorList)
{
	std::string  fName, lName;
	int memberID = 0;
	double donation = 0.0;

	while (!infile.eof())
	{
		infile >> fName >> lName >> memberID >> donation;
		donorList.addDonor(fName, lName, memberID, donation);
	}
}

void getDonorData(DonorList& donorList)
{
	std::ifstream infile;

	infile.open("donors_data.txt");

	if (!infile)
	{
		std::cerr << "Input file does not exist." << std::endl;
		std::exit(1); // terminates program
	}

	createDonorList(infile, donorList);

	infile.close();
}
