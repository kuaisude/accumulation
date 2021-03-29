#include <stdio.h>
#include <stdlib.h>
 
typedef struct Data
{
	Data *next;    // ָ��
	int elem;      // ����Ԫ��
}LinkList,*pList;  // ����ѭ������ṹ��
 
int main()
{
	int size;
	pList head,p,q;
 
	head = (pList)malloc(sizeof(LinkList)); //uninitialized local variable 'head' used~
	p = head;
 
	printf("�����ѭ�������С: ");
	scanf("%d",&size);
 
	for (int i = 0; i < size; i++)
	{
		p->next = (pList)malloc(sizeof(LinkList));
		p = p->next;
		p->elem = i + 1;
		//p->elem = rand()%50;
		p->next = head->next;
	} // ��ѭ������ ���� �������
 
	// ����n����Χ����Բ����Χ���ִ�ĳ��λ��m��1��m��n���ϵ��˿�ʼ������������k���˾�վ������
	// ��һ���ˣ���ԭ���ĵ�k+1��λ���ϵ��ˣ��ִ�1��ʼ�������ٱ�����k����վ������
	// �����ظ���ȥ��ֱ��ȫ�����˶�վ����Ϊֹ�������һ����������������С�
 
	int m = -1;   // ��ĳ��λ�� m��1��m��n���ϵ��˿�ʼ����
	int n = -1;   // ������ n ���˾�վ������
 
	while (m <= 0 || n <= 0 || m > size)
	{	
		printf("\n*************************\n");
		printf("������ĸ�λ�ÿ�ʼ������ ");
		scanf("%d",&m);
 
		printf("���뱨�������ٿ�ʼ����� ");
		scanf("%d",&n);
		printf("\n*************************\n");
 
		if (m > 0 && n > 0 && m <= size)
			break;
		else
			printf("�����������������룡\n");
	}
 
	// �ƶ���λ��
	while (--m != 0)
	{
		p = p->next;
		head->next = p -> next;
	}
 
	// �ӱ�ͷ���һ��
	pList N = head->next;
 
	for (int j = 0;j<size;j++)
	{
		printf("%d\t",N->elem);
		N = N->next;
	}
	printf("\n");
 
	while (size-- != 0) // ����Ϊ��
	{
		// ��ʼ����
		int i = 1;
 
		while (i != n)
		{
			i++;
			p = p->next;
			head->next = p->next;  // ��ͷҲ�����ƶ�
		}
 
		q = head->next;
		p ->next = p ->next ->next;
		printf("%d\t",q->elem);
		head->next = p->next;
		free(q);
	}
	free(p);
	free(head); // �ͷ� head �� pָ��
	return 0;
}

