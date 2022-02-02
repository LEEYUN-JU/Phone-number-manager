//Member.h
//클래스 정의
//대두분의 멤버함수들은 선언만

#pragma once

#include <string>
using namespace std;

class Member
{
	static int autonumber;

	int number;
	string name;	//C++에서 지원해주는 문자열 저장 클래스
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

