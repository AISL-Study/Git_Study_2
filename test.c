#include <stdio.h>

int main(void)
{
	char  op;
	int x, y, result;

	do
	{
		printf("***************** \n");
		printf("A----Add \n");
		printf("S----Subtract \n");
		printf("M----Multiply \n");
		printf("D----Divide \n");
		printf("Q----Quit \n");
		printf("***************** \n");
		printf("연산을 선택하시오\n");
		scanf_s(" %c", &op);
		if (op == 'Q')
			break;
		//if((op != 'A') && (op != 'S') && (op != 'M')&&(op!='D')&&(op!='Q'))
			
		switch (op)
		{
		case 'A':
			printf("두수를 공백으로 분리하여 입력하시오:");
			scanf_s("%d %d", &x, &y);
			result = x + y;
			printf("%d\n", result);
			break;
		case 'S':
			printf("두수를 공백으로 분리하여 입력하시오:");
			scanf_s("%d %d", &x, &y);
			result = x - y;
			printf("%d\n", result);
			break;
		case 'M':
			printf("두수를 공백으로 분리하여 입력하시오:");
			scanf_s("%d %d", &x, &y);
			result = x * y;
			printf("%d\n", result);
			break;
		case 'D':
			printf("두수를 공백으로 분리하여 입력하시오:");
			scanf_s("%d %d", &x, &y);
			result = x / y;
			printf("%d\n", result);
			break;
			
		case 'Q':
			
			break;
		default:
			printf("연연연산을 선택하시오\n");
			break;
		}
				
	} while (1);
;

	return 0;
}