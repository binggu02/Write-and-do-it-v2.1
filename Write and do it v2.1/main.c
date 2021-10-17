#include "func.h"

int num;
char inputString[128] = { 0 };


void main()
{
	
	prt_start();

	while (1)
	{
		split_w1();

		switch (num)
		{
		case 1:
			split_c1();
			break;

		case 2:
			split_c2();
			break;

		default:
			printf("죄송합니다 다시 선택해주세요!\n\n");
			continue;
		}

		break;
	}

	// ( E1 ) : 입력받지 않았을 때 상황 고려해야함
	// 이 알고리즘대로라면 아무것도 입력받지 않았을 때 에러가 발생할 수 있음
	if (num == EOF)
		prt_motivation();

	prt_end();
}