#include<stdio.h>
#include<string.h>
int main()
{
    int T,N,K,x=0,y=0,i,k,p=0,q=0;
    scanf("%d",&T);
    for(k=1; k<=T; k++)
    {
        scanf("%d",&N);
        scanf("%d",&K);
        int j=N-1;
        char s[N],temp[5];
        scanf("%s",s);
//    for(i=0;i<N/2;i++)
//    {
//        if(s[i]==s[j])
//        {
//        x++;
//        }
//        j--;
//    }
//    if(N/2==x)
//    {
//        y=0;
//        printf("Case %d: %d",k,y);
//    }
        while(N/2!=x)
        {

            for(i=0; i<N/2; i++)
            {
                if(s[i]==s[j])
                {
                    x++;
                }
                j--;
            }
            if(N/2==x)
            {
                break;
            }
            x=0;
            temp[0]=0;
            p=q+1;
            if(s[p]!=s[q])
            {
                temp[0]=s[q];
                s[q]=s[p];
                s[p]=temp[0];
                y++;
            }
            q++;
        }
        if(N/2==x)
        {
            printf("Case %d: %d",k,y);
        }
        else
            printf("Case %d: -1",k);
    }
    return 0;
}
