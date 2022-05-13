#include <stdio.h>
#include <stdlib.h>

int main (int argc , char *argv[] )
{
 char path[100] , dest[100] , comm[200] ,f_name[100],x;
 
 while (1)
 {
  printf("1-List files/directories.\n2-change permission of files. \n3-Make file(s). \n4-Make directories(s). \n5-Create sympolic link files. \n6-Rename file(s)/directories. \n7-Exit\n");
  int c;
  scanf("%d",&c);
  x=getchar();
  switch(c)
  {
  //list files
case 1:
  { 
   strcpy(comm,"ls -a");
   system(comm);
   break;
   }
   
case 2:
  {
  strcpy(comm,"chmod ");
  while(1){
   printf("1-anyone can do anything (read, write, or execute) \n2-you can do anything; others can only read and execute \n3-you can do anything; others can only execute. \n4-you can read and write; others can only read\n5-Exit");
   int y; char x;
   scanf("%d",&y);
   x=getchar();
   switch (y)
   {
case 1:
   strcat(comm,"777");
   printf("Enter file name : \n");
   gets(f_name);
   strcat(comm," ");
   strcat(comm,f_name);
   system(comm);
   break;
case 2:
   strcat(comm,"755");
   printf("Enter file name : \n");
   gets(f_name);
   strcat(comm," ");
   strcat(comm,f_name);
   system(comm);
   break;
case 3:
   strcat(comm,"711");
   printf("Enter file name : \n");
   gets(f_name);
   strcat(comm," ");
   strcat(comm,f_name);
   system(comm);
   break;   
case 4:
   strcat(comm,"644");
   printf("Enter file name : \n");
   gets(f_name);
   strcat(comm," ");
   strcat(comm,f_name);
   system(comm);
   break;
case 5: break;

default : printf("Enter correct choise\n"); 

   }//end internal switch
  }//end while
  }//end case 2
case 3:
 {
  
 } 
 case 7: exit(0);
 default : printf("Enter correct choise\n"); 
 }
 }
return 0;
}
