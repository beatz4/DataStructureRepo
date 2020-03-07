#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node* next;
} Node;

main(void)
{
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	head = (Node*)malloc(sizeof(Node));    // �߰� �� ����, ���� ��� �߰�
	tail = head;

	// �����͸� �Է� �޴� ���� //
	while (1) {
		printf("�ڿ��� �Է�: ");
		scanf_s("%d", &readData);

		if (readData < 1)
			break;

		// ����� �߰� ����
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;
		
		tail->next = newNode;
		tail = newNode;
	}

	printf("\n");

	// �Է� ���� �������� ��°��� //
	printf("�Է� ���� �������� ��ü ���! \n");
	if (head == NULL) {
		printf("����� �ڿ����� �������� �ʽ��ϴ�. \n");
	}
	else {
		cur = head;
		printf("%d ", cur->data);

		while (cur->next != NULL) {
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}

	printf("\n\n");

	// �޸��� ���� ���� //
	if (head == NULL) {
		return 0;
	}
	else {
		Node* delNode = head;
		Node* delNextNode = head->next;

		printf("%d��(��) �����մϴ�. \n", head->data);
		free(delNode);

		while (delNextNode != NULL) {
			delNode = delNextNode;
			delNextNode = delNode->next;

			printf("%d��(��) �����մϴ�. \n", delNode->data);
			free(delNode);
		}
	}


	return 0;
}

#if 0
int main(void)
{
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	// �����͸� �Է� �޴� ���� //
	while (1) {
		printf("�ڿ��� �Է�: ");
		scanf_s("%d", &readData);

		if (readData < 1)
			break;

		// ����� �߰� ����
		newNode = (Node*)malloc(sizeof(Node));
		if (newNode != NULL)
		{
			newNode->data = readData;
			newNode->next = NULL;
		}

		if (tail == NULL) {
			tail = newNode;
		}
		else {
			newNode->next = head;
		}

		head = newNode;
	}

	printf("\n");

	// �Է� ���� �������� ��°��� //
	printf("�Է� ���� �������� ��ü ���! \n");
	if (head == NULL) {
		printf("����� �ڿ����� �������� �ʽ��ϴ�. \n");
	}
	else {
		cur = head;
		printf("%d ", cur->data);

		while (cur->next != NULL) {
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}

	printf("\n\n");

	// �޸��� ���� ���� //
	if (head == NULL) {
		return 0;
	}
	else {
		Node* delNode = head;
		Node* delNextNode = head->next;

		printf("%d��(��) �����մϴ�. \n", head->data);
		free(delNode);

		while (delNextNode != NULL) {
			delNode = delNextNode;
			delNextNode = delNode->next;

			printf("%d��(��) �����մϴ�. \n", delNode->data);
			free(delNode);
		}
	}


	return 0;
}
#endif