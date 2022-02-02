//Member.cpp
#include<iostream>
using namespace std;
#include "Member.h"
#include <vector>

int Member::autonumber = 0;

Member::Member(string _name, string _phone)
{
	autonumber++;
	
	number = autonumber;
	name = _name;
	phone = _phone;
}


Member::~Member()
{
}


void Member::print() const
{
	cout << "[" << number << "]";
	cout << name << "\t";
	cout << phone << endl;
}

void Member::search(string search_name) const 
{
	if (name == search_name) 
	{
		cout << "[" << number << "]";
		cout << name << "\t";
		cout << phone << endl;
	}
}

void Member::del(string delete_name) 
{
	if (name == delete_name) 
	{
		name = "\0";
		phone = "\0";
	}	
}

void Member::update(string old_name, string new_name) 
{
	if (name == old_name) 
	{
		name = new_name;
	}
}
