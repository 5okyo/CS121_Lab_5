#include <iostream>
#include <cstdlib>
#include <ctime> 
#include "horse.h"


void testHorse();

int main(){
	srand(time(NULL)); 
	std::cout << "Race Game" << std::endl;

	return 0;
} // end of main



void testHorse(){
	Horse h;
	bool keepGoing = true;
	while (keepGoing){
		h.advance();
		h.printline();
		if (h.isWinner()){
			keepGoing = false;
		}

	}
}

