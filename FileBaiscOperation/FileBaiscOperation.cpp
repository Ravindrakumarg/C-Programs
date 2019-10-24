// FileBaiscOperation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
#include "conio.h"

typedef unsigned int uint32_t;

#define FILE_PATH "c:\\test.dat"
using namespace std;

struct employee
{
	char		emp_name[20];
	uint32_t	emp_id;
	long		salary;
};
typedef struct employee EMP;

int _tmain(int argc, _TCHAR* argv[])
{
	EMP emp;
	FILE *fp;

	try
	{
		if (fopen_s(&fp, FILE_PATH, "wb"))
		{
		}
	}
	catch (exception &ex)
	{
		cerr << "Exception caught:" << endl;
	}

	char ch = 'y';
	while(ch == 'y')
	{
		printf ( "\nEnter name, age and basic salary: " ) ;
		scanf_s ( "%s %d %d", emp.emp_name, &emp.emp_id, &emp.salary);
		fwrite ( &emp, sizeof ( emp ), 1, fp);
		printf ( "Add another record (Y/N) ");

		fflush ( stdin );
		ch = _getche( );
	}

	fclose(fp);
	if (fopen_s(&fp, FILE_PATH, "rb"))
	{
	}
	while(1==fread(&emp, sizeof(emp), 1, fp))
	{
		printf ( "%s %d %d", emp.emp_name, emp.emp_id, emp.salary ) ;
	}

	fclose(fp);
	return 0;
}