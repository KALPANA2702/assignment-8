
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
      {
         for(j=1;j<=18;j++)
         {
           if((j>=4-i && j<=6+i) || (j>=14-i && j<=16+i))
           {
            printf("*");
           }
           else{
            printf(" ");
           }
         }
          printf("\n");
      }
       for(i=1;i<=10;i++)
      {
         for(j=1;j<=19;j++)
         {
            if((i==0) && (j==7))
            printf("MY SIR G");
            if((i==0) && (j>=7) && (j<=12))
            continue;
           if(j>=i && j<=18-i)
           {
            printf("*");
           }
           else{
            printf(" ");
           }
         }
          printf("\n");
      }
      return 0;
}
