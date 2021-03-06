#include<iostream>
#include<process.h>
 
using namespace std;
 
struct Node
{
    int data;
    Node *next;
}*front=NULL, *rear=NULL,*p,*q;
 
Node *newnode(int x)
{
    q=new Node;
    q->data=x;
    q->next=NULL;
    return(q);
}
 
void enqueue(Node *eq)
{
    if(front==NULL)

	{
		
        front=rear=eq;
        front->next=NULL;
    }
    
    
    else
    {
        rear->next=eq;
        rear=eq;
        eq->next=NULL;
        
    }
}
 
void dequeue(){
    if(front==NULL){
        cout<<"Queue is empty!!";
    }
    else{
    	p=front;
    	front=front->next;
       cout<<"Deleted element is "<<p->data;
       // p=top;
       // top=top->next;
        delete(p);
       // showQueue();
    }
}
 
void showQueue()
{
    Node *eq;
    eq=front;
 
    if(front==NULL){
        cout<<"Queue is empty!!";
    }
    else{
        while(eq!=NULL)
        { 
            cout<<eq->data<<"--> ";
            eq=eq->next;
           
        }  
		cout<<"NULL";      
    }
}
 
int main()
{
    int ch,x;
    Node *nptr;
     cout<<"\n\n1.enqueue\n2.dequeue\n3.Display\n4.Exit";
    while(1)
    {
       
        cout<<"\nEnter your choice(1-4):";
        cin>>ch;
        
        switch(ch){
            case 1: cout<<"\nEnter data:";
                    cin>>x;
                    nptr=newnode(x);
                    enqueue(nptr);
                    cout<<"\nqueuelements are   ";
                    showQueue();
                    break;
            
            case 2: dequeue();
                    break;
                    
            case 3: showQueue();
                    break;
            
            case 4: exit(0);
            
            default: cout<<"\nWrong choice!!";
        }
    }
    
    return 0;
}
