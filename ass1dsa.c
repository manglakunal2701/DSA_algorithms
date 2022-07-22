#include<stdio.h>
#include<stdlib.h>
// typedef struct node
// {
//     int info;
//     struct node *next;
// } nodetype;

// nodetype *push(nodetype *, int);
// void print(nodetype*,nodetype*);
// int main()
// {

//     nodetype *r = NULL;
//     nodetype *l = NULL;
//     int ch, n;
//     do
//     {
//         printf("Press:1.Push 2.Print 0.exit:\n");

//         scanf("%d", &ch);
//         switch (ch)
//         {
//         case 1:
//             scanf("%d", &n);
//             r = push(r, n);
//             if (l == NULL)
//                 l = r;
//             break;
//         case 2:
//              print(l,r);
//             break;
      
//         default:
//             break;
//         }
//     } while (ch!=0);
//     return 0;
// }
// nodetype *push(nodetype *r, int n)
// {
//     nodetype *p = NULL;
//     p = (nodetype *)malloc(sizeof(nodetype));
//     if (r == NULL)
//     {
//         p->info = n;
//         r = p;
//     }
//     else
//     {
//         p->info = n;
//         r->next = p;
//         r = p;
//     }
//     r->next = NULL;
//     return r;
// }
// void print(nodetype*l,nodetype* r)
// {
//     if(l==NULL)
//     return;
//     print(l->next,r);
//     printf("%d ",l->info);

// }
// //1st  done;
// typedef struct node{
//     int data;
//     struct node *next;
// }nodetype;
// nodetype* push(nodetype*,int);
// void print(nodetype*);
// int main()
// {
//     nodetype* top=NULL;
//     int ch,x;
//     do{
//         printf("Enter the choice 1.PUSH 2.PRINT else 0:\n");
//         scanf("%d",&ch);
//         switch(ch)
//         {
//             case 1:
//                 printf("enter data\n");
//                 scanf("%d",&x);
//                 top=push(top,x);
//                 break;
//             case 2:
//                 print(top);

//             default:
//             break;
//         }
//     }while(ch<=2 && ch>0);
//     return 0;
// }
// nodetype* push(nodetype* R,int x)
// {
//     nodetype* ptr=NULL;
//         ptr=(nodetype*)malloc(sizeof(nodetype));
//             ptr->data=x;
//                 ptr->next=R;
//                 R=ptr;
//     return R;
// }
// void print(nodetype* top)
// {
//     if(top==NULL)
//     return;
//     print(top->next);
//     printf("%d ",top->data);
// }
// //2nd done;;;
// typedef struct node{
//     int data;
//     struct node *next;
// }nodetype;
// void inputch(nodetype* ,nodetype*);
// void deletenode(nodetype*,nodetype* ,int);
// int main()
// {
//     nodetype *L=NULL,*R=NULL,*ptr=NULL;
//     int ch,x;
//     while(1)
//     {
//         ptr=(nodetype*)malloc(sizeof(nodetype));
//         if(ptr!=NULL)
//         {
//             printf("Enter the data\n");
//             scanf("%d",&x);
//             ptr->data=x;
//             if(L==NULL && R==NULL)
//             {
//                 L=R=ptr;
//             }
//             else
//             {
//                 R->next=ptr;
//                 R=ptr;
//             }
//         }
//         printf("Enter 0 for exit else 1:");
//         scanf("%d",&ch);
//         if(ch==0)
//             break;
//     }
//     R->next=NULL;
//     ptr=L;
//     R=L;
//     while(ptr!=NULL)
//     {
//         printf("%d ",ptr->data);
//         ptr=ptr->next;
//     }
//     inputch(R,L);
// }
// void inputch(nodetype* R,nodetype*L)
// {
//     int ch,flag=-1;;
//     printf("Enter the node you want to search\n");
//     scanf("%d",&ch);
//     while(R!=NULL)
//     {
//         if(R->data==ch)
//             {
//                 printf("%d\n",R->data);
//                 flag=0;
//                 break;
//             }
//         R=R->next;
//     } 
//     if(flag==0)
//     {
//         printf("Found\n");
//         deletenode(L,R,R->data);
//     }
//     else
//     printf("Not found");   

