#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//1.4 strcmp��ʹ�� --- int strcmp ( const char * str1, const char * str2 );

//int main()
//{
//	char* p1 = "abcdefg";
//	char* p2 = "sqwer";
//	int ret = strcmp(p1, p2);
//
//	printf("%d\n", ret);	//-1
//	return 0;
//}
//��һ���ַ������ڵڶ����ַ������򷵻ش���0������
//��һ���ַ������ڵڶ����ַ������򷵻�0
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
//linux gccʵ��
//[centos@centos ~]$ cat text.c
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char* str1 = "abcd";
//	char* str2 = "quit";
//	int ret = strcmp(str1, str2);
//	printf("%d\n"ret);
//	return 0;
//}
//
//[centos@centos ~]$ vim text.c
//[centos@centos ~]$ gcc text.c
//[centos@centos ~]$ ls
//1.txt  Desktop    Downloads  Pictures  Templates  text.c  yum
//a.out  Documents  Music      Public    text       Videos  yum.conf
//[centos@centos ~]$ . / a.out
//- 16


////�Լ�ʵ��
//int Mystrcmp(const char* str1,const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)	return 1;
//	else	return -1;
//}
//
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abcd";
//	// \0 < d
//	int ret = Mystrcmp(p1, p2);
//
//	printf("%d\n", ret);	//-1
//	return 0;
//}


//1.5 strncpy��ʹ�� --- char * strncpy ( char * destination, const char * source, size_t num );
//int main()
//{
//	char arr1[5] = "hel";
//	char arr2[] = "abcdefg";
//	strncpy(arr1, arr2, 4);
//	//����ֹͣ������\0
//	printf("%s\n", arr1);//abcd
//	
//	return 0;
//}
//�Լ�ʵ��
//char* Mystrncpy(char* str1,const char* str2, size_t num)
//{
//	assert(str1 && str2);
//	char* tmp = str1;
//	while (num && (*str2!='\0'))
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//		num--;
//	}
//	if (num)
//	{
//		while (num)
//		{
//			*str1 = '\0';
//			str1++;
//			num--;
//		}
//	}
//	return tmp;
//}
//int main()
//{
//	char arr1[6] = "hello";
//	char arr2[] = "ab";
//	Mystrncpy(arr1, arr2, 5);
//	//����ֹͣ������\0
//	printf("%s\n", arr1);//abcd
//	
//	return 0;
//}

//1.6 strncat��ʹ�� --- char * strncat ( char * destination, const char * source, size_t num );
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 7);
//	printf("%s\n", arr1);//helloworld
//	return 0;
//}
