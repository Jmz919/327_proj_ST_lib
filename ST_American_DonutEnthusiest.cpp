/*
 * ST_American_DonutEnthusiest.cpp
 *
 *  Created on: Nov 22, 2019
 *      Author: Josh Zutell
 */

#include <string>

#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/constants.h"
#include "./includes/Watch.h"

//create with appropriate phrases
ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i) : Smalltalk_American(AMERICAN_DE, i) {
	//Calls Smalltalk_American constructor
	//Gets phrases of ST_American_Donut_Enthusiest after getting American
	ST_American_DonutEnthusiest::populatePhrases();
}

ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void) {
	//Calls Smalltalk destructor that cleans up everything
}

//base class populatePhrases() will be called first as part of its construction
//before this class calls populate phrases as part of its construction
//the end result is mySmallTalk will contain first the base class phrases and
//then this classes phrases
void ST_American_DonutEnthusiest::populatePhrases() {
	//Gets the phrases of a ST_American_Donut_Enthusiest
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);
}


