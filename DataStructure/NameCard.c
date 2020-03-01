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

// NameCard ����ü ������ ���� ���
void ShowNameCardInfo(NameCard* pCard)
{
	printf("[name: %s, phone: %s]\n", pCard->name, pCard->phone);
}

// �̸��� ������ 0, �ٸ��� 0�� �ƴ� �� ��ȯ
int NameCompare(NameCard* pCard, char* name)
{
	return strcmp(pCard->name, name);
}

// ��ȭ��ȣ ������ ����
void ChangePhoneNum(NameCard* pCard, char* phone)
{
	//*(pCard->phone) = *phone;
	strcpy_s(pCard->phone, sizeof(pCard->phone), phone);
}