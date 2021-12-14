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
		const std::string& lastName, int memberNum, double donation);

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

	DonorList(const DonorList&);
	DonorList& operator=(const DonorList&);

private:
	set<DonorType>* donorList;
};

#endif
