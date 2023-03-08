#include <stdio.h>
#include <stdlib.h>
void BankOperation(int bank)
{
  int accnt;
  printf("\nPick a choice: ");
  printf("\n1. Savings Account");
  printf("\n2. Current Account");
  printf("\n3. Demat Account");
  printf("\n4. Exit");
  printf("\nEnter your Choice : ");
  scanf("%d",&accnt);
  if(accnt==1)
    savings(bank);
  else if(accnt==2)
    current(bank);
  else if(accnt==3)
    demats(bank);
  else
    return;
}
void savings(int bank)
{
  if (bank == 1)
    printf("\n Savings Interest = 4");
  else if (bank == 2)
    printf("\n Savings Interest = 3");
  else if (bank == 3)
    printf("\n Savings Interest = 8");
  else if (bank == 4)
    printf("\n Savings Interest = 7");
  else if (bank == 5)
    printf("\n Savings Interest = 9");
  else
    printf("\nInvalid Option");
}
void current(int bank)
{
  if (bank == 1)
    printf("\n Current Interest = 4");
  else if (bank == 2)
    printf("\n Current Interest = 3");
  else if (bank == 3)
    printf("\n Current Interest = 8");
  else if (bank == 4)
    printf("\n Current Interest = 7");
  else if (bank == 5)
    printf("\n Current Interest = 9");
  else
    printf("\nInvalid Option");
}
void demats(int bank)
{
  if (bank == 1)
    printf("\n Demat's Interest = 4");
  else if (bank == 2)
    printf("\n Demat's Interest = 3");
  else if (bank == 3)
    printf("\n Demat's Interest = 8");
  else if (bank == 4)
    printf("\n Demat's Interest = 7");
  else if (bank == 5)
    printf("\n Demat's Interest = 9");
  else
    printf("\nInvalid Option");
}
int main()
{
  int ch;
  do
  {
    printf("\nSelect a Bank:");
    printf("\n1. Tamilnad Mercantile Bank");
    printf("\n2. State Bank of India");
    printf("\n3. Punjab National Bank");
    printf("\n4. Axis Bank");
    printf("\n5. HDFC Bank");
    printf("\n6. Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
        BankOperation(ch);
        break;
      case 2:
        BankOperation(ch);
        break;
      case 3:
        BankOperation(ch);
        break;
      case 4:
        BankOperation(ch);
        break;
      case 5:
        BankOperation(ch);
        break;
      case 6:
        exit(0);
        break;
      default:
        break;
    }
  }while(1);
}
