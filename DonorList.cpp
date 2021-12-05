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
    double amountDonated{0.0};
    auto current = donorList->cbegin(), end = donorList->cend();
    for (auto const &elem : *donorList)
        amountDonated += elem.getAmountDonated();
    return amountDonated;
}

double DonorList::getHighestDonation() const
{
    double highestAmountDonated{0.0};
    for (auto const &elem : *donorList)
    {
        double donation = elem.getAmountDonated();
        if(donation > highestAmountDonated)
            highestAmountDonated = donation;
    }
    return highestAmountDonated;
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
        cout << "Donor not in list, cannot delete.";
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
        for (auto const &elem : *donorList)
            elem.printMemberInfo();
    }
}

void DonorList::printAllDonations() const
{
    if (isEmpty())
        cout << "Donor list is empty";
    else
    {
        for (auto const &elem : *donorList)
            elem.printDonation();
    }
}

void DonorList::clearList()
{
    donorList->empty();
}

DonorList::~DonorList()
{
    clearList();
    delete donorList;
    donorList = nullptr;
}