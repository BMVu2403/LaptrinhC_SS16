#include<stdio.h>

int main(){
    int x=10;        
    int *ptr=&x;       

    printf("Cach 1:\n");
    printf("Gia tri cua bien x: %d\n",x);            
    printf("�ia chi cua bien x: %p\n",(void*)&x);    

    printf("\nCach 2:\n");
    printf("Gia tri cua bien x: %d\n",*ptr);   
    printf("Dia chi cua bien x: %p\n",(void*)ptr);  
    return 0;
}

