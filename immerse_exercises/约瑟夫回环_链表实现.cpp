#include <stdio.h>
#include <stdlib.h>
 
typedef struct Data
{
	Data *next;    // 指针
	int elem;      // 数据元素
}LinkList,*pList;  // 创建循环链表结构体
 
int main()
{
	int size;
	pList head,p,q;
 
	head = (pList)malloc(sizeof(LinkList)); //uninitialized local variable 'head' used~
	p = head;
 
	printf("输入此循环链表大小: ");
	scanf("%d",&size);
 
	for (int i = 0; i < size; i++)
	{
		p->next = (pList)malloc(sizeof(LinkList));
		p = p->next;
		p->elem = i + 1;
		//p->elem = rand()%50;
		p->next = head->next;
	} // 单循环链表 数据 输入完成
 
	// 设有n个人围坐在圆桌周围，现从某个位置m（1≤m≤n）上的人开始报数，报数到k的人就站出来。
	// 下一个人，即原来的第k+1个位置上的人，又从1开始报数，再报数到k的人站出来。
	// 依此重复下去，直到全部的人都站出来为止。试设计一个程序求出出列序列。
 
	int m = -1;   // 从某个位置 m（1≤m≤n）上的人开始报数
	int n = -1;   // 报数到 n 的人就站出来。
 
	while (m <= 0 || n <= 0 || m > size)
	{	
		printf("\n*************************\n");
		printf("输入从哪个位置开始报数： ");
		scanf("%d",&m);
 
		printf("输入报数到多少开始输出： ");
		scanf("%d",&n);
		printf("\n*************************\n");
 
		if (m > 0 && n > 0 && m <= size)
			break;
		else
			printf("输入有误，请重新输入！\n");
	}
 
	// 移动好位置
	while (--m != 0)
	{
		p = p->next;
		head->next = p -> next;
	}
 
	// 从表头输出一下
	pList N = head->next;
 
	for (int j = 0;j<size;j++)
	{
		printf("%d\t",N->elem);
		N = N->next;
	}
	printf("\n");
 
	while (size-- != 0) // 链表不为空
	{
		// 开始报数
		int i = 1;
 
		while (i != n)
		{
			i++;
			p = p->next;
			head->next = p->next;  // 表头也跟着移动
		}
 
		q = head->next;
		p ->next = p ->next ->next;
		printf("%d\t",q->elem);
		head->next = p->next;
		free(q);
	}
	free(p);
	free(head); // 释放 head 和 p指针
	return 0;
}

