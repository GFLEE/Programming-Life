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
return 0;	                   //judge whether i is legal,iֵ�Ƿ�Ϸ� 
	if(L.length<L.listsize)
	{
		int *newbase=(int *)realloc(L.elem,L.listsize+sizeof(int)*10); //increase space;realloca����Ϊ�����µĿռ� 
		if(!newbase)          //fail ����ʧ�� 
		exit(-2);
		L.elem=newbase;      //renew the address of first,���׵�ַ���¸���elem 
		L.listsize+=10;       //�������� 
	}
	int *p=&(L.elem[L.length-1]);                  //pointer of tail,����βָ�� 
	int *q=&(L.elem[i-1]);   //point of that ready to insert,������λ��ָ�� 
    for(p=&(L.elem[L.length-1]);p>=q;p--)     //tail pointer move forward,and values move backward,βָ��pǰ�ƣ�ʹǰ���Ԫ�����κ��ƽ�q��ָ�ռ��ڳ� 
    {  *(p+1)=*p;   }
     *p=e;                  //����ֵ���� 
     L.length++;          //length +1 

return 1;	
}
 




int main()
{

    SqList L;                    //create list.
    InitList(L);
    
    
	ListInsert(L,1,7);

	
	for(int i=0;i<(L).length;i++)   //show all
	printf("%d",(L).elem[i]);
	 
	  


	 
	
	return 0;
}