// }
// void deletenode(nodetype* L,nodetype*R,int R1)
// {
//     nodetype*P=NULL;
//     nodetype*temp=L;
//     nodetype* ptr=L;
//     if(L->data==R1)
//     {
//         P=L;
//         L=L->next;
//         free(P);
//     }
//     else
//     {
//         while(ptr->next->data!=R1)
//         {
//             ptr=ptr->next;
//         }
//         temp=ptr->next;
//         ptr->next=temp->next;
//         free(temp);
//     }
//     R=L;
//     printf("Node after deletion\n");
//     while(R!=NULL)
//     {
//         printf("%d ",R->data);
//         R=R->next;
//     }    
// }
// //3rd done
// typedef struct node{
//     int data;
//     struct node *next;
// }nodetype;
// nodetype* push(nodetype*,int );
// void print(nodetype*,nodetype*);
// void split(nodetype* );
// int main()
// {
//     nodetype* L=NULL;
//     nodetype* R=NULL;
//     int ch,n;
//     do{
//         printf("Enter 1.PUSH 2.SPLIT 0.EXIT:\n");
//         scanf("%d",&ch);
//         switch (ch)
//         {
//         case 1: R=push(R,n);
//         if(L==NULL)
//         {
//             L=R;
//         }
//         break;
//         case 2:
//         split(L);
//         default:
//             break;
//         }
//     }while(ch!=0);
// }
// nodetype* push(nodetype*R,int x)
// {
//     nodetype*ptr=NULL;
//      ptr=(nodetype*)malloc(sizeof(nodetype));
//         if(ptr!=NULL)
//         {
//             printf("Enter the data\n");
//             scanf("%d",&x);
//             ptr->data=x;
//             if(R==NULL)
//             {
//                 R=ptr;
//             }
//             else
//             {
//                 R->next=ptr;
//                 R=ptr;
//             }
//         }
//         R->next=NULL;
//         return R;
// }
// void split(nodetype* L)
// {
//     nodetype*temp=L;
//     nodetype* p=NULL;
//     int ch;
//     printf("Enter the choice from where you want to split\n");
//     scanf("%d",&ch);
//     while(temp->next->data!=ch && temp!=NULL)
//     {
//         temp=temp->next;
//     }
//     p=temp->next;
//     temp->next=NULL;
//     temp=L;
//     printf("list after split:\n");
//     while(temp!=NULL)
//     {
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }
//     printf("\n");
//     while(p!=NULL)
//     {
//         printf("%d ",p->data);
//         p=p->next;
//     }
//     printf("\n"); 
// }
// //4th done;;;
// typedef struct node{
//     int data;
//     struct node *next;
// }nodetype;

// int checkdata(int );
// void print(nodetype* );
// int main()
// {
//     nodetype *L=NULL,*R=NULL,*ptr=NULL;
//     int ch,x,count=0;
//     while(1)
//     {
//         ptr=(nodetype*)malloc(sizeof(nodetype));
//         if(ptr!=NULL)
//         {
//             printf("Enter the data\n");
//             scanf("%d",&x);
//             ptr->data=x;
//             if(L==NULL && R==NULL)
//             {
//                 L=R=ptr;
//             }
//             else
//             {
//                 R->next=ptr;
//                 R=ptr;
//             }
//         }
//         printf("Enter 0 for exit else 1:");
//         scanf("%d",&ch);
//         if(ch==0)
//             break;
//     }
//     R->next=NULL;
//     ptr=L;
//     R=L;
//     print(ptr);
// }
// void print(nodetype* ptr)
// {
//     int m=0,count=0;
//     while(ptr!=NULL)
//     {
//         printf("%d ",ptr->data);
//         m=checkdata(ptr->data);
//         if(m==1)
//         {
//             count++;
//         }
//         ptr=ptr->next;
//     }
//     printf("\n palindrome numbers in list are :%d",count);
// }
// int checkdata(int n)
// {
//     int reversed = 0, remainder;
//     int original=n;
//      int m=0;
//     while (n != 0) {
//         remainder = n % 10;
//         reversed = reversed * 10 + remainder;
//         n /= 10;
//     }
//     if (original == reversed)
//     {
//         m++;
//         return (m);
//     }
// }
////5nd done/////////////////////////////
