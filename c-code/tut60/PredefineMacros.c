#include <stdio.h>

int main()
{
    printf("\n*Predefined Macros Other Preprocessor Directives C Tutorial\n\n");
    
    printf("File name is %s\n", __FILE__);
    printf("Today's DATE is : %s\n",__DATE__);
    printf("Time Now is : %s\n",__TIME__);
    printf("Line no is : %d\n",__LINE__);
    printf("ANSI : %d\n",__STDC__);

    return 0;
}