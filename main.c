#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <windows.h>
#include <string.h>

#define LEN sizeof(struct student)
void start();
void window();  //构建窗口
struct student *creat();  //创建链表
void del(struct student *head,int num); //从链表中删除某学号
void insert(struct student *head,struct student *p);
void print(struct student *head);//打印链表

struct student      //定义结构体
{
	int num;
	char name[10];
	float score;
	struct student *next;
};

int n;

int main()
{
	start();
	window();
	struct student *stu,p;

	stu = creat();
	print( stu );
	printf("\n\n");

	char o;
	printf("你是否希望删除谁的成绩( y or n )\n");
	fflush(stdin);
	scanf("%c",&o);
	if(o=='y')      //暂不考虑输入不是y也不是n的情况
	{
		int q;
		printf("你想删除谁的成绩（学号）:");
		scanf("%d",&q);
		del( stu ,q);
		print( stu );
		printf("\n你是否希望添加谁的成绩( y or n )\n");
		fflush(stdin);
		scanf("%c",&o);
		if(o=='y')
		{
			printf("\n你想插入学生的学号为：");
			scanf("%d",&p.num);
			printf("你想插入学生的姓名是：");
			scanf("%s",&p.name);
			printf("你想插入学生的成绩是:");
			scanf("%f",&p.score);
			insert( stu ,&p);
			print( stu );
		}
	}
	else
	{
		printf("\n你是否希望添加谁的成绩( y or n )\n");
		fflush(stdin);
		scanf("%c",&o);
		if(o=='y')
		{
			printf("\n你想插入学生的学号为：");
			scanf("%d",&p.num);
			printf("你想插入学生的姓名是：");
			scanf("%s",&p.name);
			printf("你想插入学生的成绩是:");
			scanf("%f",&p.score);
			insert( stu ,&p);
			print( stu );
		}
		else
		{
			exit(0);
		}
	}
}

void start()
{
	system("title 你知道吗");
        system("mode con cols=30 lines=15");
        printf("\n\n\n\n\n在中国每过去59s就有一分钟过去\n\t  蛤----蛤");
	system("color 6B");

	system("color 6C");

	system("color 6D");

	system("color 6E");

	system("color 6F");

	system("color 70");

	system("color 71");

	system("color 72");

	system("color 73");

	system("color 74");

	system("color 75");

	system("color 76");

	system("color 77");

	system("color 78");

	system("color 79");

	system("color 7A");

	system("color 7B");

	system("color 7C");

	system("color 7D");

	system("color 7E");

	system("color 7F");

	system("color 80");

	system("color 81");

	system("color 82");

	system("color 83");

	system("color 84");

	system("color 85");

	system("color 86");

	system("color 87");

	system("color 88");

	system("color 89");

	system("color 8A");

	system("color 8B");

	system("color 8C");

	system("color 8D");

	system("color 8E");

	system("color 8F");

	system("color 90");

	system("color 91");

	system("color 92");

	system("color 93");

	system("color 94");

	system("color 95");

	system("color 96");

	system("color 97");

	system("color 98");

	system("color 99");

	system("color 9A");

	system("color 9B");

	system("color 9C");

	system("color 9D");

	system("color 9E");

	system("color 9F");

	system("color A0");

	system("color A1");

	system("color A2");

	system("color A3");

	system("color A4");

	system("color A5");

	system("color A6");

	system("color A7");

	system("color A8");

	system("color A9");

	system("color AA");

	system("color AB");

	system("color AC");

	system("color AD");

	system("color AE");

	system("color AF");

	system("color B0");

	system("color B1");

	system("color B2");

	system("color B3");

	system("color B4");

	system("color B5");

	system("color B6");

	system("color B7");

	system("color B8");

	system("color B9");

	system("color BA");

	system("color BB");

	system("color BC");

	system("color BD");

	system("color BE");

	system("color BF");
	system("color C0");

	system("color C1");

	system("color C2");

	system("color C3");

	system("color C4");

	system("color C5");

	system("color C6");

	system("color C7");

	system("color C8");

	system("color C9");

	system("color CA");

	system("color CB");

	system("color CC");

	system("color CD");

	system("color CE");

	system("color CF");

	system("color D0");

	system("color D1");

	system("color D2");

	system("color D3");

	system("color D4");

	system("color D5");

	system("color D6");

	system("color D7");

	system("color D8");

	system("color D9");

	system("color DA");

	system("color DB");

	system("color DC");

	system("color DD");

	system("color DE");

	system("color DF");

	system("color E0");

	system("color E1");

	system("color E2");

	system("color E3");

	system("color E4");

	system("color E5");

	system("color E6");

	system("color E7");

	system("color E8");

	system("color E9");

	system("color EA");

	system("color EB");

	system("color EC");

	system("color ED");

	system("color EE");

	system("color EF");

	system("color F0");

	system("color F1");

	system("color F2");

	system("color F3");

	system("color F4");

	system("color F5");

	system("color F6");

	system("color F7");

	system("color F9");

	system("color FA");

	system("color FB");

	system("color FC");

	system("color FD");

	system("cls");
        printf("\n\n\n   是否希望进入本垃圾的\n   智障学生管理系统( y or n )\n");
        char m;
        scanf("%c",&m);
        if(m=='y')
	{
		system("cls");
	}
	else
	{
		system("cls");
		printf("\n\n\n\n\n\t谢谢观看\n\n\n\n\n\n");
		Sleep(2000);
		exit(0);
	}
        /*
	W = 87 || 119
	S = 83 || 115
	A = 65 || 97
	D = 68 || 100
	Q = 81 || 113
	0 = Black
	1 = Blue
	2 = Green
	3 = Aqua
	4 = Red
	5 = Purple
	6 = Yellow
	7 = White
	8 = Gray
	9 = Light Blue
	A = Light Green
	B = Light Aqua
	C = Light Red
	D = Light Purple
	E = Light Yellow
	F = Bright White
	*/
}

