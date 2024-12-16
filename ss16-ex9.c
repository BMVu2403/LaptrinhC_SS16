#include<stdio.h>

void themPhanTu(int arr[],int *n,int giaTriMoi,int viTri){
    for (int i=*n;i>viTri;i--){
        arr[i]=arr[i-1];
    }
    arr[viTri]=giaTriMoi;
    (*n)++;
}
int main(){
    int arr[100]={1,2,3,4,5}; 
    int n=5; 
    int giaTriMoi=10;             
    int viTri=2;              
    themPhanTu(arr,&n,giaTriMoi,viTri);
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

