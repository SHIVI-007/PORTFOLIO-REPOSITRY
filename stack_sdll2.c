#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
    int val;
    struct node *left;
    struct node *right;
};
struct node *head;
int main()
{
    int n;
    
    printf("\n............................................................................\n");
    printf(" 1.push \n 2.pop \n 3.display \n 4.exit \n");
    printf("please enter the choice :");
    scanf("%d",&n);
    switch (n)
    {
    case 1:void push();
        break;
    case 2:void pop();
        break;
    case 3:void display();
        break;
    default:printf("exiting...");
        break;
    }


}
 void push()
 {   
     int val;
     struct node* ptr=(struct node*)malloc(sizeof(struct node)); 
     if(ptr==NULL)
     {
         printf("STACK IS OVERFLOW");

     }
     else
     {
         

     }
 }


