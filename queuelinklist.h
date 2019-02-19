#include<iostream>
using namespace std;

/*Implementation of Queue as Linked List.
Code by Utkarsh Agrawal.
Please suggest edits wherever possible. */

template <typename T>	// class Node
class Node 
{
    public :
	T data;
    Node<T> *next;
    
    Node(T data) {
        this -> data = data;
        next = NULL;
    }
};


template<typename T>		//class Queue
class Queue 
{
    Node <T> * head;		//pointer to head node
  	Node <T> *tail;			//pointer to tail node
 	int size;
    
    public :    
    
    Queue() : size(0), head(NULL), tail(NULL)	//initialisation list
    {}
    
    void push(T data) {		//inserts element in queue
        
      Node <T> *temp= new Node <T> (data);		
      
      if(size==0)			//empty queue
      {
        head=temp;
        tail=temp;
        size++;
        return;
      }  
      
      tail->next=temp;
      tail=temp;
      size++;
      
    }
    
    int Size() 			//returns size of queue
	{
       return size; 
    }
    
    bool isEmpty() 		//checks wheter queue is empty or not    
	{	
      return size==0;
    }
    
    void pop() 
	{			// removes element from queue
       	
      if(size==0)		//empty queue
        return;
      
      if(size==1)
		tail = NULL;
      
	  Node <T> *temp=head;
      head=head->next;
      delete temp;
      size--;
    
	}
    
    T front()  		//returns front element of queue
	{
      
      if(size==0)
        return 0;
      
      return head->data;   
    }
    
};

