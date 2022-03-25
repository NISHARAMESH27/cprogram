#include<stdio.h>
int btod(int);
 int main()
{
  int binary,decimal;
  printf("Enter the binary number: ");;
  scanf("%d",&binary);
  decimal=btod(binary);
  printf("decimal equivalent =%d\n",decimal);
    return 0;
  }
int btod(int bin)
{
  if(bin==0)
  {
    return 0;
  }
  else 
  {
    return(bin%10+ btod(bin/10)*2);
  }
  return 0;
}