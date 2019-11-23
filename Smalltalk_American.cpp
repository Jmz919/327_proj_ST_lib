/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 22, 2019
 *      Author: Josh Zutell
 */

#include <string>

#include "./includes/Smalltalk.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"
#include "./includes/Watch.h"

//create with appropriate phrases
//use base class call to set Nationality (See constants for Nationality strings)
Smalltalk_American::Smalltalk_American(int iPerson) : Smalltalk(AMERICAN, iPerson){
	//ID the person, make the watch null, and populate the phrases
	Smalltalk_American::populatePhrases();
}

Smalltalk_American::Smalltalk_American(std::string myNationality,int iPerson) :
	Smalltalk(myNationality, iPerson){
	//ID the person, set the watch to null, and populate the phrases
	Smalltalk_American::populatePhrases();
}

Smalltalk_American::~Smalltalk_American(void) {
	//Calls Smalltalk destructor that cleans up everything
}

void Smalltalk_American::populatePhrases() {
	//Phrases an American would say
	mySmallTalk.push_back(AMERICAN_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_PHRASE_5);
}


