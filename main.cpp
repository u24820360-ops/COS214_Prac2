#include <iostream>
#include "Traveller.h"


int main() {
	
	//move the traveller
	Traveller * traveller = new Traveller();
	int moveCount = 200;
	for(int i=0; i < moveCount; i++) 
	{
		traveller->move();
	}
	
	return 0;
}