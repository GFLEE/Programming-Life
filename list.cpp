#include <stdio.h>
#include <stdlib.h>
#define LIST_SIZE 100
#define LISTINCRMENT 10

typedef struct{     //����˳���ṹ�壬��������׵�ַ�����Ⱥͱ���ܴ�С�� 
	int *elem;
	int length;                        //��ĳ��� 
	int listsize;                    //��Ĵ洢������С 
	
}SqList;

int InitList (SqList &L)          //ʵ�δ��ݣ������Ա���ܽ������ݲ��� 
{
  L.elem=(int*)malloc(LIST_SIZE*sizeof(int));   //����������ʼ�����ռ� 
  L.length=0;                               //�������� ,�����ж��ٵ���Ч���� 
  L.listsize=LIST_SIZE;                     //�����ʼ��������Ϊ 100�� 
  
  return 1;
}//��ʼ��һ���� 



int main()
{
	
	
	
	return 0;
}
