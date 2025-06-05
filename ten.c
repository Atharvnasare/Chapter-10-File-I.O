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

/* Reading from the file*/
// int main(){
//     FILE *fptr;
//     fptr = fopen("Text.txt","r");

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

//     int ch;
//     fscanf(fptr , "%d" , &ch);
//     printf("character = %d \n" , ch);
//     fscanf(fptr , "%d" , &ch);
//     printf("character = %d \n" , ch);
//     fscanf(fptr , "%d" , &ch);
//     printf("character = %d \n" , ch);

//     fclose(fptr);
//     return 0;
// }

/*Writing from the file*/

// int main(){
//     FILE*fptr;
//     fptr = fopen("Text.txt" , "r");

//     printf ("%c \n , ")

//     fclose(fptr);
//     return 0;

// }

/*EOF (End of file)*/

// int main(){
//     FILE * fptr;
//     fptr  = fopen ("Text.txt" , "r");
//     char ch;
//     ch = fgetc(fptr);

//     while(ch != EOF){
//             printf("%c" , ch);
//             ch = fgetc(fptr);
//     }
//     printf("\n");
//     fclose(fptr);
    
//     return 0;

// }

/*Que . make a program to read 5 integer from a file*/

// int main(){
//     FILE*fptr ;
//     fptr = fopen ("Text.txt" , "r");
//     int n;

//     fscanf(fptr ,"%d" ,&n);
//     printf("number =%d \n" , n);

//         fscanf(fptr ,"%d" ,&n);
//     printf("number =%d \n" , n);

//         fscanf(fptr ,"%d" ,&n);
//     printf("number =%d \n" , n);

//         fscanf(fptr ,"%d" ,&n);
//     printf("number =%d \n" , n);

//       fscanf(fptr ,"%d" ,&n);
//     printf("number =%d \n" , n);

//       fclose(fptr);
// return 0;
// }

    /*MAKE A PROGRAM TO INPUT information form a user rneee e*/

int main(){
    FILE *fptr;
    fptr = fopen("Student.txt" , "w");

    char name[100];
    int age ;
    float cgpa ;

    printf("Enter name :");
    scanf("%s", &name);

    printf("Enter age :");
    scanf("%s", &age);

    printf("Enter cgpa :");
    scanf("%s", &cgpa);

fclose(fptr);
return 0;name;; 
}


