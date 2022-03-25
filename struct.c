#include<stdio.h>

int main()
{ 
  struct student
  {
  int stu_id;
  char name[20];
  float lang1_marks;
  float lang2_marks;
  float math_marks;
  float eng_marks;
   float sst_marks;
  float phy_marks;
  float avg;
  };
  struct student s[20];

  int i,n;
  printf("\nEnter the no of records: ");
  scanf("%d",&n);
  printf("\nEnter %d no of records: ",n);
  for(i=0;i<n;i++)
    {
      printf("\n enter student ID: ");
      scanf("%d",&s[i].stu_id);
      printf(" enter student name: ");
      scanf("%s",s[i].name);
      printf(" enter lang1 marks: ");
      scanf("%f",&s[i].lang1_marks);
      printf(" enter lang2 marks: ");
      scanf("%f",&s[i].lang2_marks);
      printf(" enter math marks : ");
      scanf("%f",&s[i].math_marks);
      printf(" enter english marks: ");
      scanf("%f",&s[i].eng_marks);
      printf(" enter social studies marks: ");
      scanf("%f",&s[i].sst_marks);
      printf(" enter  physics marks: ");
      scanf("%f",&s[i].phy_marks);
      
      }
  for(i=0;i<n;i++)
    {
      s[i].avg=(s[i].lang1_marks+s[i].lang2_marks+s[i].math_marks+s[i].eng_marks+s[i].sst_marks+s[i].phy_marks)/6.00;
    }

  printf("\nStudents scoring above the average marks: \n");
  printf("\nID\tNAME\tAVERAGE\t");

  for(i=0;i<n;i++)
    {
      if(s[i].avg>35.00)
      {
        printf("%d\t%s\t%f\n",s[i].stu_id,s[i].name,s[i].avg);
      }
    }
   printf("\nStudents scoring below the average marks: \n");
  printf("\nID\tNAME\tAVERAGE\t\n");

  for(i=0;i<n;i++)
    {
      if(s[i].avg<35.00)
      {
        printf("%d\t%s\t%f\n",s[i].stu_id,s[i].name,s[i].avg);
      }
    }
  return 0;
  }