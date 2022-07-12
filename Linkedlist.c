#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node * next;

}*p,*tmp,*tmp1;
void insert_end(int);
void insert_beg(int);
void ldelete(int);
void display();
void main()
{
    int val,n;
    p=NULL;
    do
    {
        printf("\n*********MENU*******");
        printf("\n1.Insert at end");
        printf("\n2.Insert at beg");
        printf("\n4.delete at beg");
        printf("\n5.delete at end");
        printf("\n6.display");
        printf("\n7.exit");
        printf("\n enter the choice :");
        scanf("%d",&n);
        switch(n)
        {
            case 1:printf("\n enter the choice :");
            scanf("%d",&val);
            insert_end(val);
            break;
            case 2:printf("\n enter the choice :");
            scanf("%d",&val);
            insert_beg(val);
            break;
            case 4:
            delete_beg();
            case 5:
            delete_end();
            case 6:
            display();
            case 7:
            exit(0);
            default:
            printf("\n wrong choice !");
            break;

        }
        printf("\n do want to cont...");
    }while('y'==getch());
        }
    void insert_end(int ele)
    {
        tmp=p;
        tmp1=(struct node*)malloc(sizeof(struct node));
        tmp1->data=ele;
        tmp->next=NULL;
        if(p==NULL)
        p=tmp1;
        else{
            while(tmp->next!=NULL)
            tmp=tmp->next;
            tmp->next=tmp1;
        }
    }

    void insert_beg(int ele)
    {
        tmp=p;
        tmp1=(struct node*)malloc(sizeof(struct node));
        tmp1->data=ele;
        tmp1->next=p;
        p=tmp1;
    }
    void delete_beg()
    {
        tmp=p;
        if(p==NULL)
        printf("\n no of delete elemnts");
        else{printf("\n elements to be deleted -%d",p->data);
        p=p->next;
        }
    }
    void delete_end()
    {
        tmp=p;
        struct node*pre;
        if(p==NULL)
        printf("\n no elements to be deleted");
        else if(p->next==NULL)
        {
            printf("\n elements deleted -%d",p->data);
            p=NULL;
        }
        else
        {
            while (tmp->next!=NULL){
                pre=tmp;
                tmp=tmp->next;
            }
            pre->next=NULL;
            printf("\n elements deleted -%d",tmp->data);
            
        }
    }
    void display()
    {
        tmp=p;
        while(tmp!=NULL)
        {
            printf("\n %d",tmp->data);
            tmp=tmp->next;
        }
    }
    