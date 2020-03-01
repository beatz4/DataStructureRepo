#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"
#include "ArrayList.h"

int main(void)
{
	List list;
	NameCard* pNameCard;

	ListInit(&list);

	// 3���� ��ȭ��ȣ ����
	pNameCard = MakeNameCard("lee", "010-0000-0000");
	LInsert(&list, pNameCard);

	pNameCard = MakeNameCard("an", "010-1111-1111");
	LInsert(&list, pNameCard);

	pNameCard = MakeNameCard("son", "010-2222-2222");
	LInsert(&list, pNameCard);

	// Ư�� �̸� Ž���Ͽ� ���
	char* name = "son";

	if (LFirst(&list, &pNameCard)) {
		
		int ret = NameCompare(pNameCard, name);

		if (ret == 0) {
			ShowNameCardInfo(pNameCard);
		}
		else 
		{
			while (LNext(&list, &pNameCard))
			{
				if (NameCompare(pNameCard, name) == 0) {
					ShowNameCardInfo(pNameCard);
					break;
				}
			}
		}
	}

	printf("\n");

	// Ư�� �̸� Ž�� ���� ����
	name = "an"; 
	if (LFirst(&list, &pNameCard)) {

		int ret = NameCompare(pNameCard, name);

		if (ret == 0) {
			ChangePhoneNum(pNameCard, "010-9999-9999");
		}
		else
		{
			while (LNext(&list, &pNameCard))
			{
				if (NameCompare(pNameCard, name) == 0) {
					ChangePhoneNum(pNameCard, "010-9999-9999");
					break;
				}
			}
		}
	}

	// Ư�� �̸� Ž�� ���� ����
	name = "lee";
	if (LFirst(&list, &pNameCard)) {

		int ret = NameCompare(pNameCard, name);

		if (ret == 0) {
			pNameCard = LRemove(&list);
			free(pNameCard);
		}
		else
		{
			while (LNext(&list, &pNameCard))
			{
				if (NameCompare(pNameCard, name) == 0) {
					pNameCard = LRemove(&list);
					free(pNameCard);
					break;
				}
			}
		}
	}

	// ���
	if (LFirst(&list, &pNameCard)) {

		ShowNameCardInfo(pNameCard);
		
		while (LNext(&list, &pNameCard))
		{
			ShowNameCardInfo(pNameCard);
		}
	}

	return 0;
}