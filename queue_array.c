#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int rear = -1;
int front = -1;
int queue[MAX];
void enqueue(int );
void dequeue();
void peek();
void display();

int main()
{
        while(1)
        {
        int choice,n,i;
        printf("enter choice:\n 1:Enqueue 2:Dequeue 3:peek 4.display 5.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
                case 1:
                        printf("Enter number to be enqueue:\n");
                        scanf("%d",&n);
                        enqueue(n);
                        break;
                case 2:
                        dequeue();
                        break;
                case 3:
                       peek();
                        break;
                case 4:
                        display();
                        break;
                case 5:
                        exit(0);
        }
}
}


void enqueue(int d)
{
	if(rear == MAX-1)
	{
		printf("queue is full\n");
	}
	else if(front == -1 && rear == -1)
	{
		front =rear = 0;
		queue[rear] = d;
	}
	else
	queue[++rear]=d;
}

void dequeue()
{
	if(front == -1 && rear == -1)
		printf("Queue is empty\n");
	else if(front == rear)
		front=rear = -1;
	else
	{
		printf("dequeued element is : %d\n",queue[front++]);
	}
}

void display()
{	
	int i;
	if(front == -1 && rear == -1)
        	printf("Queue is empty\n");
	else
		for(i=front;i<rear+1;i++)
			printf("%d\n",queue[i]);
}
void peek()
{
	 if(front == -1 && rear == -1)
                printf("Queue is empty\n");
	else
		printf("Top element is : %d\n",queue[front]);
}
		


