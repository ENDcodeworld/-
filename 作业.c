#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int reverse_string(char* str)
//{
//	char* tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}
//int Digitsum(int n)
//{
//	if (n > 9)
//	{
//		return Digitsum(n / 10) + n % 10;
//
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 1234;
//	int sum = Digitsum(num);
//	printf("%d\n", sum);
//	return 0;
//}
//��취��abcdef��ת��fedcba
int my_strlen(char* str)//����ַ��ĳ���
{
	int count = 0;//��һ������ȥ������ĳ���
	while (*str != '\0')//��Ϊ�ַ����Ǵ����ң����=='\0'��
		//Ҳ����ζ��������ȵĴ�С����Ϊֹ��
	{
		count++;
		str++;
	}
	return count;
}
//��ϰ
void reserve_string(char* str)
{
	char tmp = *str;//��abcdef��a�ó����ŵ�tmp�ϣ�
	int len = my_strlen(str);//��len��ʾ�����ַ��ĳ��ȣ�
	*str = *(str + len - 1);//Ȼ���f�ŵ�a��ȥ��
	*(str + len -1) = '\0';//Ȼ���ȱ��ŷ�a���Ȱ�f֮ǰ��λ����\0�������ȣ�
	if (my_strlen(str+1) >= 2)//Ȼ���õݹ������bcde������������
	{//ֻҪ�Ǵ��ڻ�������������Ϳ�ʼ�ݹ飬��Ϊֻ��������������²�������ݹ飻
		reserve_string(str+1);

	}
	*(str + len - 1) = tmp;//����ٰ�a����ȥ����ɴ�abcdef��fedcba�ı仯��


}
int main()
{
	char arr[] = "abcdef";
	reserve_string(arr);//��������
	printf("%s\n", arr);
	return 0;
}