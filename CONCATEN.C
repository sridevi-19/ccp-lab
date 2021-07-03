#include<stdio.h>
#include<conio.h>
void main()
{
 int i=0,j=0;
 char str1[30],str2[30];
 char str3[60];
 clrscr();
 printf("enter thr string 1");
 gets(str1);
 printf("enter the second string");
 gets(str2);
 while(str1[i]!='\0')
 {
  str3[i]=str1[i];
  i++;
  }
  str3[i]=' ';
  i++;
  while(str2[j]!='\0')
  {
   str3[i]=str2[j];
   i++;
   j++;
   }
  str3[i]='\0';
  printf("%s\n",str3);
  printf("The length of the concatenated string is:%d",i);
  getch();
  }