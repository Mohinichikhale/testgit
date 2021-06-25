#include<stdio.h>
#include<stdlib.h>

struct node
{
        int info;
        struct node *link;
};

struct node *create_list(struct node *start);
void display(struct node *start);

void search(struct node *start,int data);
struct node *insertatbeg(struct node *start,int data);
struct node *insertatend(struct node *start,int data);
struct node *insertafter(struct node *start,int data,int item);
struct node *insertbefore(struct node *start,int data,int item );
struct node *insertatpos(struct node *start,int data,int pos);
struct node *del(struct node *start,int data);


int main()
{
        struct node *start=NULL;
        int choice,data,item,pos;


        while(1)
        {
                printf("1.Create List\n");
                printf("2.Display\n");
                printf("3.Search\n");
                printf("4.insert to empty list / Add at beginning\n");
                printf("5.insert at end\n");
                printf("6.insert after node\n");
                printf("7.insert before node\n");
                printf("8.insert at position\n");
                printf("9.Delete\n");
                
                printf("10.Quit\n\n");

                printf("Enter your choice : ");
                scanf("%d",&choice);

                switch(choice)
                {
                 case 1:
                        start=create_list(start);
                        break;
                 case 2:
                        display(start);
                        break;
                 
                 case 3:
                        printf("Enter the element to be searched : ");
                        scanf("%d",&data);
                        search(start,data);
                        break;
                 case 4:
                        printf("Enter the element to be inserted : ");
                        scanf("%d",&data);
                        start=insertatbeg(start,data);
                        break;
                 case 5:
                        printf("Enter the element to be inserted : ");
                        scanf("%d",&data);
                        start=insertatend(start,data);
                        break;
                 case 6:
                        printf("Enter the element to be inserted : ");
                        scanf("%d",&data);
                        printf("Enter the element after which to insert : ");
                        scanf("%d",&item);
                        start=insertafter(start,data,item);
                        break;
                 case 7:
                        printf("Enter the element to be inserted : ");
                        scanf("%d",&data);
                        printf("Enter the element before which to insert : ");
                        scanf("%d",&item);
                        start=insertbefore(start,data,item);
                        break;
                 case 8:
                        printf("Enter the element to be inserted : ");
                        scanf("%d",&data);
                        printf("Enter the position at which to insert : ");
                        scanf("%d",&pos);
                        start=insertatpos(start,data,pos);
                        break;
                 case 9:
                        printf("Enter the element to be deleted : ");
                        scanf("%d",&data);
                        start=del(start, data);
                        break;      
                 case 10:
                         exit(1);
                 default:
                         printf("Wrong choice\n");
                }
        }

        return 0;
}

struct node *create_list(struct node *start)
{
        int i,n,data;
        printf("Enter the number of nodes : ");
        scanf("%d",&n);
        start=NULL;
        if(n==0)
                return start;

        printf("Enter the element to be inserted : ");
        scanf("%d",&data);
        start=insertatbeg(start,data);

        for(i=2;i<=n;i++)
        {
                printf("Enter the element to be inserted : ");
                scanf("%d",&data);
                start=insertatend(start,data);
        }
        return start;
}

void display(struct node *start)
{
        struct node *p;
        if(start==NULL)
        {
                printf("List is empty\n");
                return;
        }
        p=start;
        printf("List is :\n");
        while(p!=NULL)
        {
                printf("%d ",p->info);
                p=p->link;
        }
        printf("\n\n");
}



void search(struct node *start,int item)
{
        struct node *p=start;
        int pos=1;
        while(p!=NULL)
        {
                if(p->info==item)
                {
                        printf("Item %d found at position %d\n",item,pos);
                        return;
                }
                p=p->link;
                pos++;
        }
        printf("Item %d not found in list\n",item);
}

struct node *insertatbeg(struct node *start,int data)
{
        struct node *tmp;
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info=data;
        tmp->link=start;
        start=tmp;
        return start;
}

struct node *insertatend(struct node *start,int data)
{
        struct node *p,*tmp;
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info=data;
        p=start;
        while(p->link!=NULL)
                p=p->link;
        p->link=tmp;
        tmp->link=NULL;
        return start;
}

struct node *insertafter(struct node *start,int data,int item)
{
        struct node *tmp,*p;
        p=start;
        while(p!=NULL)
        {
                if(p->info==item)
                {
                        tmp=(struct node *)malloc(sizeof(struct node));
                        tmp->info=data;
                        tmp->link=p->link;
                        p->link=tmp;
                        return start;
                }
                p=p->link;
        }
        printf("%d not present in the list\n",item);
        return start;
}

struct node *insertbefore(struct node *start,int data,int item)
{
        struct node *tmp,*p;
        if(start==NULL )
        {
                printf("List is empty\n");
                return start;
        }
        
        if(item==start->info)
        {
                tmp=(struct node *)malloc(sizeof(struct node));
                tmp->info=data;
                tmp->link=start;
                start=tmp;
                return start;
        }
        p=start;
        while(p->link!=NULL)
        {
                if(p->link->info==item)
                {
                        tmp=(struct node *)malloc(sizeof(struct node));
                        tmp->info=data;
                        tmp->link=p->link;
                        p->link=tmp;
                        return start;
                }
                p=p->link;
        }
        printf("%d not present in the list\n",item);
        return start;
}

struct node *insertatpos(struct node *start,int data,int pos)
{
        struct node *tmp,*p;
        int i;
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info=data;
        if(pos==1)
        {
                tmp->link=start;
                start=tmp;
                return start;
        }
        p=start;
        for(i=1; i<pos-1 && p!=NULL; i++)
                p=p->link;
        if(p==NULL)
                printf("There are less than %d elements\n",pos);
        else
        {
                tmp->link=p->link;
                p->link=tmp;
        }
        return start;
}

struct node *del(struct node *start,int data)
{
        struct node *tmp,*p;
        if(start==NULL)
        {
                printf("List is empty\n");
                return start;
        }
        
        if(start->info==data)
        {
                tmp=start;
                start=start->link;
                free(tmp);
                return start;
        }
        
        p=start;
        while(p->link!=NULL)
        {
                if(p->link->info==data)
                {
                        tmp=p->link;
                        p->link=tmp->link;
                        free(tmp);
                        return start;
                }
                p=p->link;
        }
        printf("Element %d not found\n",data);
        return start;
}


