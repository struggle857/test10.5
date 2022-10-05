
#include<stdio.h>

 
//int main()
//{
	//printf("hello\n");
	//printf("%d\n", sizeof(char));//1
	//printf("%d\n", sizeof(long));

	//return 0;
//}
//int main()
//{
	//计算2个数的和
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//输入数据-使用输入函数
	//scanf("%d%d", &num1, &num2);//取地址符号&
	//sum=num1+num2;
	//printf("sum=%d\n",sum);
	//return 0;

	//const修饰的常变量
	//const int num = 10;
	//printf("%d/n",num );
	//num = 8;
	//printf("%d/n", num);
	// C2166.cpp
	 //const-常属性


        //枚举常量
        //枚举--列举
      
//enum Sex



//{
//	MALE,
//	FEMALE,
//	SECRET,

	//#define MAX 10
	//define定义的标识符常量



//};
//int main()
//{
//	printf("%d/n", MALE);
//	printf("%d/n", FEMALE);
//	printf("%d/n", SECRET);
//	return 0;
//
//}
//int main()
//{
	//char arr1[] = "abc";
	//char arr2[]= { 'a', 'b', 'c',0 };\0字符串结束标志
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	 //数字在计算机存储的时候，存储的是2进制
	//return 0;
	//ASCII表、\0-0,
	//strlen-string length-计算字符的长度     从而可以打印出printf("%d\n",strlen(arr1));




//}
/*不能接受嵌套
int main()
{//转义字符
	printf("c:\test\32\test.c");水平制表符-\t
	printf("(are you ok \? \?)\n");
	printf("(are you ok \\t)\n");如果要强打那么就要加\这样才不会被转义
	printf("%d\n",strlen("c:\test\32\test.c"));


	
	return 0;
int main ()*/

//选择语句
/*int main()
{
	int input = 0;
	printf("加入赣南科技学院\n");
	printf("你要好好学习吗\?(1\0)>: ");
	scanf("%d", &input);
	if (input == 1)
	  printf("好offer\n");
	else
	  printf("回家种田\n");
	return 0;

}*/

//循环语句while循环
//int main()
//{
//	int line = 0;
//	printf("加入赣南科技学院\n");
//
//	while (line < 10000)
//	{
//		printf("敲一行代码:%d\n", line);
//		line++;
//	}
//	if (line >= 10000)
//		printf("一份好offer\n");
//	return 0;
//
//} 

//函数Add(intx,inty)
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//自定义函数  库函数

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*printf("%d\n", arr[5]);*/
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	    int a = 5 % 2;
//		printf("%d\n", a);取模
//		return 0;


//int main()
//{
//	//移（2进制）位操作符
//	//<<左移操作符
//	//>>右移操作符
//	int a = 1;
//	int b = a << 2;
//	//b = a + 1;
//	printf("%d/n", b);
//	printf("%d/n", a);
//}
//二进制：1 1 1 1  =1*2^3

/*int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;
	//011
	//101
	printf("%d\n",c);
	return 0;
	//&按位与   相同1不同为0相同为1
	//^按位异或    有相同就行
	//|按位或   有1 则为1否则为0

}*/


//=赋值 ==判断相等
//c语言我们判断真假0-假  非0-真

//int main ()
//{
//
//	//int a = 10;
//	//sizeof计算的变量/类型所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//注意int得用（）
//	return 0;
//}



//分支语句和循环语句
//c语言是一门结构化的程序设计语言
//1.顺序结构
//2.选择结构
//3.循环结构

//if语句1
//else  if语句2
//else语句3

//int main()

	/*int age = 9;
	if (age < 18)
	{
		printf("未成年\n");
		printf("不能谈恋爱\n");
	}
	
	else
	{
		if (age > 18 && age <= 28)
			printf("青年\n");

	else if (age >= 28 && age < 50)
	printf("壮年\n");
	else if (age >= 50 && age < 100)
	printf("老年\n");
	else
	printf("老不死\n");
	}*/
	
	//else 
	//	printf("成年\n");
	///*	if ("age<18");
	//	printf(" 未成年\n");*/


	/*int a = 0;
	int b = 2;
	if (a == 0)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");*/
	//else与最近的未匹配的if匹配    也可以直接给大括号从而直接确定匹配
	/*int num = 4;
	if (num == 5)
	{return (1);  }

	
*/

//=赋值 ==判断相等
	//作业列出所有的奇数且在100以下

	/*int i = 1;
	while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d", i);
		i++;
	}*/
	
	
	/*int i = 1;
	while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d", i);
		i++;
	}
	return 0;*/



//int main()
//{
     /*int day =0;
	 scanf("%d",&day);
	 if(1 == day)
	     printf("星期1\n");
    if(2 == day)
	     printf("星期2\n");
    if(3 == day)
	     printf("星期3\n");
	if(4 == day)
	     printf("星期4\n");
	if(5 == day)
		 printf("星期5\n");
    if(6 == day)
	     printf("星期6\n");
    if(7 == day)
	     printf("星期7\n");
		 return 0;*/
	//由于这样太麻烦所以改用switch语句
	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期1\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	}*/
	//switch 无整形语句、搭配break才是完美的整形语句

	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			printf("工作日\n");
				break;
			case 6:
			case 7:
			printf("休息日\n");
				break;
				
	}*/
	
		   //case 7:
		   //printf("休息日\n");
			 //  break;int day = 0;
	//int m = 1;
   //scanf("%d", &day);
   //switch (day)
   //{
   //case 1:
	 //  if (m == 1)
		//   printf("hehe\n");
		//   case 2:
		//   case 3:
		 //  case 4:
		 //  case 5:
		 //  printf("工作日\n");
			//   break;
		 //  case 6:
		  // default:
		//	 printf("输入错误\n");
		//	 break;
   //}


	
	
	
	
//	return 0;

//循环语句
//while 循环语句
	/*int i = 1;

	while(i<=10)
	{
		if (i == 5)
			break;
		printf("%d", i);
		i++;
	}
	return 0;*/
int main ()
{
	/*int ch = getchar();

	putchar(ch);
	printf("%c\n", ch);
	return 0;*/
	/*int ch = 0;
	while ((ch=getchar() !=EOF)
   {
		putchar(ch);

	}



	return 0;*/ 
	//EOF - end  of file 文件结束标志*（空文件）
	int ret = 0;
	int ch = 0;
	char password[20] = {0}; 
	printf("请输入密码:>");
	scanf("%s", password);//输入密码，并存放在password中
	//缓冲区还剩余一个"\n"
	while ((ch = getchar()) != '\n')
	{
		;
	}

	printf("请确认(Y/N):>");
	ret = getchar();//Y/N
	if (ret == 'Y')
	{
		printf("确认成功\n");

	}
	else
	{
		printf("放弃确认\n");
	}
		
		return 0;
		//输入函数password,scanf输入缓冲区123456\n

}











