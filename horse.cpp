#include <iostream>
#include <stdlib.h>
#include "horse.h"

Horse::Horse(){
	position = 0;
	index = 0;
	trackLength = 15;
} // end of constructor
 


void Horse::advance(){
 int coint = rand() % 2;
 postion += coin;
} // end of advance 

void Horse::printLane(){
	for(int pos = 0 ; pos < trackLength; pos++){
		if (pos == Horse::positon){
			std::cout << Horse::index
		} else {
		  std::cout << ".";
		 }
	}
}
std::cout << std::endl;

bool Horse::isWinner(){
	bool result = false;
	if (postion >= trackLength){
		result = true;
		std::cout << "Horse " << index << "wins!" << std::endl;

	} 
	return result;
}
