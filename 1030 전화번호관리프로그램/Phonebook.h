//Phonebook.h

#pragma once

#include "Member.h"

class Phonebook
{
	Member* *memberlist; //�����迭 Member* : ����� �ּҰ��� ���� �� �� ���� 
	//���: ����� �ּҰ��� ������ �� �ִ� �����迭 ����
	int max;	//max ũ�� ��ŭ�� �����迭�� ��������, ���� �ִ� ����
	int size;   //���� ����� ����, ������ ��ġ

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