void window()
{
	system("title 本垃圾的智障学生管理系统");
        system("mode con cols=60 lines=70");
	system("color");
        system("color FC");
}

struct student *creat()
{
	struct student *head;
	struct student *p1,*p2;

	p1=p2=(struct student *)malloc(LEN);

	printf("请按学号从小到大顺序输入\n(如果不想输入了，输入学号为0即可)\n输入学号:");
	scanf("%d",&p1->num);

	printf("请输入姓名:");
	//gets(p1->name);
	scanf("%s",&p1->name);

	printf("请输入考试成绩:");
	scanf("%f",&p1->score);

	head = NULL;
	n=0;

	while(p1->num)
	{
		n++;
		if(n==1)
		{
			head=p1;

		}
		else
		{
			p2->next =p1;
		}
		p2=p1;
		p1= (struct student *)malloc(LEN);
		printf("请输入学号");
	        scanf("%d",&p1->num);
	        if(p1->num==0)
			break;
	        printf("请输入姓名:");
	        //gets(p1->name);

	        scanf("%s",&p1->name);

		printf("请输入考试成绩：");
	        scanf("%f",&p1->score);


	}
	p2->next=NULL;
	return head;

};


void print(struct student *head)
{
	struct student *p;
	printf("\n总共有%d个成绩\n",n);

	p=head;
	if(head !=NULL)
	{
		do{
			printf("\n学号为\t\t%d\n姓名:\t\t%s\n成绩是:\t\t%f\n",p->num,p->name,p->score);
			p=p->next;
		}while(p!=NULL);
	}
}

/*void del( struct student *head,int num)
{
	struct student *p1,*p2;
	p1=head;
	while((num!=p1->num)&&(p1!=NULL));       尼玛又是这个分号
	{
		p2=p1;
		p1=p1->next;

	}
	if(num==p1->num)
	{
		if(p1==head)
		{
			head=p1->next;
		}
		else
		{
			p2->next=p1->next;

		}

	}
	else
	{
		printf("没有这个人");
	}
	return head;
};
*/

void del(struct student *head,int num)
{
	struct student *p1,*p2;
	p1=head;
	while((num!=p1->num)&&(p1!=NULL))
	{
		p2=p1;
		p1=p1->next;
	}
	if(num==p1->num)
	{
		if(p1==head)
			{
				head=p1->next;
			}
		else
		{

			p2->next=p1->next;
		}
	}
	else
		{


			printf("没有这个人");
		}
	n=n-1;
	return head;
}

void insert(struct student *head,struct student *p)
{
	struct student *p0,*p1,*p2;
	p0=p;
	p1=head;
	while((p0->num > p1->num)&&(p1->next != NULL))
	{
		p2=p1;
		p1=p1->next;
	}
	if(p0->num <= p1->num)
	{
		if(p1==head)
		{
			p0->next=p1;
		}
		else
		{
			p2->next = p0;
			p0->next = p1;
		}
	}
	else
	{
		p1->next=p0;
		p0->next=NULL;
	}
	n=n+1;
	return head;
}
