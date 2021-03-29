#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<cstdio>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}Node;

void ysflb(int n,int k)
{
	Node *head = NULL ,*p = NULL, *r = NULL;
	head = (Node *)malloc(sizeof(Node));
	if(head == NULL)
	{
		cout << "Memory Failed!";
		return;
	}
	
	head->data = 0;
	head->next = NULL;
	p = head;
	//创建
	for(int i = 1;i<n;i++)
	{
		r = (Node *)malloc(sizeof(Node));
		r->data = i;
		r->next = NULL;
		p->next = r;
		p = r;	
	} 
	p->next = head;//循环 
	p = head;
	while(p->next != p)
	{
		for(int i = 1;i < k;i++)
		{
			r = p;
			p = p->next; // p为出局的节点 
		}
		
		cout << p->data << " ";
		r->next = p->next;//删除p的目的 
		p = p->next;
	}
	cout << p->data;
		
}


int main()
{
	
	ysflb(10,3);	
	return 0;
}
