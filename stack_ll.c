#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node* top = 0;
void push(int);
void pop();
void peek();
void display();
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
                       	pop();
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

void push(int data)
{
	struct node * newnode = NULL;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("Memory nt aloocated\n");
	}
	else
	{
		newnode->data = data;
		newnode->link = top;
		top = newnode;
	}
}

void pop()
{
	struct node *temp;
	temp = top;
	if(top == NULL)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("poped data is:%d\n",top->data);
		top = top->link;
		free(temp);
	}
}
void display()
{
	struct node * temp;
	temp = top;
	if(top == NULL)
	{
		printf("stack is empty\n");
	}
	else
	{
		while(temp != NULL)
		{
			printf("%d\n",temp->data);
			temp = temp->link;
		}
	}
}
void peek()
{
        if(top == NULL)
        {
                printf("stack is empty\n");
        }
	else
	{
		printf("top of stack is :%d\n",top->data);
	}
}
