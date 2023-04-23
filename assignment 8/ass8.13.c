#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=7;i++)
    {
        k='A';
        for(j=1;j<=13;j++)
        {
            if(j<8-i || j>=i+6)
            {
                printf("%c",k);
                j<7?k++:k--;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
