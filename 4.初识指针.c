#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 5;
//	printf("%p\n", &a);
//	int* b = &a;
//
//
//	return 0;
//}
//int main()
//{
//	long long a = 23ll;
//	long long* b;
//	b= &a;
//	printf("%lld\n", &a);
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* b = &a;
//	*b = 30;//*�ǽ����ò���   | *pa����ͨ��pa��ߵĵ�ַ���ҵ�a
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long *));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//
//	return 0;
//}

struct stu
{
	char name[20];
	int age;
	double score;

};

int main()
{
	struct stu a = { "�ų�־",21,65.5 };
	printf("1:%s %d %lf\n", a.name, a.age, a.score);
	return 0;
}