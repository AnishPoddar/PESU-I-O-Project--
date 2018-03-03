#include<stdio.h>

/* NOTE: Since the push() function initializes new elements 
         of the stack locally, we need to use static variables
         inside the function so that they retain their values
         even after the scope of the function is exceeded.
*/

void main()
{
 int running = 1, n, command = 0;

 printf("\n ***** STACK OPERATIONS PROGRAM ***** \n");

 while (running)
	{ 
	  printf("\n Enter a command ( 1-push/ 2-pop / 3-peek / 0-exit ): ");
	  scanf("%d",&command);

	  if (command==1)
		{
		 printf("\n Enter the number to be pushed: ");
		 scanf("%d",&n);

		 push(n);
		}
	  else if (command==2)
		{
		 pop();
		}
	  else if (command==3)
		{
		 peek();
		}
	  else if (command==0)
		{
		 running = 0;
		}
	}


} 