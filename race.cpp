#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include "race.h"
#include "horse.h" 

Race::Race(){
	const static int NUM_HORSES = 5;
	const int TRACK_LENGTH = 15;
	srand(time(0));
	   for (int i = 0; i < NUM_HORSES; i++) {
        	horses[i].init(i, TRACK_LENGTH);  
	   }


}

void Race::start(){
       	bool keepGoing = true;
	while(keepGoing){
		for(int i = 0; i < NUM_HORSES; i++){
			horses[i].advance();
			horses[i].printLane();
			if(horses[i].isWinner()){
				keepGoing = false;
			}

		}
	}
}
