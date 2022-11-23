#include <stdio.h>
#define MAX 50
void insert();
void delete();
void display();
int queue[MAX];
int rear = -1;
int front = 0;
main()
{
int choice;
while (1)
{
printf("1.Insert element to queue \n");
printf("2.Delete element from queue \n");
printf("3.Display all elements of queue \n");
printf("4.Quit \n");
printf("Enter your choice : ");
scanf("%d", &choice);
switch (choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("Wrong choice \n");
}
}
}

void insert()
{
int item;
if (rear == MAX - 1)
printf("Queue Overflow \n");
else
{
printf("Inset the element in queue : ");
scanf("%d", &item);
rear = rear + 1;
queue[rear] = item;
}
}

void delete()
{
if (front > rear)
{
printf("Queue Underflow \n");
return ;
}
else
{
printf("Element deleted from queue is : %d\n", queue[front]);
front = front + 1;
}
}

void display()
{
int i;
if (front > rear)
printf("Queue is empty \n");
else
{
printf("Queue is : \n");
for (i = front; i <= rear; i++)
printf("%d\n ", queue[i]);
printf("\n");
}
}
