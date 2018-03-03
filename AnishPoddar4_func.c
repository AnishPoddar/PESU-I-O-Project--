#include<stdio.h>

struct object
{
 int element;
 struct object* ptr;
};

struct object* top = NULL;

 void push(int n)
{
 if (top==NULL)
	{
	 static struct object n1;
	 n1.element = n;
	 n1.ptr = NULL;
	 top = &n1;
	}
 else
	{
	 static struct object new; 
	 new.ptr = top;
	 new.element = n;
	 top = &new;
	}
	
 printf("\n Pushing successful! \n");

}


 void pop()
{

 if (top==NULL)
	printf("\n Stack empty \n");
 else
	{
	 printf("\n Popped one element: %d \n", top->element);
	 top = top->ptr;  
	}

}


 void peek()
{
 if (top==NULL)
	printf("\n Stack currently empty; nothing to show \n");
 else
 	printf("\n The current top element is %d \n", top->element);
}

