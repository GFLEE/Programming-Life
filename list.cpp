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

int ListInsert(SqList &L,int i,int e)
{
	
if(i<1&&i>L.length+1)
return 0;	//�ж�iֵ�Ƿ�Ϸ� 
	if(L.length<L.listsize)
	{
		int *newbase=(int *)realloc(L.elem,L.listsize+sizeof(int)*10);
		if(!newbase)
		exit(-2);
		L.elem=newbase;
		L.listsize+=10;
	}
	int *p;
	int *q=&(L.elem[i-1]);
    for(p=&(L.elem[L.length-1]);p>=q;p--)
    {  *(p+1)=*p;   }
     *p=e;
     L.length++;

return 1;	
}
 


int main()
{
	
	
	
	return 0;
}
