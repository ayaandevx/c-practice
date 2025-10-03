#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myFile.txt","a");

    // FGETC()
    // char c = fgetc(ptr);
    // printf("The character I read was %c\n",c);


    // FGETS()
    // char str[50];
    // fgets(str,45,ptr);
    // printf("The string is %s ",str);


    // FPUTC()
    // fputc('o',ptr); 

    // FPUTS()
    // fputs("This is FILE_I/O_MORE.class",ptr);

    
    return 0;
}