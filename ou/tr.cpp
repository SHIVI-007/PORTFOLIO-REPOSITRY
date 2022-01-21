
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 

 
struct Node
{
    int data;
    struct Node* link;
};
 
struct Node* top;
 

void push(int data)
{
     
   
    struct Node* temp;
    temp = new Node();
 
    
    if (!temp)
    {
        cout << " Overflow";
        exit(1);
    }
 
   
    temp->data = data;
 
    
    temp->link = top;
 
    
    top = temp;
}
 

int isEmpty()
{
    return top == NULL;
}
 

int peek()
{
     
    
    if (!isEmpty())
        return top->data;
    else
        exit(1);
}

void pop()
{
    struct Node* temp;
 
    // Check for stack underflow
    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    
    {
         
        
        temp = top;
 
        
        top = top->link;
 
        
        
        temp->link = NULL;
 
        
        free(temp);
    }
}