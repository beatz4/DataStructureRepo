#pragma once

#ifndef __C_EMPLOYEE_H__
#define __C_EMPLOYEE_H__

#define TRUE	1;
#define FALSE	0;

typedef struct _employeeInfo {
	int num;
	char* name;
} EmployeeInfo;

// ��� ��ȣ, �̸� ���� �Է�
void SetEmployeeInfo(EmployeeInfo* pinfo, int num, char* name);

// ��� ���� ���
void ShowEmployeeInfo(EmployeeInfo* pinfo);

// �� Point ������ ��
//int PointComp(EmployeeInfo* pos1, EmployeeInfo* pos2);


#endif