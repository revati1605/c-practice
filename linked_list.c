#include<stdio.h>
#include <stdlib.h>

struct student
{
	int roll_no;
	char name[20];
	struct student *link;
};
struct student * add_last(struct student*);
struct student * add_first(struct student*);
struct student * delete_last(struct student*);
struct student * delete_first(struct student*);
void display(struct student*);
struct student * add_pos(struct student*);
int main()
{
	struct student * head = NULL;
	int choice;
	while(1)
	{
		printf("Enter choice : 1.add_first 2.add_last 3.delete_first 4.delete_last 5.display 6.exit 7. add at specific position\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				head = add_first(head);
				break;
			case 2:
				head = add_last(head);
				break;
			case 3:
				head = delete_first(head);
				break;
			case 4: head = delete_last(head);
                                break;
			case 5: display(head);
				break;
			case 6:exit(0);
			case 7:head = add_pos(head);
			       break;

		}
	}
}

struct student * add_pos(struct student * ptr)
{
	int pos,i=1;
	struct student *newnode = NULL,*temp = NULL;
        newnode = (struct student*)calloc(1,sizeof(struct student));
        if(newnode == NULL)
                printf("memory not allocated\n");
        else
        {
                printf("enter roll number:\n");
                scanf("%d",&newnode->roll_no);
                printf("enter name:\n");
                scanf("%s",newnode->name);
		printf("enter position where you want to enter :\n");
		scanf("%d",&pos);
		temp = ptr;
		while(i<pos-1)
		{
			temp = temp->link;
			i++;
		}
		newnode ->link = temp->link;
		temp->link = newnode;
	}
	return ptr;
}

struct student * add_first(struct student *ptr)
{
	struct student *newnode = NULL;
	newnode = (struct student*)calloc(1,sizeof(struct student));
	if(newnode == NULL)
		printf("memory not allocated\n");
	else
	{
		printf("enter roll number:\n");
		scanf("%d",&newnode->roll_no);
		printf("enter name:\n");
		scanf("%s",newnode->name);
		newnode->link = ptr;
		ptr = newnode;
	}
	return ptr;
}

struct student * add_last(struct student* ptr)
{
	struct student *newnode = NULL, *temp = NULL;
	newnode = (struct student*)calloc(1,sizeof(struct student));
	if(newnode == NULL)
                printf("memory not allocated\n");
	else
	{
		printf("enter roll number:\n");
                scanf("%d",&newnode->roll_no);
                printf("enter name:\n");
                scanf("%s",newnode->name);
               	if(ptr == NULL)
			ptr = newnode;
		else
		{
			temp = ptr;
			while(temp->link!= NULL)
			{
				temp = temp->link;
			}
			temp->link = newnode;
		}
	}	
	return ptr;
}

void display(struct student* ptr)
{
	if(ptr == NULL)
		printf("List is empty\n");
	else
	{
		while( ptr != NULL)
		{
			printf("%d %s\n",ptr->roll_no,ptr->name);
			ptr = ptr->link;

		}
	}
}

struct student * delete_last(struct student* ptr)
{
	struct student * temp ,*prevnode;
	if(ptr == NULL)
		printf("List is empty\n");
	else
	{
		temp = ptr;
		while(temp->link != NULL)
		{
			prevnode = temp;
			temp = temp->link;
		}
		free(temp);
		prevnode->link = 0;
	}
		return ptr;
}

struct student * delete_first(struct student*ptr)
{
	struct student *temp = NULL;
	if(ptr == NULL)
		printf("List is empty\n");
	else
	{
		temp = ptr;
		ptr = ptr->link;
		free(temp);
		temp = NULL;
	}
	return ptr;
}

