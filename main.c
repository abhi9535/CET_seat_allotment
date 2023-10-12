#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdlib.h>
struct slist
{
	char name[30];
	char father_name[30];
	int sslc_roll;
	int pu_roll;
	int sslc_percent;
	int pu_percent;
	char caste[30];
	char state[30];
	int priority;
	struct slist *next;
};
typedef struct slist node;
node *head=NULL,*start,*new1;
struct slist2
{
	char name[30];
	char father_name[30];
	int sslc_roll;
	int pu_roll;
	int sslc_percent;
	int pu_percent;
	char caste[30];
	char state[30];
	int priority;
	struct slist2 *next;
};
typedef struct slist2 node2;
node2 *head2=NULL,*start2,*new2;
struct slist3
{
	char name[30];
	char father_name[30];
	int sslc_roll;
	int pu_roll;
	int sslc_percent;
	int pu_percent;
	char caste[30];
	char state[30];
	int priority;
	struct slist3 *next;
};
typedef struct slist3 node3;
node3 *head3=NULL,*start3,*new3;
struct slist4
{
	char name[30];
	char father_name[30];
	int sslc_roll;
	int pu_roll;
	int sslc_percent;
	int pu_percent;
	char caste[30];
	char state[30];
	int priority;
	struct slist4 *next;
};
typedef struct slist4 node4;
node4 *head4=NULL,*start4,*new4;
struct slist5
{
	char name[30];
	char father_name[30];
	int sslc_roll;
	int pu_roll;
	int sslc_percent;
	int pu_percent;
	char caste[30];
	char state[30];
	int priority;
	struct slist5 *next;
};
typedef struct slist5 node5;
node5 *head5=NULL,*start5,*new5;
struct slist6
{
	char name[30];
	char father_name[30];
	int sslc_roll;
	int pu_roll;
	int sslc_percent;
	int pu_percent;
	char caste[30];
	char state[30];
	int priority;
	struct slist6 *next;
};
typedef struct slist6 node6;
node6 *head6=NULL,*start6,*new6;
struct slist7
{
	char name[30];
	char father_name[30];
	int sslc_roll;
	int pu_roll;
	int sslc_percent;
	int pu_percent;
	char caste[30];
	char state[30];
	int priority;
	struct slist7 *next;
};
typedef struct slist7 node7;
node7 *head7=NULL,*start7,*new7;
void insert();
void display();
void fee();
int main()
{
	int ch;
	char op;
	system("cls");
	printf("\t\t NEW HORIZON COLLEGE OF ENGINNERING\n");
	printf("\tAUTONOMOUS COLLEGE PERMANENTLY AFFILIATED TO VTU,APPROVED BY AICTE AND UGC\n");
	printf("\tACCREDITED BY NAAC WITH 'A' GRADE,ACCREDITED BY NBA\n");
	printf("press y to proceed\n");
	op=getche();
	while(op=='y'||op=='Y')
	{
		printf("\n\n1.APPLICATION FOR ADMISSION\n 2.LIST OF SELECTED STUDENTS\n 3.DISPLAY FEE STRUCTURE\n");
		printf("enter the choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
		       insert();
		       printf("\t\tYOUR APPLICATION FORM IS APPLIED SUCCESSFULLY\n");
		       printf("\t\t\tTHANK YOU!!\n");
		       break;
		case 2:
			display();
			printf("\t\tTHANK YOU!!\n");
			break;
		case 3:
			fee();
			printf("\t\tTHANK YOU!!\n");
			break;
		default: printf("invalid choice\n");
			 break;
		}
		printf("press y to continue\n");
		op=getche();

	}
	getch();
	return 0;
}
void insert()
{
   int select;
  printf("\n1.automobile engineering\n 2.biotech engineering\n 3.chemical engineering\n 4.electrical engineering\n 5.electronics and communication engineering\n 6.computer science and engineering\n 7.information science and engineering\n");
  printf("enter the choice to which course you have to apply\n");
  scanf("%d",&select);
  switch(select)
  {
   case 1:
	if(head==NULL)
	{
		new1=(node*)malloc(sizeof(node));
		printf("enter the name\n");
		scanf("%s",&new1->name);
		printf("enter your father name\n");
		scanf("%s",&new1->father_name);
		printf("enter your sslc roll number\n");
		scanf("%d",&new1->sslc_roll);
		printf("enter your pu roll number\n");
		scanf("%d",&new1->pu_roll);
		printf("enter your sslc percentage\n");
		scanf("%d",&new1->sslc_percent);
		printf("enter your pu percentage\n");
		scanf("%d",&new1->pu_percent);
		printf("enter your caste\n");
		scanf("%s",&new1->caste);
		printf("enter your state\n");
		scanf("%s",&new1->state);
		printf("enter your cet rank\n");
		scanf("%d",&new1->priority);
		new1->next=NULL;
		head=new1;
	}
	else
	{
		new1=(node*)malloc(sizeof(node));
		printf("enter the name\n");
		scanf("%s",&new1->name);
		printf("enter your father name\n");
		scanf("%s",&new1->father_name);
		printf("enter your sslc roll number\n");
		scanf("%d",&new1->sslc_roll);
		printf("enter your pu roll number\n");
		scanf("%d",&new1->pu_roll);
		printf("enter your sslc percentage\n");
		scanf("%d",&new1->sslc_percent);
		printf("enter your pu percentage\n");
		scanf("%d",&new1->pu_percent);
		printf("enter your caste\n");
		scanf("%s",&new1->caste);
		printf("enter your state\n");
		scanf("%s",&new1->state);
		printf("enter your cet rank\n");
		scanf("%d",&new1->priority);
		      if(new1->priority<head->priority)
		      {
			new1->next=head;
			head=new1;
		      }
		      else
		      {
		       start=head;
		       while((start->next!=NULL)&&(start->next->priority>new1->priority))
		       {
			start=start->next;
			}
			new1->next=start->next;
			start->next=new1;
		      }
	}
	break;
      case 2:
	if(head2==NULL)
	{
		new2=(node2*)malloc(sizeof(node2));
		printf("enter the name\n");
		fflush(stdin);
		scanf("%s",&new2->name);
		printf("enter your father name\n");
		fflush(stdin);
		scanf("%s",&new2->father_name);
		printf("enter your sslc roll number\n");
		scanf("%d",&new2->sslc_roll);
		printf("enter your pu roll number\n");
		scanf("%d",&new2->pu_roll);
		printf("enter your sslc percentage\n");
		scanf("%d",&new2->sslc_percent);
		printf("enter your pu percentage\n");
		scanf("%d",&new2->pu_percent);
		printf("enter your caste\n");
		fflush(stdin);
		scanf("%s",&new2->caste);
		printf("enter your state\n");
		fflush(stdin);
		scanf("%s",&new2->state);
		printf("enter your cet rank\n");
		scanf("%d",&new2->priority);
		new2->next=NULL;
		head2=new2;
	}
	else
	{
		new2=(node2*)malloc(sizeof(node2));
		printf("enter the name\n");
		fflush(stdin);
		scanf("%s",&new2->name);
		printf("enter your father name\n");
		fflush(stdin);
		scanf("%s",&new2->father_name);
		printf("enter your sslc roll number\n");
		scanf("%d",&new2->sslc_roll);
		printf("enter your pu roll number\n");
		scanf("%d",&new2->pu_roll);
		printf("enter your sslc percentage\n");
		scanf("%d",&new2->sslc_percent);
		printf("enter your pu percentage\n");
		scanf("%d",&new2->pu_percent);
		printf("enter your caste\n");
		fflush(stdin);
		scanf("%s",&new2->caste);
		printf("enter your state\n");
		fflush(stdin);
		scanf("%s",&new2->state);
		printf("enter your cet rank\n");
		scanf("%d",&new2->priority);
		      if(new2->priority<head2->priority)
		      {
			new2->next=head2;
			head2=new2;
		      }
		      else
		      {
		       start2=head2;
		       while((start2->next!=NULL)&&(start2->next->priority>new2->priority))
		       {
			start2=start2->next;
			}
			new2->next=start2->next;
			start2->next=new2;
		      }
	}
	break;
	 case 3:
	if(head3==NULL)
	{
		new3=(node3*)malloc(sizeof(node3));
		printf("enter the name\n");
		fflush(stdin);
		scanf("%s",&new3->name);
		printf("enter your father name\n");
		fflush(stdin);
		scanf("%s",&new3->father_name);
		printf("enter your sslc roll number\n");
		scanf("%d",&new3->sslc_roll);
		printf("enter your pu roll number\n");
		scanf("%d",&new3->pu_roll);
		printf("enter your sslc percentage\n");
		scanf("%d",&new3->sslc_percent);
		printf("enter your pu percentage\n");
		scanf("%d",&new3->pu_percent);
		printf("enter your caste\n");
		fflush(stdin);
		scanf("%s",&new3->caste);
		printf("enter your state\n");
		fflush(stdin);
		scanf("%s",&new3->state);
		printf("enter your cet rank\n");
		scanf("%d",&new3->priority);
		new3->next=NULL;
		head3=new3;
	}
	else
	{
		new3=(node3*)malloc(sizeof(node3));
		printf("enter the name\n");
		fflush(stdin);
		scanf("%s",&new3->name);
		printf("enter your father name\n");
		fflush(stdin);
		scanf("%s",&new3->father_name);
		printf("enter your sslc roll number\n");
		scanf("%d",&new3->sslc_roll);
		printf("enter your pu roll number\n");
		scanf("%d",&new3->pu_roll);
		printf("enter your sslc percentage\n");
		scanf("%d",&new3->sslc_percent);
		printf("enter your pu percentage\n");
		scanf("%d",&new3->pu_percent);
		printf("enter your caste\n");
		fflush(stdin);
		scanf("%s",&new3->caste);
		printf("enter your state\n");
		fflush(stdin);
		scanf("%s",&new3->state);
		printf("enter your cet rank\n");
		scanf("%d",&new3->priority);
	       if(new3->priority<head3->priority)
		      {
			new3->next=head3;
			head3=new3;
		      }
		      else
		      {
		       start3=head3;
		       while((start3->next!=NULL)&&(start3->next->priority>new3->priority))
		       {
			start3=start3->next;
			}
			new3->next=start3->next;
			start3->next=new3;
		      }
	}
	break;
      case 4:
	if(head4==NULL)
	{
		new4=(node4*)malloc(sizeof(node4));
		printf("enter the name\n");
		fflush(stdin);
		scanf("%s",&new4->name);
		printf("enter your father name\n");
		fflush(stdin);
		scanf("%s",&new4->father_name);
		printf("enter your sslc roll number\n");
		scanf("%d",&new4->sslc_roll);
		printf("enter your pu roll number\n");
		scanf("%d",&new4->pu_roll);
		printf("enter your sslc percentage\n");
		scanf("%d",&new4->sslc_percent);
		printf("enter your pu percentage\n");
		scanf("%d",&new4->pu_percent);
		printf("enter your caste\n");
		fflush(stdin);
		scanf("%s",&new4->caste);
		printf("enter your state\n");
		fflush(stdin);
		scanf("%s",&new4->state);
		printf("enter your cet rank\n");
		scanf("%d",&new4->priority);
		new4->next=NULL;
		head4=new4;
	}
	else
	{
		new4=(node4*)malloc(sizeof(node4));
		printf("enter the name\n");
		scanf("%s",&new4->name);
		printf("enter your father name\n");
		scanf("%s",&new4->father_name);
		printf("enter your sslc roll number\n");
		scanf("%d",&new4->sslc_roll);
		printf("enter your pu roll number\n");
		scanf("%d",&new4->pu_roll);
		printf("enter your sslc percentage\n");
		scanf("%d",&new4->sslc_percent);
		printf("enter your pu percentage\n");
		scanf("%d",&new4->pu_percent);
		printf("enter your caste\n");
		scanf("%s",&new4->caste);
		printf("enter your state\n");
		scanf("%s",&new4->state);
		printf("enter your cet rank\n");
		scanf("%d",&new4->priority);
		      if(new4->priority<head4->priority)
		      {
			new4->next=head4;
			head4=new4;
		      }
		      else
		      {
		       start4=head4;
		       while((start4->next!=NULL)&&(start4->next->priority>new4->priority))
		       {
			start4=start4->next;
			}
			new4->next=start4->next;
			start4->next=new4;
		      }
	}
	break;
      case 5:
	if(head5==NULL)
	{
		new5=(node5*)malloc(sizeof(node5));
		printf("enter the name\n");
		scanf("%s",&new5->name);
		printf("enter your father name\n");
		scanf("%s",&new5->father_name);
		printf("enter your sslc roll number\n");
		scanf("%d",&new5->sslc_roll);
		printf("enter your pu roll number\n");
		scanf("%d",&new5->pu_roll);
		printf("enter your sslc percentage\n");
		scanf("%d",&new5->sslc_percent);
		printf("enter your pu percentage\n");
		scanf("%d",&new5->pu_percent);
		printf("enter your caste\n");
		scanf("%s",&new5->caste);
		printf("enter your state\n");
		scanf("%s",&new5->state);
		printf("enter your cet rank\n");
		scanf("%d",&new5->priority);
		new5->next=NULL;
		head5=new5;
	}
	else
	{
		new5=(node5*)malloc(sizeof(node5));
		printf("enter the name\n");
		scanf("%s",&new5->name);
		printf("enter your father name\n");
		scanf("%s",&new5->father_name);
		printf("enter your sslc roll number\n");
		scanf("%d",&new5->sslc_roll);
		printf("enter your pu roll number\n");
		scanf("%d",&new5->pu_roll);
		printf("enter your sslc percentage\n");
		scanf("%d",&new5->sslc_percent);
		printf("enter your pu percentage\n");
		scanf("%d",&new5->pu_percent);
		printf("enter your caste\n");
		scanf("%s",&new5->caste);
		printf("enter your state\n");
		scanf("%s",&new5->state);
		printf("enter your cet rank\n");
		scanf("%d",&new5->priority);
		      if(new5->priority<head5->priority)
		      {
			new5->next=head5;
			head5=new5;
		      }
		      else
		      {
		       start5=head5;
		       while((start5->next!=NULL)&&(start5->next->priority>new5->priority))
		       {
			start5=start5->next;
			}
			new5->next=start5->next;
			start5->next=new5;
		      }
	}
	       break;
      case 6:
	if(head6==NULL)
	{
		new6=(node6*)malloc(sizeof(node6));
		printf("enter the name\n");
		scanf("%s",&new6->name);
		printf("enter your father name\n");
		scanf("%s",&new6->father_name);
		printf("enter your sslc roll number\n");
		scanf("%d",&new6->sslc_roll);
		printf("enter your pu roll number\n");
		scanf("%d",&new6->pu_roll);
		printf("enter your sslc percentage\n");
		scanf("%d",&new6->sslc_percent);
		printf("enter your pu percentage\n");
		scanf("%d",&new6->pu_percent);
		printf("enter your caste\n");
		scanf("%s",&new6->caste);
		printf("enter your state\n");
		scanf("%s",&new6->state);
		printf("enter your cet rank\n");
		scanf("%d",&new6->priority);
		new6->next=NULL;
		head6=new6;
	}
	else
	{
		new6=(node6*)malloc(sizeof(node6));
		printf("enter the name\n");
		scanf("%s",&new6->name);
		printf("enter your father name\n");
		scanf("%s",&new6->father_name);
		printf("enter your sslc roll number\n");
		scanf("%d",&new6->sslc_roll);
		printf("enter your pu roll number\n");
		scanf("%d",&new6->pu_roll);
		printf("enter your sslc percentage\n");
		scanf("%d",&new6->sslc_percent);
		printf("enter your pu percentage\n");
		scanf("%d",&new6->pu_percent);
		printf("enter your caste\n");
		scanf("%s",&new6->caste);
		printf("enter your state\n");
		scanf("%s",&new6->state);
		printf("enter your cet rank\n");
		scanf("%d",&new6->priority);
		      if(new6->priority<head6->priority)
		      {
			new6->next=head6;
			head6=new6;
		      }
		      else
		      {
		       start6=head6;
		       while((start6->next!=NULL)&&(start6->next->priority>new6->priority))
		       {
			start6=start6->next;
			}
			new6->next=start6->next;
			start6->next=new6;
		      }
	}
	break;
      case 7:
	if(head7==NULL)
	{
		new7=(node7*)malloc(sizeof(node7));
		printf("enter the name\n");
		scanf("%s",&new7->name);
		printf("enter your father name\n");
		scanf("%s",&new7->father_name);
		printf("enter your sslc roll number\n");
		scanf("%d",&new7->sslc_roll);
		printf("enter your pu roll number\n");
		scanf("%d",&new7->pu_roll);
		printf("enter your sslc percentage\n");
		scanf("%d",&new7->sslc_percent);
		printf("enter your pu percentage\n");
		scanf("%d",&new7->pu_percent);
		printf("enter your caste\n");
		scanf("%s",&new7->caste);
		printf("enter your state\n");
		scanf("%s",&new7->state);
		printf("enter your cet rank\n");
		scanf("%d",&new7->priority);
		new7->next=NULL;
		head7=new7;
	}
	else
	{
		new7=(node7*)malloc(sizeof(node7));
		printf("enter the name\n");
		scanf("%s",&new7->name);
		printf("enter your father name\n");
		scanf("%s",&new7->father_name);
		printf("enter your sslc roll number\n");
		scanf("%d",&new7->sslc_roll);
		printf("enter your pu roll number\n");
		scanf("%d",&new7->pu_roll);
		printf("enter your sslc percentage\n");
		scanf("%d",&new7->sslc_percent);
		printf("enter your pu percentage\n");
		scanf("%d",&new7->pu_percent);
		printf("enter your caste\n");
		scanf("%s",&new7->caste);
		printf("enter your state\n");
		scanf("%s",&new7->state);
		printf("enter your cet rank\n");
		scanf("%d",&new7->priority);
		      if(new7->priority<head7->priority)
		      {
			new7->next=head7;
			head7=new7;
		      }
		      else
		      {
		       start7=head7;
		       while((start7->next!=NULL)&&(start7->next->priority>new7->priority))
		       {
			start7=start7->next;
			}
			new7->next=start7->next;
			start7->next=new7;
		      }
	}
		  break;
	default : printf("invalid choice\n");
		  break;
  }
}
void display()
{
int i;
 int sel;
  printf("1.automobile engineering\n 2.biotech engineering\n 3.chemical engineering\n 4.electrical engineering\n 5.electronics and communication engineering\n 6.computer science and engineering\n 7.information science and engineering\n");
  printf("enter the choice to display\n");
  scanf("%d",&sel);
  switch(sel)
  {
   case 1:
 if(head!=NULL)
 {
	start=head;
	printf("selected students are:\n");
	for(i=0;i<=1;i++)
	{
	printf("name = %s\n",start->name);
	printf("father name = %s\n",start->father_name);
	printf("state = %s\n",start->state);
	printf("cet rank = %d",start->priority);
	printf("\n");
	start=start->next;
	}
 }
 else
     printf("list of selected students is not present\n");
 break;
  case 2:
 if(head2!=NULL)
 {
	start2=head2;
	printf("selected students are:\n");
	for(i=0;i<=1;i++)
	{
	printf("name = %s\n",start2->name);
	printf("father name = %s\n",start2->father_name);
	printf("state = %s\n",start2->state);
	printf("cet rank = %d",start2->priority);
	printf("\n");
	start2=start2->next;
	}
 }
 else
     printf("list of selected students is not present\n");
 break;
  case 3:
 if(head3!=NULL)
 {
	start3=head3;
	printf("selected students are:\n");
	for(i=0;i<=1;i++)
	{
	printf("name = %s\n",start3->name);
	printf("father name = %s\n",start3->father_name);
	printf("state = %s\n",start3->state);
	printf("cet rank = %d",start3->priority);
	printf("\n");
	start3=start3->next;
	}
 }
 else
     printf("list of selected students is not present\n");
 break;
  case 4:
 if(head4!=NULL)
 {
	start4=head4;
	printf("selected students are:\n");
	for(i=0;i<=1;i++)
	{
	printf("name = %s\n",start4->name);
	printf("father name = %s\n",start4->father_name);
	printf("state = %s\n",start4->state);
	printf("cet rank = %d",start4->priority);
	printf("\n");
	start4=start4->next;
	}
 }
 else
     printf("list of selected students is not present\n");
 break;
  case 5:
 if(head5!=NULL)
 {
	start5=head5;
	printf("selected students are:\n");
	for(i=0;i<=1;i++)
	{
	printf("name = %s\n",start5->name);
	printf("father name = %s\n",start5->father_name);
	printf("state = %s\n",start5->state);
	printf("cet rank = %d",start5->priority);
	printf("\n");
	start5=start5->next;
	}
 }
 else
     printf("list of selected students is not present\n");
 break;
  case 6:
 if(head6!=NULL)
 {
	start6=head6;
	printf("selected students are:\n");
	for(i=0;i<=1;i++)
	{
	printf("name = %s\n",start6->name);
	printf("father name = %s\n",start6->father_name);
	printf("state = %s\n",start6->state);
	printf("cet rank = %d",start6->priority);
	printf("\n");
	start6=start6->next;
	}
 }
 else
     printf("list of selected students is not present\n");
 break;
  case 7:
 if(head7!=NULL)
 {
	start7=head7;
	printf("selected students are:\n");
	for(i=0;i<=1;i++)
	{
	printf("name = %s\n",start7->name);
	printf("father name = %s\n",start7->father_name);
	printf("state = %s\n",start7->state);
	printf("cet rank = %d",start7->priority);
	printf("\n");
	start7=start7->next;
	}
 }
 else
     printf("list of selected students is not present\n");
 break;
 default : printf("invalid choice\n");
	   break;
 }
 }
void fee()
 {
  int choice;
  printf("1.automobile engineering\n 2.biotech engineering\n 3.chemical engineering\n 4.electrical engineering\n 5.electronics and communication engineering\n 6.computer science and engineering\n 7.information science and engineering\n");
  printf("enter the choice\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
	   printf(" course : automobile enginnering\n year : 4\n sem : 8\n fee : 45,000\n");
	   break;
  case 2:
	   printf(" course : biotech enginnering\n year : 4\n sem : 8\n fee : 50,000\n");
	   break;
  case 3:
	   printf(" course : chemical enginnering\n year : 4\n sem : 8\n fee : 55,000\n");
	   break;
  case 4:
	   printf(" course : electrical enginnering\n year : 4\n sem : 8\n fee : 65,000\n");
	   break;
  case 5:
	   printf(" course : electronics and communication enginnering\n year : 4\n sem : 8\n fee : 65,000\n");
	   break;
  case 6:
	   printf(" course : computer science and enginnering\n year : 4\n sem : 8\n fee : 75,000\n");
	   break;
  case 7:
	   printf(" course : information science and enginnering\n year : 4\n sem : 8\n fee : 70,000\n");
	   break;
  default : printf("invalid choice\n");
	    break;
  }
}
