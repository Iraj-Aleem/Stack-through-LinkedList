#include<iostream>
#include "stack.h"
using	namespace	std;
int main() {
	int	choice;
	stack	s;
	while(1){
		cout<<"Press	1	to	Push	item	in	the	Stack."<<endl;
		cout<<"Press	2	to	Pop	item	from	the	Stack."<<endl;
		cout<<"Press	3	to	Display	item	of	the	Stack."<<endl;
		cout<<"Press	4	to	Quit	the	Menu."<<endl;
		cout<<"What	is	your	choice?"<<endl;
		cin>>choice;
		switch(choice){
			case	1:
				s.push();
				break;
			case	2:
				s.pop();
				break;
			case	3:
				s.display();
				break;
			case	4:
				exit(1);
			default:
				cout<<"Wrong	choice\n";
		}
	}
	
}
