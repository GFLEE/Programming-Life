#include <stdio.h>
#include <stdlib.h>
#define N 6
int partition(int arr[], int low, int high){  // (low=0,high=N-1) 
    int key;
    key = arr[low];                           // (key=arr[low])
    while(low<high){            //(扫描条件)
        while(low <high && arr[high]>= key )    //(high cant bigger than low,find a ele_value<judge) 
            high--;
        if(low<high)   //在最左端low之前found it!
            arr[low++] = arr[high];//把这个值传递给arr[low],low右移  
        while( low<high && arr[low]<=key )
            low++; //向右扫描寻找小于标准值的元素 
        if(low<high)
            arr[high--] = arr[low];   //把当前的arr[low]赋值给arr[high],high左移 
    }
    arr[high] = key; //中间值 
    return high;
}
void quick_sort(int arr[], int start, int end){
    int pos;
    if (start<end){
        pos = partition(arr, start, end);
        quick_sort(arr,start,pos-1);
        quick_sort(arr,pos+1,end);
    }
    return;
}
int main(void){
    int i;
    int arr[N]={32,12,7, 78, 23,45};
    printf("排序前 \n");
    for(i=0;i<N;i++)
        printf("%d\t",arr[i]);
    quick_sort(arr,0,N-1);      // 
    printf("\n 排序后 \n");
    for(i=0; i<N; i++)
        printf("%d\t", arr[i]);
    printf ("\n");
    system("pause");
    return 0;
}
