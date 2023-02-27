#include <stdio.h>
int global = 10;         //Global Value
const int value = 20;    //Constant value
int getval()
{
 int local = 40;
 return local;
}
int main()
{
  int local = 30;       //Local 1 value
  int local2 =0;
  printf("Global = %d",global);
  printf("\nConstant = %d",value);
  local2 = getval();
  printf("\nLocal 1 = %d",local);
  printf("\nLocal 2 = %d", local2); //Local 2 Value
  return 0;
}
