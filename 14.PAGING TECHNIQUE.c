#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include<conio.h>
 main()
{
       int n, p, i;
       int sa[10];
       printf("Enter the no. of pages: ");
       scanf("%d", &n);
       printf("\n Enter the page size: ");
       scanf("%d", &p);
       for(i=0; i<n; i++)
	   {
              sa[i]= (int)malloc(p);
              printf("\n Page %d\t  Address %u\n", i+1, sa[i]);
       }
       getch();
}
