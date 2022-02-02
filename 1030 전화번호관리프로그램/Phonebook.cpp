//Phonebook.cpp

#include <iostream>
using namespace std;
#include "Phonebook.h"

/*
Member mem;
Member *pmem;
Member mem[10] = {Member(10), Member(20)}; //10개 만들어짐
Member *pmem = new Member; //1
Member *pmem = new Member[10] // 10
Member* *pmem = new Member*[10]; //

void foo()
{
	int n;
}
*/

Phonebook::Phonebook(int _max /*= 10*/)
{
	max = _max;
	size = 0;
	memberlist = new Member*[max]; //멤버의 주소값을 저장할 수 있는 공간을 max개 만큼 만듬
}


Phonebook::~Phonebook()
{
}


void Phonebook::insert()
{
	//1. 필요한 정보 입력
	char name[20];
	char phone[20];
	cout << "이름 : "; 
	cin.getline(name, sizeof(name));//c의 gets와 동일

	cout << "전화번호 : ";
	cin.getline(phone, sizeof(phone));

	//2. 저장 객체 생성
	Member* pmem = new Member(name, phone); //heap 메모리 만들어서 거기에 저장. 함수 끝나도 메모리가 살아 있음.

	//3. 저장
	if (size >= max)
	{
		cout << "저장할 공간이 없다." << endl;
	}
	else
	{
		memberlist[size] = pmem;
		size++;
		cout << "저장되었습니다." << endl;
	}
}


void Phonebook::printall()
{
	cout << "현재 저장 개수 : " << size << "개" << endl;
	cout << "----------------------------------------" << endl;
	for (int i = 0; i < size; i++)
	{
		Member *pmem = memberlist[i];
		pmem->print();
	}
}


void Phonebook::select()
{
	//검색받을 것
	char name[20];

	cout << "검색할 이름 : ";
	cin.getline(name, sizeof(name));//c의 gets와 동일

	for (int i = 0; i < size; i++) 
	{
		if (Member *pmem = memberlist[i]) 
		{
			pmem->search(name);
		}		
	}
}

void Phonebook::update()
{
	//검색받을 것
	char name[20];
	char newname[20];

	cout << "수정할 이름 : ";
	cin.getline(name, sizeof(name));//c의 gets와 동일

	cout << "변경할 이름 : ";
	cin.getline(newname, sizeof(newname));//c의 gets와 동일

	for (int i = 0; i < size; i++)
	{
		if (Member *pmem = memberlist[i])
		{
			pmem->update(name, newname);
		}
	}

	cout << "변경되었습니다. : " << endl;
}

void Phonebook::Delete()
{
	//검색받을 것
	char name[20];
	int info;

	cout << "삭제할 이름 : ";
	cin.getline(name, sizeof(name));//c의 gets와 동일

	for (int i = 0; i < size; i++)
	{
		if (Member *pmem = memberlist[i])
		{
			pmem->search(name);
			cout << "삭제하려는 정보가 맞습니까?" << endl;
			cout << "맞으면 1번 틀리면 2번을 눌러주세요." << endl;

			cin >> info;
			getchar();

			if (info == 1) 
			{
				pmem->del(name);
				size--;
			}
			else if (info == 2) 
			{
				return;
			}
		}
	}
}