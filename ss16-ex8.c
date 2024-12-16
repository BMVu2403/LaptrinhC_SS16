#include<stdio.h>
#include<string.h>

int main(){
    char inputString[100],reverseString[100];
    int i,length;
    printf("Nhap vao mot chuoi:");
    fgets(inputString,sizeof(inputString),stdin); 
    inputString[strcspn(inputString,"\n")]='\0'; 
    length=strlen(inputString); 
    for (i=0;i<length;i++){
        reverseString[i]=inputString[length-i-1];
    }
    reverseString[length]='\0';
    printf("Chuoi goc:%s\n",inputString);
    printf("Chuoi dao nguoc:%s\n",reverseString);
    return 0;
}

