#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"
#include "ArrayList.h"

int main(void)
{
	List list;
	NameCard* pNameCard;

	ListInit(&list);

	// 3명의 전화번호 저장
	pNameCard = MakeNameCard("lee", "010-0000-0000");
	LInsert(&list, pNameCard);

	pNameCard = MakeNameCard("an", "010-1111-1111");
	LInsert(&list, pNameCard);

	pNameCard = MakeNameCard("son", "010-2222-2222");
	LInsert(&list, pNameCard);

	// 특정 이름 탐색하여 출력
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

	// 특정 이름 탐색 전번 변경
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

	// 특정 이름 탐색 정보 삭제
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

	// 출력
	if (LFirst(&list, &pNameCard)) {

		ShowNameCardInfo(pNameCard);
		
		while (LNext(&list, &pNameCard))
		{
			ShowNameCardInfo(pNameCard);
		}
	}

	return 0;
}