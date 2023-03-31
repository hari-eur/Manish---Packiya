#include<stdio.h>
main()
{
  char *p = NULL;
  {
      char c;
      p = &c;
  }
}
