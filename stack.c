#include<stdio.h>
#include <stdlib.h>

#define MAX 5
int top = -1;
int stack[MAX];
void push(int);
int pop();
int peek();

int main()
{	
	while(1)
	{
	int choice,n,i;
	printf("enter choice:\n 1:push 2:pop 3:peek 4.display 5.exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter number to be push:\n");
			scanf("%d",&n);
			push(n);
			break;
		case 2:
			if(top == -1)
				printf("Stack is empty\n");
			else
				printf("number poped from stack is :%d\n",pop());
			break;
		case 3:
			if(top == -1)
                                printf("Stack is empty\n");             
                        else
                                printf("number :%d\n",peek());       
                        break;		
		case 4:
			for( i = 0;i<MAX;i++)
				printf("%d \n",stack[i]);
			break;
		case 5:
			exit(0);
	}
}
}

void push(int d)
{
	if(top == MAX-1)
		printf("Stak is full\n");
	else
		stack[++top]=d;
}
int pop()
{
	return stack[top--];
}
int peek()
{
	return stack[top];
}
