//Member.h
//Ŭ���� ����
//��κ��� ����Լ����� ����

#pragma once

#include <string>
using namespace std;

class Member
{
	static int autonumber;

	int number;
	string name;	//C++���� �������ִ� ���ڿ� ���� Ŭ����
	string phone;

public:
	Member(string _name, string _phone);
	~Member();

public:
	void print() const;
	void search(string search_name) const;
	void del(string delete_name);
	void update(string old_name, string new_name);
};

