#include"stack.h"
#include<iostream>
using	namespace	std;
#include<stdlib.h>
void	stack::push(){
struct	node	*temp;
int	pushed_item;
temp=new	node();
cout<<"Input	the	new	value	to	be	pushed	on	the	stack:";
cin>>pushed_item;
temp->info=pushed_item;
temp->link=top;
top=temp;
}
void	stack::pop(){
node	*temp;
if(top==NULL){
	cout<<"Stack	is	empty"<<endl;	
}
else{
	temp=top;
	cout<<"Popped	item	is:"<<temp->info<<endl;
	top=top->link;
	delete(temp);	
}
}

void	stack::display(){
		node	*q;
	if(top==NULL){
		cout<<"List	is	empty"<<endl;
//		return;
	}
	else{
		q=top;
		while(q!=NULL){
			cout<<q->info<<endl;
		q=q->link;
		}
		cout<<q->info<<endl;
	}
		
	}	


