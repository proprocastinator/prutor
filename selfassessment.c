//Q.L-10 ESC101
#include<stdio.h>
int main()
{
    int prev,curr,len=0;
    int maxlen=0;
    scanf("%d",&prev);
    if(prev!=-1)
    {
        len=1;maxlen=1;
        scanf("%d",&curr);
        while(curr!=-1)
        {
            if(prev<curr)
            {
                len=len+1;
            }
            else
                if(maxlen<len)
                {
                    maxlen=len;
                }
                prev=curr;
                scanf("%d",&curr);
        }
            if(maxlen<len)
            {
                maxlen=len;
            }
    }
    printf("%d",maxlen);
    return 0;
}
