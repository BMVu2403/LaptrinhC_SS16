#include<stdio.h>

void updateElement(int*arr,int position,int newValue){
    arr[position]=newValue; 
}
int main(){
    int array[]={1,2,3,4,5}; 
    int size=5; 
    printf("Mang ban dau:\n");
    for (int i=0;i<size;i++){
        printf("%d",array[i]);
    }
    printf("\n");
    updateElement(array,4,83);
    printf("Mang sau khi cap nhat:\n");
    for (int i=0;i<size;i++){
        printf("%d",array[i]);
    }
    printf("\n");
    return 0;
}

