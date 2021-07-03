#include<stdio.h> //student marks
int main()
{
   int i,j,marks[4][3];
   int s1_max=0,s2_max=0,s3_max=0;
    int stud_no=0;

   for(i=0;i<4;i++)
   {
    printf("enter the marks of students:%d:",i+1);
    for(j=0;j<3;j++)
    {
    scanf("%d",&marks[i][j]);
    }
    }
    for(i=0;i<5;i++)
    {
     if(marks[i][0]>s1_max)
     {
      s1_max=marks[i][0];
      stud_no=i+1;

      }
      }
   printf("student number:%d,has max marks in subject 1=%d\n",stud_no,s1_max);
   for(i=0;i<5;i++)
   {
    if(marks[i][1]>s2_max)
    {
     s2_max=marks[i][1];
     stud_no=i+1;
     }
     }
      printf("student number:%d,has max marks in subject 2=%d\n",stud_no,s2_max);
   for(i=0;i<5;i++)
   {
     if(marks[i][2]>s3_max)
    {
     s3_max=marks[i][2];
     stud_no=i+1;
     }
     }
  printf("student number:%d,has max marks in subject 3=%d\n",stud_no,s3_max);
  return 0;
  }
