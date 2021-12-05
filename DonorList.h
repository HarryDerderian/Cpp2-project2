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

#ifndef DONORLIST_H
#define DONORLIST_H

#include"DonorType.h"
#include<set>

using namespace std;

class DonorList
{
public:
	DonorList() : donorList(new set<DonorType>) {}

	void addDonor(const std::string& firstName,
		const std::string& lastName, int memberNum, int donation);

	int getNoOfDonors() const;
	double getTotalDonations() const;
	double getHighestDonation() const;

	bool isEmpty() const;
	bool searchID(int memberID) const;

	void deleteDonor(int memberID);

	void printAllDonors() const;
	void printAllDonations() const;

	void clearList();
	~DonorList();

	//DonorList(const DonorList&);
	//DonorList& operator=(const DonorList&);

private:
	set<DonorType>* donorList;
};

#endif