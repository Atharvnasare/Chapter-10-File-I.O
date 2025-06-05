#include<stdio.h>

/* how to read and write a file ( create a new file using write mode)*/
int main (){
    FILE *fptr;
    fptr = fopen("NewText.txt","w");
    if(fptr == NULL){
        printf("file doesn't exist \n");
    }
    else{
        fclose(fptr);
    }
    
    
    return 0;
    
}