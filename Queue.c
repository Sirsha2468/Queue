 #include<stdio.h>
 #define LIMIT 10
 int QUEUE[LIMIT],front=-1,rear=-1;
 
 void insertqueue(int num);
 int delqueue();
 
 void main()
 {
 	int item,choice;
 	do
 	{
 		printf("\n\tQueue Using Array\n\t1.Insertion\n\t2.Deletion\n\t3.Exit\n\tWhich operation you have want in queue?");
 		scanf("%d",&choice);
 		switch(choice)
 		{
 		case 1 :printf("\n\tEnter data to insert in queue:");
 		scanf("%d",&item);
 		break;
 		case 2:printf("\nDeleted data is:%d",delqueue());
 		break;
 		case 3:break;
 		default:printf("\n\tEnter the correct choice:");
		}	
	}
	while(choice!=3);
 } 
 void insertqueue(int num)
{
 if(rear==LIMIT-1)
 	{
 	printf("\n\tQueue Overflow");
 	return;
 	}
 if(rear==-1)
 ++front;
 QUEUE[++rear]=num;
	}

int delqueue()
{
	int item;
	
	if(front==-1)

	{

		printf("\nQueue Underflow");
		return 0;

	}
	item=QUEUE[front];
	
	if(front==rear)
	front=rear-1;
	else
	++front;
	
	return item;

	}
	
