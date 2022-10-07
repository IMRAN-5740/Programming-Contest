#include<stdio.h>
#include<math.h>
int main()
{
    int i,row=0;
    for(i=1000; i>=1; i--)
    {
        printf("%d\t",i);
        row++;
        if(row%5==0)
        {
            printf("\n");
        }
    }
    return 0;
}
