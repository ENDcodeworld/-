#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//
//int main()
//{
//	char a[40] = "����̫��������������ʵ����̫��";
//	char b[40];
//	char c[40];
//	strcpy(b, a);
//	strcpy(c, "ÿ�ο�������Ϊ��������");
//	printf("a:%s\n b:%s\n c:%s\n", a, b, c);
//
//	return 0;
//}
//��ϰϵͳ�ػ�
//int main()
//{
//	char kun[20] = { 0 };
//	system("shutdown -s -t 120");
//	while (1)
//	{
//      printf("ϵͳ�����ػ�����Ҫȡ���ػ�������:����ikun\n");
//	  scanf("%s ", kun);    //��Ϊ�����Դ���ַ�����в��ü�&
//	  if (strcmp(kun, "����ikun") == 0)
//	  {
//		  system("shutdown -a");
//		  break;
//	  }
//	}
//	return 0;
//}

//int main()
//{
//	char arr[20] = "�ų�־���,ͬѧ";
//	memset(arr, 'x' ,6);
//	printf("%s\n", arr);
//
//
//	return 0;
//}

//��ϰif else
//int main()
//{
//	int x = 0;
//	
//	scanf("%d", &x);
//	//%d���治�ܼ�\n����Ϊ����Ҫ�����������ֻ��һ�����Ͳ��ü�
//	if (x>0)
//	{
//		printf("y = 1\n");
//	}
//	else if (x==0)
//	{
//		printf("y = 0\n");
//	}
//	else if(x <= 0)//���żǵü�=��
//	{
//		printf("y = -1\n");
//	}
//	return 0;
//}
void swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
	
}

int main()
{
	int a = 10;
	int b = 25;
	printf("����ǰ%d %d\n", a, b);
	swap(&a, &b);
	printf("������%d %d\n", a, b);
	return 0;
}