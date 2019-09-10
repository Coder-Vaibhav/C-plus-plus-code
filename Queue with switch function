#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 8
void enque();
void deque();
void display();
int que[max],rear=-1,front=-1;
void main()
{
 int ch,x;
 printf("( NOTE: You can add only %d number of Values in QUEUE )\n",max);
 x:
 printf("\n* Vaibhav Queue MENU : ");
 printf("\n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit \n ");
 printf("_SELECT OPTION_? :\t\t");
 scanf("%d",&ch);
 if(ch)
 {
  switch(ch)
  {
  case 1:enque();
	break;
  case 2:deque();
	break;
  case 3:display();
	break;
  case 4:exit(0);
  default:printf("\t Your Choice Is INVALID!!!");
  }
  goto x;
 }
}

void enque()
{
int item;
 if(rear==max-1)
  {
   printf("\n The Queue is fulled .");
   return;
  }
 else
  {
   printf("\n Enter a DATA item in queue: \t");
   scanf("%d",&item);
   rear++;
   que[rear]=item;
   printf("\n Number Pushed is %d ",que[rear]);
   if(front==-1)
   front=0;
   return;
  }
}

void deque()
{
int r;
 if(front==-1)
 {
  printf("\n The Queue is Empty . ");
  return;
 }
 else
 {
  r=que[front];
  if(front==rear)
  {
  front=rear=-1;
  }
  else
  {
  front++;
  }
  printf("The Deleted Item is %d ",r);
 }
return;
}

void display()
{
int d;

 if(front==-1)
 {
 printf("\n No data is available..!");
 return;
 }
 printf("The UPDATED data in QUEUE :\n");
  for(d=front;d<(rear+1);d++)
   printf("%d\n",que[d]);
}
