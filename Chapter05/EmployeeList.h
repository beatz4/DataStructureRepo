#pragma once

#ifndef __C_EMPLOYEE_H__
#define __C_EMPLOYEE_H__

#define TRUE	1;
#define FALSE	0;

typedef struct _employeeInfo {
	int num;
	char* name;
} EmployeeInfo;

// 사원 번호, 이름 정보 입력
void SetEmployeeInfo(EmployeeInfo* pinfo, int num, char* name);

// 사원 정보 출력
void ShowEmployeeInfo(EmployeeInfo* pinfo);

// 두 Point 변수의 비교
//int PointComp(EmployeeInfo* pos1, EmployeeInfo* pos2);


#endif