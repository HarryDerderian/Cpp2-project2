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
#include <algorithm>

using namespace std;

void DonorList::addDonor(const std::string& firstName,
    const std::string& lastName, int memberNum, int donation)
{
   donorList->insert(DonorType(firstName,lastName,memberNum,donation));
}

int DonorList::getNoOfDonors() const
{
    return static_cast<int>(donorList->size());
}

double DonorList::getTotalDonations() const
{
    double amountDonated = 0.0;
    auto current = donorList->cbegin(), end = donorList->cend();
    for (; current != end; ++current)
        amountDonated += current->getAmountDonated();
    return amountDonated;
}

bool DonorList::isEmpty() const
{
    return getNoOfDonors() == 0;
}

bool DonorList::searchID(int memberID) const
{
   return find(donorList->begin(), donorList->end(), memberID) != donorList->end();
}

void DonorList::deleteDonor(int memberID)
{
    if (!searchID(memberID))
    {
        cerr << "Donnor not in list, cannot delete.";
    }
    else {


        auto donor = find(donorList->begin(), donorList->end(), memberID);
        donorList->erase(donor);
    }
}

void DonorList::printAllDonors() const
{
    if (isEmpty())
        cout << "Donor list is empty";
    else
    {
        auto current = donorList->cbegin(), end = donorList->cend();
        for (; current != end; ++current)
            current->printMemberInfo();
    }
}

void DonorList::printAllDonations() const
{
    if (isEmpty())
        cout << "Donor list is empty";
    else
    {
        auto current = donorList->cbegin(), end = donorList->cend();
        for (; current != end; ++current)
            current->printDonation();
    }
}

void DonorList::clearList()
{
    
}

DonorList::~DonorList()
{
    clearList();
}