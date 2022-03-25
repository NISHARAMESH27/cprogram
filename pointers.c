#include<stdio.h>
#include <math.h>
int main()
{
int i,n;
  float sum,a[10],mean,var,sd;
  float *p;

  printf("Enter the no of elements: ");
  scanf("%d",&n);
  printf("Enter %d elements: ",n);
  p=a;
  for(i=0;i<n;i++)
    {
      scanf("%f",p);
      p++;
    }
  p=a;
  for(i=0;i<n;i++)
    {
      sum=sum+(*p);
      p++;
    }
  mean=sum/(float)n;
  
  p=a;
  for(i=0;i<n;i++)
    {
      var=var+pow((*p-mean),2);
      p++;
    }
  
  var=var/(float)n;
  sd=sqrt(var);
  printf("sum =%f \n",sum);
   printf("mean = %f\n",mean);
   printf("standard deviation = %f\n",sd);

  return 0;
  
  }
