#include <stdio.h>
#include<string.h>

int main()
{
    char a[100]="Fever", b[100]  ;

    scanf("%s",b);

    if (strcmp(a,b) == 0)
        printf("Go to hospital right now.\n");
    else
        printf("Go to hospital.\n");

    return 0;
}
