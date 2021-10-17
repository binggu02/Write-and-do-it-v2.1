#include "func.h"

extern int num;
extern char inputString[128];

void prt_start()
{
	//printf(" 안녕하세요. 오늘 기분은 어떠신가요?\n"); 1
	prt_sentences(1);
}

void split_w1()
{
	printf(" 1. 좋다\n");
	printf(" 2. 별로다\n");
	printf(" 입력 : ");
	scanf("%d", &num);
	printf("\n");

}

void split_c1()
{
	//printf(" 좋습니다. 오늘의 계획은 세우셨나요?\n"); 2
	prt_sentences(11);
	printf(" 1. 네\n");
	printf(" 2. 아니요\n");
	printf(" 입력 : ");
	scanf("%d", &num);
	printf("\n");

}

void split_c2()
{
	//printf(" 어떤 일 때문에 기분이 안 좋으신가요?(데이터는 저장되지 않습니다)\n"); 3
	prt_sentences(21);
	printf(" 입력 : ");
	scanf("%s", &inputString);
	getchar();
	printf("\n");
	num = EOF;
}

void prt_motivation()
{
	printf(" 힘드셨겠군요. 이해합니다.\n"); 
	Sleep(2000);
	printf(" 그런 상황이라면 많이 힘들었을 겁니다.\n\n");
	Sleep(2000);
	printf(" 그렇지만 이번일은 이제 그만 생각하셨으면 좋겠습니다.\n\n");
	Sleep(2000);
	printf(" 안좋은 생각을 계속 하다보면 꼬리에 꼬리가 물려 더 안좋아 질겁니다.\n");
	Sleep(2000);
	printf(" 만약 계속해서 안좋은 생각이 떠오른다면 이렇게 해보세요.\n\n");
	Sleep(2000);
	printf(" 지금 있는곳보다 넓은 곳으로 이동하세요.\n");
	Sleep(2000);
	printf(" 산책을 하거나 목표를 만들어 보세요.\n\n");
	Sleep(2000);
	printf(" 지금 당장 우리에게 필요한 것은 목표를 세우고 달성함으로서 에너지를 얻고 앞으로 나아가는 것입니다.\n\n");
	Sleep(2000);
	printf(" 작은것부터 천천히 두려워하지 말고 더 나은 삶을 살수있도록 노력합시다.\n\n");



}

void prt_end()
{
	if (num == 1)
	{
		printf(" 멋지군요! 어떤 계획을 세우셨나요?\n");
		printf(" 문자열을 입력해주세요 : ");
		scanf("%s", &inputString);

	}
	else
	{
		printf(" 작은것부터 시작해보죠. 몇시에 무엇을 할까요?\n");
		printf(" 문자열을 입력해주세요 : ");
		scanf("%s", &inputString);

	}

	printf("\n");
	printf(" 수고하셨습니다.\n\n");
	printf(" 멋진 계획 꼭 이루시길 바랍니다.\n");
	printf(" 오늘의 계획 : %s\n\n", inputString);


	printf(" 프로그램 종료\n");
}


void rand_prt(int gubun)
{



}

int creat_rand()
{
	srand(time(NULL));

}

void prt_sentences(int gubun)
{
	int case_num = 0;
	// gubun의 값을 1, 11이나 21 이런식으로 정해야 함.
	// case_num = rand() % 10 + 1 : 1 ~ 10까지의 숫자 출력
	// case_num = rand() % 10 + 11 : 1 ~ 10까지의 숫자 출력 후 1이면 12출력, 5면 16출력
	// 0 ~ 9까지의 숫자 출력 : rand() % 10			// 0 ~ 9
	// 1 ~ 10까지의 숫자 출력 : rand() % 10 + 1		// 1 ~ 10 제한 11이상이면 나가기
	// rand() % 10 + 11 : 11 ~ 20까지의 숫자 출력		// 11 ~ 20
	// rnad() % 10 + 21 : 21 ~ 30까지의 숫자 출력		// 21 ~ 30

	// 인사말
	// set up 
	// 1 ~ 10 -> 인사말 / 11은 반복 해제 숫자 : set up number = 1
	// 21 ~ 30 -> 계획 물어보기 /				: set up number = 11
	// 41 ~ 51 -> 고민 물어보기 /				: set up number = 21
	// 
	while (1)
	{
		creat_rand();
		case_num = rand() % 10 + gubun;


		// 인사말
		switch (case_num)
		{
		case 1:
			printf(" 안녕하세요. 오늘 기분은 어떠신가요?\n");
			break;
		case 2:
			printf(" 좋은 하루입니다. 오늘의 기분은 어떠신가요?\n");
			break;
		case 3:
			printf(" 오늘도 좋은 하루 보내세요. 오늘의 기분은 어떠신가요?\n");
			break;
		case 4:
			printf(" 좋은 하루 보내지 마세요. 최고의 하루 보내세요. 오늘의 기분은 어떠신가요?\n");
			break;
		default:
			if (case_num > 11)
				break;
			else
				continue;
		}

		if (case_num < 11) // while 문 빠져나오기
			break;


		// 계획 물어보기
		switch (case_num)
		{
		case 11:
			printf(" 좋습니다. 오늘의 계획은 세우셨나요?\n");
			break;
		case 12:
			printf(" 오늘의 멋진 계획이 있으신가요?\n");
			break;
		case 13:
			printf(" 오늘 어떤 일을 할지 정하셨나요?\n");
			break;
		default:
			if (case_num > 21)
				break;
			else
				continue;
		}

		if (case_num < 21)
			break;


		// 고민 물어보기
		switch (case_num)
		{
		case 21:
			printf(" 어떤 일 때문에 기분이 안 좋으신가요?(데이터는 저장되지 않습니다)\n");
			break;
		case 22:
			printf(" 고민이 있으신가요?(데이터는 저장되지 않습니다.\n");
			break;
		case 23:
			printf(" 힘든 일이 있다면 적어주세요.(데이터는 저장되지 않습니다)\n");
			break;
		default:
			if (case_num > 31)
				break;
			else
				continue;
		}

		if (case_num < 31)
			break;


		// 
		switch (case_num)
		{
		case 31:
			printf(" 어떤 일 때문에 기분이 안 좋으신가요?(데이터는 저장되지 않습니다)\n");
			break;
		case 32:
			printf(" 고민이 있으신가요?(데이터는 저장되지 않습니다.\n");
			break;
		case 33:
			printf(" 힘든 일이 있다면 적어주세요.(데이터는 저장되지 않습니다)\n");
			break;
		default:
			if (case_num > 41)
				break;
			else
				continue;
		}

		if (case_num < 41)
			break;




	}

	

}