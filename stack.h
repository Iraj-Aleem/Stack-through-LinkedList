#ifndef	STACK_H
#define	STACK_H
#include<iostream>
using	namespace	std;
#include"node.h"
struct	stack	{
	public:
		node	*top=NULL;
		void	push();
		void	pop();
		void	display();	
	
};
#endif

