
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
	//����2�����ĺ�
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//��������-ʹ�����뺯��
	//scanf("%d%d", &num1, &num2);//ȡ��ַ����&
	//sum=num1+num2;
	//printf("sum=%d\n",sum);
	//return 0;

	//const���εĳ�����
	//const int num = 10;
	//printf("%d/n",num );
	//num = 8;
	//printf("%d/n", num);
	// C2166.cpp
	 //const-������


        //ö�ٳ���
        //ö��--�о�
      
//enum Sex



//{
//	MALE,
//	FEMALE,
//	SECRET,

	//#define MAX 10
	//define����ı�ʶ������



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
	//char arr2[]= { 'a', 'b', 'c',0 };\0�ַ���������־
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	 //�����ڼ�����洢��ʱ�򣬴洢����2����
	//return 0;
	//ASCII��\0-0,
	//strlen-string length-�����ַ��ĳ���     �Ӷ����Դ�ӡ��printf("%d\n",strlen(arr1));




//}
/*���ܽ���Ƕ��
int main()
{//ת���ַ�
	printf("c:\test\32\test.c");ˮƽ�Ʊ��-\t
	printf("(are you ok \? \?)\n");
	printf("(are you ok \\t)\n");���Ҫǿ����ô��Ҫ��\�����Ų��ᱻת��
	printf("%d\n",strlen("c:\test\32\test.c"));


	
	return 0;
int main ()*/

//ѡ�����
/*int main()
{
	int input = 0;
	printf("������ϿƼ�ѧԺ\n");
	printf("��Ҫ�ú�ѧϰ��\?(1\0)>: ");
	scanf("%d", &input);
	if (input == 1)
	  printf("��offer\n");
	else
	  printf("�ؼ�����\n");
	return 0;

}*/

//ѭ�����whileѭ��
//int main()
//{
//	int line = 0;
//	printf("������ϿƼ�ѧԺ\n");
//
//	while (line < 10000)
//	{
//		printf("��һ�д���:%d\n", line);
//		line++;
//	}
//	if (line >= 10000)
//		printf("һ�ݺ�offer\n");
//	return 0;
//
//} 

//����Add(intx,inty)
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//�Զ��庯��  �⺯��

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
//		printf("%d\n", a);ȡģ
//		return 0;


//int main()
//{
//	//�ƣ�2���ƣ�λ������
//	//<<���Ʋ�����
//	//>>���Ʋ�����
//	int a = 1;
//	int b = a << 2;
//	//b = a + 1;
//	printf("%d/n", b);
//	printf("%d/n", a);
//}
//�����ƣ�1 1 1 1  =1*2^3

/*int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;
	//011
	//101
	printf("%d\n",c);
	return 0;
	//&��λ��   ��ͬ1��ͬΪ0��ͬΪ1
	//^��λ���    ����ͬ����
	//|��λ��   ��1 ��Ϊ1����Ϊ0

}*/


//=��ֵ ==�ж����
//c���������ж����0-��  ��0-��

//int main ()
//{
//
//	//int a = 10;
//	//sizeof����ı���/������ռ�ռ�Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//ע��int���ã���
//	return 0;
//}



//��֧����ѭ�����
//c������һ�Žṹ���ĳ����������
//1.˳��ṹ
//2.ѡ��ṹ
//3.ѭ���ṹ

//if���1
//else  if���2
//else���3

//int main()

	/*int age = 9;
	if (age < 18)
	{
		printf("δ����\n");
		printf("����̸����\n");
	}
	
	else
	{
		if (age > 18 && age <= 28)
			printf("����\n");

	else if (age >= 28 && age < 50)
	printf("׳��\n");
	else if (age >= 50 && age < 100)
	printf("����\n");
	else
	printf("�ϲ���\n");
	}*/
	
	//else 
	//	printf("����\n");
	///*	if ("age<18");
	//	printf(" δ����\n");*/


	/*int a = 0;
	int b = 2;
	if (a == 0)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");*/
	//else�������δƥ���ifƥ��    Ҳ����ֱ�Ӹ������ŴӶ�ֱ��ȷ��ƥ��
	/*int num = 4;
	if (num == 5)
	{return (1);  }

	
*/

//=��ֵ ==�ж����
	//��ҵ�г����е���������100����

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
	     printf("����1\n");
    if(2 == day)
	     printf("����2\n");
    if(3 == day)
	     printf("����3\n");
	if(4 == day)
	     printf("����4\n");
	if(5 == day)
		 printf("����5\n");
    if(6 == day)
	     printf("����6\n");
    if(7 == day)
	     printf("����7\n");
		 return 0;*/
	//��������̫�鷳���Ը���switch���
	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����1\n");
		break;
	case 2:
		printf("����2\n");
		break;
	case 3:
		printf("����3\n");
		break;
	case 4:
		printf("����4\n");
		break;
	case 5:
		printf("����5\n");
		break;
	case 6:
		printf("����6\n");
		break;
	case 7:
		printf("������\n");
		break;
	}*/
	//switch ��������䡢����break�����������������

	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			printf("������\n");
				break;
			case 6:
			case 7:
			printf("��Ϣ��\n");
				break;
				
	}*/
	
		   //case 7:
		   //printf("��Ϣ��\n");
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
		 //  printf("������\n");
			//   break;
		 //  case 6:
		  // default:
		//	 printf("�������\n");
		//	 break;
   //}


	
	
	
	
//	return 0;

//ѭ�����
//while ѭ�����
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
	//EOF - end  of file �ļ�������־*�����ļ���
	int ret = 0;
	int ch = 0;
	char password[20] = {0}; 
	printf("����������:>");
	scanf("%s", password);//�������룬�������password��
	//��������ʣ��һ��"\n"
	while ((ch = getchar()) != '\n')
	{
		;
	}

	printf("��ȷ��(Y/N):>");
	ret = getchar();//Y/N
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");

	}
	else
	{
		printf("����ȷ��\n");
	}
		
		return 0;
		//���뺯��password,scanf���뻺����123456\n

}











