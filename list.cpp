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



int main()
{
	
	
	
	return 0;
}
