#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"

NameCard* MakeNameCard(char* name, char* phone)
{
	NameCard* pNameCard = (NameCard*)malloc(sizeof(NameCard));

	if (name != NULL && phone != NULL && pNameCard != NULL)
	{
		strcpy_s(pNameCard->name, sizeof(pNameCard->name), name);
		strcpy_s(pNameCard->phone, sizeof(pNameCard->phone), phone);
	}

	return pNameCard;
}

// NameCard 구조체 변수의 정보 출력
void ShowNameCardInfo(NameCard* pCard)
{
	printf("[name: %s, phone: %s]\n", pCard->name, pCard->phone);
}

// 이름이 같으면 0, 다르면 0이 아닌 값 반환
int NameCompare(NameCard* pCard, char* name)
{
	return strcmp(pCard->name, name);
}

// 전화번호 정보를 변경
void ChangePhoneNum(NameCard* pCard, char* phone)
{
	//*(pCard->phone) = *phone;
	strcpy_s(pCard->phone, sizeof(pCard->phone), phone);
}