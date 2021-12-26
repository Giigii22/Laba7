#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include "Header.h"


void main(void)
{
	_Bool close = true;
	while (close)
	{
		char str1[] = "visual studio";
		char substr[] = "al";
		char str3[] = "hrhrhr";

		unsigned int len1 = 0, destlen = 0, index = 0;
		_Bool err;
		char* point, dest[100];

		printf("1. Task 1\n");
		printf("2. Task 2\n");
		printf("3. Task 3\n");
		printf("4. Task 4\n");
		printf("5. Task 5\n");
		printf("6. Task 6\n");
		printf("7. Exit \n");
		switch (getch())
		{
		case '1':
			system("cls");
			len1 = strlen(str1);
			printf("String - %s. String length - %d \n", str1, len1);
			break;
		case '2':
			system("cls");
			point = find(str1, substr);
			point == 0 ? printf("String - %s. Substring - %s. \nThe substring is not included in the string \n", str1, substr) : printf("String - %s. Substring - %s. \nAddress of entry - %p \n", str1, substr, point);
			break;
		case '3':
			system("cls");
			printf("String - %s. Substring - %s \n", str1, substr);
			delete(str1, substr);
			printf("String after substring deletion - %s \n", str1);
			break;
		case '4':
			system("cls");
			destlen = strlen(dest);
			strcpy(dest, destlen, str1);
			printf("String - %s. After copying - %s \n", str1, dest);
			break;
		case '5':
			system("cls");
			destlen = strlen(dest);
			strcat(dest, destlen, str1, str3);
			printf("String - %s. Second string - %s. \nConcatenation result - %s \n", str1, str3, dest);
			break;
		case '6':
			system("cls");
			destlen = strlen(dest);
			printf("Enter the index to insert ");
			scanf_s("%d", &index);
			err = insert(str1, str3, index, dest, destlen);
			err ? printf("String - %s. Second string - %s. \nInsertion result - %s \n", str1, str3, dest) : printf("Ошибка \n");
			break;
		case '7':
			close = false;
			break;
		}
	}
}
