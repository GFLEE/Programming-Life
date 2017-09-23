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
	
if(i<1||i>L.length+1)
return 0;	//�ж�iֵ�Ƿ�Ϸ� 
	if(L.length<L.listsize)
	{
		int *newbase=(int *)realloc(L.elem,L.listsize+sizeof(int)*10); //realloca����Ϊ�����µĿռ� 
		if(!newbase)     //����ʧ�� 
		exit(-2);
		L.elem=newbase; //���׵�ַ���¸���elem 
		L.listsize+=10;   //�������� 
	}
	int *p;      //����βָ�� 
	int *q=&(L.elem[i-1]);   //������λ��ָ�� 
    for(p=&(L.elem[L.length-1]);p>=q;p--)     //βָ��pǰ�ƣ�ʹǰ���Ԫ�����κ��ƽ�q��ָ�ռ��ڳ� 
    {  *(p+1)=*p;   }
     *p=e;            //����ֵ���� 
     L.length++;     //���ȼ� 1 

return 1;	
}
 

int DisPlayList(SqList &L)
{
	int i;
	for(i=0;i<L.length;i++)
	printf("%d+",L.elem[i]);
	
	return 0;
	
}


int main()
{

    SqList L;   
    InitList(L);
    
    
	ListInsert(L,1,7);
	
	  DisPlayList(L);
	  


	 
	
	return 0;
}
