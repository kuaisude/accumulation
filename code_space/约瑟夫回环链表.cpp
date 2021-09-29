#include<bits/stdc++.h>
#include<algorithm>//引入算法库 
using namespace std;

typedef struct node{
	int data;
	struct node *next;
}Node;

void ysflb(int n,int k){
	Node *head = NULL,*p =NULL,*r = NULL;
	head = (Node *)malloc(sizeof(Node));
	if (head == NULL){
		cout << "Failed";
		return ;
	}//创建头结点 
	
	head->data = 0;
	head->next = NULL;
	p = head;
	
	for(int i = 1;i<n;i++){
		r = (Node *)malloc(sizeof(Node));
		r->data = i;
		r->next = NULL;
		p->next = r;
		p = r;
	}
	p->next = head;
	p = head;//创建链表并赋值 
	
	
	while(p->next!=p){
		for(int i = 1;i<k;i++){
			r = p;
			p = p->next;
		}
		cout << p->data + 1 <<" ";
		r -> next = p -> next;//删除
		p = p->next;
	}//报数操作 
	
	cout << p->data + 1;//输出猴子大王	
}

int main()
{
	int n,k;
	cin >> n >>k;
	ysflb(n,k);
	return 0;
	
	
}


