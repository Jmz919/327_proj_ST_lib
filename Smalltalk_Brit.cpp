/*
 * Smalltalk_Brit.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: jmz
 */

#include <string>

#include "./includes/Smalltalk.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/constants.h"
#include "./includes/Watch.h"

//create with appropriate phrases
//use base class call to set Nationality (See constants for Nationality strings)
Smalltalk_Brit::Smalltalk_Brit(int iPerson) : Smalltalk(BRIT, iPerson){
	//ID person, set watch to null, and popluate British phrases
	this->iPerson = iPerson;
	pWatch = 0;
	Smalltalk_Brit::populatePhrases();
}

Smalltalk_Brit::~Smalltalk_Brit(void) {
	pWatch.reset();
}

void Smalltalk_Brit::populatePhrases() {
	mySmallTalk.push_back(BRIT_1);
	mySmallTalk.push_back(BRIT_2);
	mySmallTalk.push_back(BRIT_3);
	mySmallTalk.push_back(BRIT_4);
	mySmallTalk.push_back(BRIT_5);
	mySmallTalk.push_back(BRIT_6);
	mySmallTalk.push_back(BRIT_7);
}



