#include<stdio.h>

/* how to read and write a file ( create a new file using write mode )*/
// int main (){
//     FILE *fptr;
//     fptr = fopen("NewText.txt","w");
//     if(fptr == NULL){
//         printf("file doesn't exist \n");
//     }
//     else{
//         fclose(fptr);
//     }
//     return 0;
    
// }

int main(){
    FILE *fptr;
    fptr = fopen("Text.txt","r");

    // char ch;
    // fscanf(fptr , "%c" , &ch);
    // printf("character = %c \n" , ch);
    // fscanf(fptr , "%c" , &ch);
    // printf("character = %c \n" , ch);
    // fscanf(fptr , "%c" , &ch);
    // printf("character = %c \n" , ch);
    // fscanf(fptr , "%c" , &ch);
    // printf("character = %c \n" , ch);
    // fscanf(fptr , "%c" , &ch);
    // printf("character = %c \n" , ch);

    int ch;
    fscanf(fptr , "%d" , &ch);
    printf("character = %d \n" , ch);
    fscanf(fptr , "%d" , &ch);
    printf("character = %d \n" , ch);
    fscanf(fptr , "%d" , &ch);
    printf("character = %d \n" , ch);


    fclose(fptr);
    return 0;
}