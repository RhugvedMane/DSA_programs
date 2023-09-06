#include <stdio.h>
#include <stdlib>
queue
int stack[5];
int top = -1;

void push(int);

void pop();

void display();


void main()
{
int ch;
int n1;

while(1)
{
	printf("\n----Stack Operation----");
	printf("\n1. Push an element into the stack");
	printf("\n2. Pop out an element from the stack");
	printf("\n3. Display the stack elemets");
	printf("\n4. Exit");
	
	printf("\n Enter your choice:");
	scanf("%d", &ch);
	
	switch (ch)
	{
		case 1: printf("\n Enter The element to be pushedinto the stack:");
			scanf("%d", &n1);
			push(n1);
			break;
			
		case 2: pop();
			break;
			
		case 3: display();
			break;
			
		case 4: exit(1);
		
		default: printf("\n Wrong choice");
			break;
		}
	}
	
	}
	
void push(int x)
{
	if(top==4)
		{
			printf("STack ids full");
		}
		else
		{
			top++;
			stack[top]=x;
		}
	}
}

void pop(0
{
	if(top==-1)
	{
	printf("Stack is empty");
	}
	else 
	{
	a= stack[top];
	top--1;
	printf("\n %d element popped out of the stack", a);
	}
}


void display()
{
	int i;
	if(top==-1)
	printf("Stack is empty");
	else
	{
	printf("\n eLEMENTS IN THE STACK ARE");
	for(i=top; i>=0;i--)
		{
		 printf("\n %d", stack[i]);
		 }
		}
	}
