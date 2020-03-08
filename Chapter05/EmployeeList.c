#include <stdio.h>
#include <stdlib.h>
#include "EmployeeList.h"

void SetEmployeeInfo(EmployeeInfo* pinfo, int num, char* name)
{
	pinfo->num = num;
	pinfo->name = name;
}

void ShowEmployeeInfo(EmployeeInfo* pinfo)
{
	printf("%d - %s \n", pinfo->num, pinfo->name);
}