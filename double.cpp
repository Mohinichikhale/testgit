#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
    int data;
    struct node * prev;
    struct node * next;
}*head, *end;
 

void createList(int n);
void displayList();

void insertAtBeginning(int data);
void insertAtEnd(int data);
void insertAtBN(int data, int position);
void DlListDeleteFirstNode();
void DlListDeleteendNode();
void DlListDeleteAnyNode(int pos);
 
int main()
{
               
    int n, data, choice=1, a,insPlc;
 
               
    head = NULL;
    end = NULL;
   
    
               printf("\n       Create a doubly list        \n ");
               printf("\n-----------------------------------------\n");
    printf("\n Enter the total number of nodes: ");
    scanf("%d",&n);
    createList(n);
    displayList();

 

    while(choice != 7)
    {
        
        printf("\n         Doubly linked list \n");
        printf("-----------------------------------------\n");
  
        printf("1. Insert node at beginning\n");
        printf("2. Insert node at end\n");
        printf("3. Insert node at a particular position\n");
        printf("4. Delete the first node\n");
        printf("5. Delete the end node\n");
        printf("6. Delete the node at a particular position \n");
        printf("7. Exit\n");
        printf("--------------------------------------------\n");
       
    
        printf(" Enter your choice : ");
        scanf("%d",&choice);
 
        
        switch(choice)
        {
           
            case 1:
                printf("\n Enter data of first node : ");
                scanf("%d",&data);
 
                insertAtBeginning(data);
                displayList();
                break;
            case 2:
                printf("\n Enter data of end node : ");
                scanf("%d",&data);
 
                insertAtEnd(data);
                displayList();
                break;
            case 3:
                printf("\n Enter the position(0 to Totalnode+1) where you want to insert new node: ");
                scanf("%d",&n);
                printf("\n Enter inserting data value: ");
                scanf("%d",&data);
 
                insertAtBN(data,n);
                displayList();
                break;
            case 4:
           
               DlListDeleteFirstNode();
                displayList();
                break;
               
            case 5:
           
               DlListDeleteendNode();
                displayList();
            
                break;
               
            case 6:
           
               
               printf(" Enter the position(1 to Totalnode) to delete a node : ");
               scanf("%d",&insPlc);
                                                                                                        
               DlListDeleteAnyNode(insPlc);
               displayList();
            
                break;
               
            case 7:
               printf("Stop program.Exit ");
                break;
            default:
                printf("\n Error! Invalid choice...Try again. ");
        }
    }
    return 0;
}
 

void createList(int n)
{
               
    int i, data;
    struct node *newNode;
 
            
    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));
 
               
        printf(" Enter data of first node: ");
        scanf("%d",&data);
 
        head->data = data;
        head->prev = NULL;
        head->next = NULL;
 
        end = head;
 
       
        
        for(i=2; i<=n; i++)
        {
               
            newNode = (struct node *)malloc(sizeof(struct node));
                             
                                    
            printf(" Enter data of next node: ");
            scanf("%d", &data);
 
            newNode->data = data;
            newNode->prev = end; 
            newNode->next = NULL;
 
            end->next = newNode; 
            end = newNode;          
        }
 
                            
        printf("\n........list is created........\n");
    }
}

void displayList()
{
            
    struct node * temp;
    int n = 1;
 
    
    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
               
        temp = head;
        printf("\n Data in the list:\n");
        printf("------------------\n");
        while(temp != NULL)
        {
            printf("Data of %d node = %d\n", n, temp->data);
 
            n++;
 
            
            temp = temp->next;
        }
    }
}

 

void insertAtBeginning(int data)
{
               
    struct node * newNode;
 
               
    if(head == NULL)
    {
        printf("\n Error! List is Empty!\n");
    }
    else
    {
               
        newNode = (struct node *)malloc(sizeof(struct node));
 
        newNode->data = data;
        newNode->next = head;
        newNode->prev = NULL; 
        head->prev = newNode;
 
        
        head = newNode;
    }
}
 

void insertAtEnd(int data)
{
        
    struct node * newNode;
              
               
    if(end == NULL)
    {
        printf("\n Error! List is empty!\n");
    }
    else
    {
               
        newNode = (struct node *)malloc(sizeof(struct node));
 
               
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = end;
 
        end->next = newNode;
        end = newNode;
    }
}
 

void insertAtBN(int data, int position)
{
            
    int i;
    struct node * newNode, *temp;
              
        
    if(head == NULL)
    {
        printf("\n Error! List is empty!\n");
    }
    else
    {
              
        temp = head;
        i=1;
 
        while(i<position-1 && temp!=NULL)
        {
            temp = temp->next;
            i++;
        }
 
                              
        if(position == 0 || position == 1)
        {
               
            insertAtBeginning(data);
        }
        
        else if(temp == end)
        {
               
            insertAtEnd(data);
        }
        else if(temp!=NULL)
        {
            
            newNode = (struct node *)malloc(sizeof(struct node));
 
            newNode->data = data;
            newNode->next = temp->next; 
            newNode->prev = temp;          
 
            if(temp->next != NULL)
            {
                
                temp->next->prev = newNode;
            }
        
            temp->next = newNode;
        }
        else
        {

            printf("\n Error! Invalid position...Try again.\n");
        }
    }
}
 
void DlListDeleteFirstNode()
{
               
    struct node * NodeToDel;
   
        
               if(head == NULL)
    {
        printf("\n Delete is not possible.List is Empty.\n");
    }
    else
    {
        NodeToDel = head;
        head = head->next;   
        head->prev = NULL;      
        free(NodeToDel);            
    }
}
 
void DlListDeleteendNode()
{
    struct node * NodeToDel;
 
    if(end == NULL)
    {
        printf(" Delete is not possible.List is Empty.\n");
    }
    else
    {
        NodeToDel = end;
        end = end->prev;    
        end->next = NULL;     
        free(NodeToDel);            
    }
}
 
void DlListDeleteAnyNode(int pos)
{
               
    struct node *curNode;
    int i;
 
    curNode = head;
   
    
    for(i=1; i<pos && curNode!=NULL; i++)
    {
        curNode = curNode->next;
    }
 
    if(pos == 1)
    {
        DlListDeleteFirstNode();
    }
    else if(curNode == end)
    {
        DlListDeleteendNode();
    }
    else if(curNode != NULL)
    {
        curNode->prev->next= curNode->next;
        curNode->next->prev = curNode->prev;
 
        free(curNode); 
    }
    else
    {
        printf(" Invalid position!...Try again.\n");
    }
}
 
