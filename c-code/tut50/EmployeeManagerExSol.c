#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* code */
    int chars, i = 0;
    char a,b;
    char *ptr;

    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee Id \n",i+1);
        scanf("%d", &chars);
        getchar();
        printf("Enter the value of A \n");
        scanf("%c",&a);
        getchar();
        printf("Enter the value of B\n");
        scanf("%c",&b);

        printf("Enter your Employee id\n");
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        scanf("%s", ptr);

        printf("Your Employee id is %s\n", ptr);
        free(ptr);
        i = i + 1;
    }
    return 0;
}
