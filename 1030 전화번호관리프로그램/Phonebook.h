//Phonebook.h

#pragma once

#include "Member.h"

class Phonebook
{
	Member* *memberlist; //동적배열 Member* : 멤버의 주소값을 저장 할 수 있음 
	//결론: 멤버의 주소값을 저장할 수 있는 동적배열 생성
	int max;	//max 크기 만큼의 동적배열을 가질것임, 저장 최대 개수
	int size;   //현재 저장된 개수, 저장할 위치

public:
	Phonebook(int _max = 10);
	~Phonebook();

public:
	void insert();
	void printall();
	void select();
	void update();
	void Delete();
};

