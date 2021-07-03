//Program to copy two strings
#include <stdio.h>
#include<conio.h>
int main()
{
  int i = 0,j = 0;
  char str1[60],str2[30];


  printf("Enter the string 1 : ");
  gets(str1);

  printf("Enter the string 2 to be concatenated : ");
  gets(str2);

  while(str1[i] != '\0')
  {
    i++;
  }

  while(str2[j] != '\0')
  {
    str1[i] = str2[j];
    i++;
    j++;
  }

  str1[i] = '\0';
  printf("%s\n", str1);
  printf("The length of the concatenated string is : %d.",i);
  getch();
  return 0;
}
