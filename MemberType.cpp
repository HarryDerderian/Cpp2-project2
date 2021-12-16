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

#include "MemberType.h"
#include <iostream>

using namespace std;

void MemberType::setMemberInfo(const string& newFirst,
	const string& newLast, int newID)
{
	firstName = newFirst;
	lastName = newLast;
	memberID = newID;
}

const string& MemberType::getFirstName() const
{
	return firstName;
}

const string& MemberType::getLastName() const
{
	return lastName;
}

const int& MemberType::getMembershipNo() const
{
	return memberID;
}

void MemberType::printName() const
{
	cout << firstName << " "
		<< lastName << endl;
}

void MemberType::printMemberInfo() const
{
	cout << memberID << " - " << firstName
		<< " " << lastName << endl;
}

MemberType::~MemberType() {}
