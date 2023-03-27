//Outtext problem

#include <graphics.h>
# include<time.h>
# include<string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   int gdriver = DETECT, gmode, errorcode;

   initgraph(&gdriver, &gmode, "");

   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }


             char a[100];
             printf("Enter Name\n");
             gets(a);
             strcat(a,"\n");
             strcat(a,"how");

         strcat(a,"\n");
             strcat(a,"r u");

   outtextxy(100,100,a);
   getch();
   closegraph();
   return 0;
}

