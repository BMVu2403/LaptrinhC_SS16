#include<stdio.h>

void xoaPhanTu(int arr[],int*n,int viTri){
    for (int i=viTri;i<*n-1;i++){
        arr[i]=arr[i+1];
    }
    (*n)--;
}
int main(){
    int arr[100]={1,2,3,4,5}; 
    int n=5;           
    int viTri=2;                
    xoaPhanTu(arr,&n,viTri);
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

