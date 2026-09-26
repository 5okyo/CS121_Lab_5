#include <iostream>
#include <stdlib.h>
#include "horse.h"

Horse::Horse(){
	position = 0;
	index = 0;
	trackLength = 15;
} // end of constructor
 

void Horse::init(int index, int trackLength){
	Horse::position = 0;
	Horse::index = index;
	Horse::trackLength = trackLength;
}

void Horse::advance(){
 int coin = rand() % 2;
 position += coin;
} // end of advance 

void Horse::printLane(){
	for(int pos = 0 ; pos < trackLength; pos++){
		if (pos == position){
			std::cout << Horse::index;
		} else {
		  std::cout << ".";
		 }
	}
	std::cout << std::endl;
}

bool Horse::isWinner(){
	bool result = false;
	if (position >= trackLength){
		result = true;
		std::cout << "Horse " << index << " wins!" << std::endl;

	} 
	return result;
}
