#include<bits/stdc++.h>
#include<algorithm>//�����㷨�� 
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
	}//����ͷ��� 
	
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
	p = head;//����������ֵ 
	
	
	while(p->next!=p){
		for(int i = 1;i<k;i++){
			r = p;
			p = p->next;
		}
		cout << p->data + 1 <<" ";
		r -> next = p -> next;//ɾ��
		p = p->next;
	}//�������� 
	
	cout << p->data + 1;//������Ӵ���	
}

int main()
{
	int n,k;
	cin >> n >>k;
	ysflb(n,k);
	return 0;
	
	
}


