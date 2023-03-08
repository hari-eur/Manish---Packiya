#include <stdio.h>
int main()
{
  int i,j,k,r,m,ch;
  do
  {
    printf("\nThe options are :");
    printf("\n       1. Triangle (Pyramid)");
    printf("\n       2. Right Angled Triangle");
    printf("\n       3. Inverted Triangle");
    printf("\n       4. Exit");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
        printf("\nEnter Number of Rows : ");
        scanf("%d",&r);
        m=r;
        for(i=1;i<=r;i++)
        {
          printf("\n");
          for(k=m;k>0;k--)
            printf(" ");
          m--;
          for(j=1;j<i*2;j++)
            printf("*");
        }
        printf("\n");
        break;
      case 2:
        printf("\nEnter Number of Rows : ");
        scanf("%d",&r);
        for(i=1;i<=r;i++)
        {
          printf("\n");
          for(j=1;j<=i;j++)
            printf("*");
        }
        printf("\n");
        break;
      case 3:
        printf("\nEnter Number of Rows : ");
        scanf("%d",&r);
        for(i=r;i>0;i--)
        {
          printf("\n");
          for(j=i;j>0;j--)
            printf("*");
        }
        printf("\n");
        break;
      case 4:
        exit(0);
      default:
        printf("\nInvalid Choice");
        break;
    }
  }while(1);
    return 0;
}
