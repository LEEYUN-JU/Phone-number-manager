#include <iostream>
using namespace std;
#include <conio.h>
#include "Member.h"
#include "Phonebook.h"

void run(Phonebook *pb)
{
	while (true)
	{
		system("cls");
		cout << "================================================" << endl;
		cout << "[1] 저장 [2] 전체출력 [3] 검색 [4]수정 [5] 삭제" << endl;
		cout << "[6] 종료" << endl;
		cout << "================================================" << endl;

		switch (_getch())	//conio.h
		{
		case '1': pb->insert();	break;
		case '2': pb->printall();	break;
		case '3': pb->select();	break;
		case '4': pb->update();	break;
		case '5': pb->Delete();	break;
		case '6':	return;
		}
		system("pause");
	}
}

int main()
{
	Phonebook pb;
	
	run(&pb);

	return 0;
}