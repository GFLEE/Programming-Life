#include <stdio.h>
#include <stdlib.h>
#define LIST_SIZE 100
#define LISTINCRMENT 10

typedef struct{     //建立顺序表结构体，包括表的首地址，长度和表的总大小。 
	int *elem;
	int length;                        //表的长度 
	int listsize;                    //表的存储容量大小 
	
}SqList;

int InitList (SqList &L)          //实参传递，函数对表才能进行数据操作 
{
  L.elem=(int*)malloc(LIST_SIZE*sizeof(int));   //给数组分配初始容量空间 
  L.length=0;                               //长度置零 ,代表有多少的有效内容 
  L.listsize=LIST_SIZE;                     //数组初始容量设置为 100； 
  
  return 1;
}//初始化一个表 

int ListInsert(SqList &L,int i,int e)
{
	
if(i<1||i>L.length+1)
return 0;	//判断i值是否合法 
	if(L.length<L.listsize)
	{
		int *newbase=(int *)realloc(L.elem,L.listsize+sizeof(int)*10); //realloca函数为表开辟新的空间 
		if(!newbase)     //申请失败 
		exit(-2);
		L.elem=newbase; //将首地址重新赋给elem 
		L.listsize+=10;   //容量增加 
	}
	int *p;      //数组尾指针 
	int *q=&(L.elem[i-1]);   //待插入位置指针 
    for(p=&(L.elem[L.length-1]);p>=q;p--)     //尾指针p前移，使前面的元素依次后移将q所指空间腾出 
    {  *(p+1)=*p;   }
     *p=e;            //将数值插入 
     L.length++;     //长度加 1 

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
