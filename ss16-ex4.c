#include<stdio.h>

void printArray(int*arr,int size){
    for (int i=0;i<size;i++){
        printf("Phan tu thu %d: %d\n",i,*(arr+i)); 
    }
}
int main(){
    int array[]={2,4,6,8,10};
    int size=sizeof(array)/sizeof(array[0]); 
    printArray(array,size);
    return 0;
}

