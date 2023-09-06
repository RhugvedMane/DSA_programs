#include<stdio.h>
#include <stdlib.h>
# define size 5

int queue [size];
int front, rear;

void init();
void enqueue(int);
void dequeue();
void dsiplay();

void init()
{
front=0;
rear=-1;
}


void enqueue(int x)
{
	if (rear==size-1)
		printf("Queue Overflow");
	else 
		{
			rear = rear +1;
			queue [rear] = x;
		}
}

/* Dequeue Method */
void dequeue()
{
	if(rear<front)
		printf("\n Queue is Empty");
	else
	{
		printf("\n %d is Deleted ", queue[front++]);
	}
}


void display ()
{
	int i;
	if(rear < front)
		printf("\n Queue Underflow");
	else
		for(i=front;i<=rear; i++)
			{
				printf("\n %d ", queue[i]);
			}
			
}


void main()
{
int ch;
int x;
init();

while(1)
{
printf("\n----Queue Operation----");
printf("\n1. Enqueue element");
printf("\n2. Dequeue Element");
printf("\n3. Display The Queue Elements");
printf("\n4. Exit");
printf("\nEnter Your Choice");
scanf("%d", &ch);
switch(ch)
{
case 1: printf("\n Enter the element to be enqueued:");
		scanf("%d" , &x);
		enqueue(x);
		break;
case 2: dequeue();
	break;
case 3: display();
	break;
case 4: exit(0);
	break;
default: printf("\n Wrong choice");
	break;
}
}
}
