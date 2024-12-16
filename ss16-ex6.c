#include<stdio.h>

int findElement(int*arr,int size,int value){
    for (int i=0;i<size;i++){
        if (arr[i]==value){
            return i; 
        }
    }
    return -1; 
}
int main(){
    int array[]={1,2,3,4,5}; 
    int size=sizeof(array)/sizeof(array[0]);
    int valueToFind=3;
    int position=findElement(array,size,valueToFind);
    if (position!=-1){
        printf("Phan tu %d duoc tim thay o vi tri: %d\n",valueToFind,position);
    } else{
        printf("Phan tu %d khong ton tai trong mang.\n",valueToFind);
    }
    return 0;
}

