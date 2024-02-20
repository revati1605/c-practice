#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
struct node *front = 0;
struct node *rear = 0;
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
	struct node *newnode = NULL;
	newnode = (struct node *)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("Memory not allocated\n");
	}
	else
	{
		newnode->data = d;
		newnode->next = NULL;
		if(front == NULL && rear == NULL)
			front = rear = newnode;
		else
		{
			rear->next = newnode;
			rear = newnode;
		}
}
}
void dequeue()
{

		struct node *temp;
		temp = front;
		if(temp == NULL)
			printf("Quesue is empty\n");
		else
		{	
			printf("Dequeued data is %d\n",front->data);
			front = front->next;
			free(temp);

	}

}

void display()
{	
	struct node *temp;
	temp = front;
	if(front == 0 && rear == 0)
        	printf("Queue is empty\n");
	else
	{
		while(temp != 0)
		{
			printf("%d\n",temp->data);
		temp=temp->next;
		}
	}
}
void peek()
{
	 if(front == 0 && rear == 0)
                printf("Queue is empty\n");
	else
		printf("Top element is : %d\n",front->data);
}
		


