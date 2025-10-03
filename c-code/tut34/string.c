#include<stdio.h>

int printStr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }

}


int main()
{


char str[52];
fgets(str,25,stdin);
printStr(str);

 return 0;
}