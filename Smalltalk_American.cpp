/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: jmz
 */

#include <string>

#include "./includes/Smalltalk.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"
#include "./includes/Watch.h"

//create with appropriate phrases
//use base class call to set Nationality (See constants for Nationality strings)
Smalltalk_American::Smalltalk_American(int iPerson) : Smalltalk(AMERICAN, iPerson){
	this->iPerson = iPerson;
	pWatch = 0;
	Smalltalk_American::populatePhrases();
}

Smalltalk_American::Smalltalk_American(std::string myNationality,int iPerson) :
	Smalltalk(myNationality, iPerson){
//	nationality = myNationality;
	this->iPerson = iPerson;
	pWatch = 0;
}

Smalltalk_American::~Smalltalk_American(void) {
	pWatch.reset();
}

void Smalltalk_American::populatePhrases() {
	mySmallTalk.push_back(AMERICAN_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_PHRASE_5);
}


