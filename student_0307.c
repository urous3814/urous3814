/*#include <stdio.h>
int main(Void)
{
	char answer, answer2;
	printf("친구에게 전화거는 알고리즘 \n");
	printf("전화기는 있니?(Y/N): ");
	answer = getchar();
	getchar();  //엔터키 처리
	if (answer == 'y' || answer == 'Y')
	{
		printf("전화번호는 아니?(Y/N): ");
		answer2 = getchar();
		getchar();  //엔터키 처리

		if (answer2 == 'y' || answer2 == 'Y')
		{
			printf("친구에게 전화를 건다 \n");
		}
		else
		{
			printf("전화번호를 물어본다. \n");
			printf("친구에게 전화를 건다 \n");
		}
	}
	else
	{
		printf("전화기를 빌린다 \n");
		printf("전화번호는 아니?(Y/N): ");
		answer2 = getchar();
		getchar();  //엔터키 처리

		if (answer2 == 'y' || answer2 == 'Y')
		{
			printf("친구에게 전화를 건다 \n");
		}
		else
		{
			printf("전화번호를 물어본다. \n");
			printf("친구에게 전화를 건다 \n");
		}
	}
	return 0;
} */


#include <stdio.h>
#include<stdlib.h>
int main(Void)
{
	int money = 2000;
	char answer;
	printf("연어 아보카도 덮밥을 먹는 알고리즘 \n");
	printf("현재 돈은 2,000원 이다. 돈 5,000 원을 빌린다?(Y/N): ");
	answer = getchar();
	getchar();  //엔터키 처리
	if (answer == 'y' || answer == 'Y')
	{
		money += 5000;
		while (1)
		{

			printf("알바를 30분 합니까? 돈을 1,000원 얻는다.(Y/N): ");
			answer = getchar();
			getchar();  //엔터키 처리
			if (answer == 'y' || answer == 'Y')
			{
				printf("알바를 30분 한다. 돈을 1,000원 얻는다. \n"); +
				money += 1000;
			}
			else if (money >= 10000)
			{
				break;

			}
			else
			{
				printf("돈이 부족합니다. ");
			}
		}
		printf("돈 10,000원이 모여 연어 아보가도 덥밮을 먹는다 \n");
	}
	else
	{
		while (1)
		{

			printf("알바를 30분 합니까? 돈을 1,000원 얻는다.(Y/N): ");
			answer = getchar();
			getchar();  //엔터키 처리
			if (answer == 'y' || answer == 'Y')
			{
				printf("알바를 30분 한다. 돈을 1,000원 얻는다. \n");
				money += 1000;
			}
			else if (money >= 10000)
			{
				break;

			}
			else
			{
				printf("돈이 부족합니다. ");
			}
		}
		printf("돈 10,000원이 모여 연어 아보가도 덥밮을 먹는다 \n");
	}
	return 0;
}
