//Phonebook.cpp

#include <iostream>
using namespace std;
#include "Phonebook.h"

/*
Member mem;
Member *pmem;
Member mem[10] = {Member(10), Member(20)}; //10�� �������
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
	memberlist = new Member*[max]; //����� �ּҰ��� ������ �� �ִ� ������ max�� ��ŭ ����
}


Phonebook::~Phonebook()
{
}


void Phonebook::insert()
{
	//1. �ʿ��� ���� �Է�
	char name[20];
	char phone[20];
	cout << "�̸� : "; 
	cin.getline(name, sizeof(name));//c�� gets�� ����

	cout << "��ȭ��ȣ : ";
	cin.getline(phone, sizeof(phone));

	//2. ���� ��ü ����
	Member* pmem = new Member(name, phone); //heap �޸� ���� �ű⿡ ����. �Լ� ������ �޸𸮰� ��� ����.

	//3. ����
	if (size >= max)
	{
		cout << "������ ������ ����." << endl;
	}
	else
	{
		memberlist[size] = pmem;
		size++;
		cout << "����Ǿ����ϴ�." << endl;
	}
}


void Phonebook::printall()
{
	cout << "���� ���� ���� : " << size << "��" << endl;
	cout << "----------------------------------------" << endl;
	for (int i = 0; i < size; i++)
	{
		Member *pmem = memberlist[i];
		pmem->print();
	}
}


void Phonebook::select()
{
	//�˻����� ��
	char name[20];

	cout << "�˻��� �̸� : ";
	cin.getline(name, sizeof(name));//c�� gets�� ����

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
	//�˻����� ��
	char name[20];
	char newname[20];

	cout << "������ �̸� : ";
	cin.getline(name, sizeof(name));//c�� gets�� ����

	cout << "������ �̸� : ";
	cin.getline(newname, sizeof(newname));//c�� gets�� ����

	for (int i = 0; i < size; i++)
	{
		if (Member *pmem = memberlist[i])
		{
			pmem->update(name, newname);
		}
	}

	cout << "����Ǿ����ϴ�. : " << endl;
}

void Phonebook::Delete()
{
	//�˻����� ��
	char name[20];
	int info;

	cout << "������ �̸� : ";
	cin.getline(name, sizeof(name));//c�� gets�� ����

	for (int i = 0; i < size; i++)
	{
		if (Member *pmem = memberlist[i])
		{
			pmem->search(name);
			cout << "�����Ϸ��� ������ �½��ϱ�?" << endl;
			cout << "������ 1�� Ʋ���� 2���� �����ּ���." << endl;

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