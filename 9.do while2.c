#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int goal = 1;
//	int sum = 0;
//	for ( a = 1; a <=3; a++)
//	{
//		goal *= a;
//		sum += goal;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include<string.h>
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "����̫��";
//	char arr2[] = "########";
//	int left = 0;�±�
//	int right = strlen����(arr1) - 1;
//	while(left<= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char answer[10] = { 0 };
//
//	for (i = 1;i <= 3; i++)
//	{
//		printf("�������Ϸ�����:>");
//		scanf("%s", answer);
//
//		if( strcmp (answer , "����֮��") == 0)
//		{
//			printf("ʵ������\n");
//			break;
//			i++;
//		}
//		else
//		{
//			printf("�𰸴����������룡\n");
//		}
//	}
//	if (i ==  4)
//	{
//		printf("�˳�����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char music[10] = { 0 };
//	
//	for ( i = 1; i <= 3; i++)
//	{
//		printf("���������:>");
//		scanf("%s", music);
//		if ( strcmp(music, "������Ź�") ==0)
//		{
//			printf("��־��Ŀ\n");
//			break;
//			i++;
//		}
//		else
//		{
//			printf("������\n");
//		}
//		if (i == 4)
//		{
//			printf("�˳������̨\n");
//		}
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char game[100] = { 0 };
//	for ( i = 1; i <= 100; i++)
//	{
//		printf("������:>");
//		scanf("%s", game);
//		if (strcmp(game ,"26") == 0)
//		{
//			printf("�ص���ȷ\n");
//		}
//		else
//		{
//			printf("��´���");
//		}
//		if (i != 0) 
//		{
//			printf("������,������\n");
//		}
//	}
//	 
//	return 0;
//}
#include<stdlib.h>
#include<time.h>


void menu()
{
	printf("1.��ʼ����Ϸ*****\n");
	printf("2.������Ϸ*******\n");
	printf("3.ѡ��***********\n");
	printf("4.�˳���Ϸ*******\n");

}
void game()
{
	int guess = 0;
	int ret = rand() %100+1;
	printf("%d\n", ret);
	while (1)
	{
		printf("�²�����:>\n");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("��С��\n");
		 }
		else if (ret < guess)
		{
			printf("�´���\n");

		}
		else if(ret == guess)
		{
			printf("�¶���\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int s = 0;
	do
	{
		menu();
		printf("ѡ����Ϸ��Ŀ:\n");
		scanf("%d", &s);
		switch (s)
		{
		case 1:game();
			break;
		case 2:printf("������Ϸ\n");
			break;
		case 3:printf("ѡ��\n");
			break;
		case 4:printf("�˳���Ϸ\n");
		default:
			printf("ѡ�����\n");
			break;
		}


	} while (s);


	return 0;

}