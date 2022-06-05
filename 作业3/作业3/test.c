#include<stdio.h>
#include<assert.h>

//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d", *(a + 1), *(ptr - 1));//4,1
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));//1,6
//	return 0;
//}


//左旋字符串
//abcde左旋一个：bcdea
//abcde左旋两个：cdeab
// 方法一：暴力解
//void wap(char* p, int k)
//{
//	assert(p);//断言指针p不是空指针
//	char tmp = 0;
//	int i = 0;
//	int j = 0;
//	int len = strlen(p);
//	for (i = 0; i < k; i++)
//	{
//		tmp = *p;
//		for (j = 0; j < len-1; j++)
//		{
//			*(p + j) = *(p + j + 1);
//		}
//		*(p + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char a[] = "abcde";
//	wap(a, 4);
//	printf("%s\n", a);
//	return 0;
//}

//方法二：三步解
//reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	int tmp = 0;
//	while (left<right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void my_move(char* p,int k)
//{
//	assert(p);
//	int len = strlen(p);
//	assert(k <= len);
//	reverse(p, p + k - 1);
//	reverse(p + k, p + len - 1);
//	reverse(p, p + len - 1);
//}
//int main()
//{
//	char a[] = "abcde";
//	my_move(a,2);
//	printf("%s\n", a);
//	return 0;
//}



//判断一个字符串是否为另一个字符串旋转之后的字符串
//reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void my_move(char* p, int k)
//{
//	assert(p);
//	int len = strlen(p);
//	assert(k <= len);
//	reverse(p, p + k - 1);
//	reverse(p + k, p + len - 1);
//	reverse(p, p + len - 1);
//}
//int is_move(char* a1, char* a2)
//{
//	int len = strlen(a1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		my_move(a1, 1);
//		int ret = strcmp(a1, a2);
//		if (ret == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char a1[] = "abcde";
//	char a2[] = "abde";
//	int ret = is_move(a1, a2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}


