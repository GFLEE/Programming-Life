#include <stdio.h>
#include <stdlib.h>
#define N 6
int partition(int arr[], int low, int high){  // (low=0,high=N-1) 
    int key;
    key = arr[low];                           // (key=arr[low])
    while(low<high){            //(ɨ������)
        while(low <high && arr[high]>= key )    //(high cant bigger than low,find a ele_value<judge) 
            high--;
        if(low<high)   //�������low֮ǰfound it!
            arr[low++] = arr[high];//�����ֵ���ݸ�arr[low],low����  
        while( low<high && arr[low]<=key )
            low++; //����ɨ��Ѱ��С�ڱ�׼ֵ��Ԫ�� 
        if(low<high)
            arr[high--] = arr[low];   //�ѵ�ǰ��arr[low]��ֵ��arr[high],high���� 
    }
    arr[high] = key; //�м�ֵ 
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
    printf("����ǰ \n");
    for(i=0;i<N;i++)
        printf("%d\t",arr[i]);
    quick_sort(arr,0,N-1);      // 
    printf("\n ����� \n");
    for(i=0; i<N; i++)
        printf("%d\t", arr[i]);
    printf ("\n");
    system("pause");
    return 0;
}
