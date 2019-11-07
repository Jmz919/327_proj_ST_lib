/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: jmz
 */
#include <string>
#include <memory>

#include "./includes/Smalltalk.h"
#include "./includes/constants.h"
#include "./includes/Watch.h"

//derived class will set Nationality, iPerson. iPerson is just a counter used to distinguish between objects of the same type
Smalltalk::Smalltalk(std::string myNationality, int iPerson) : nationality(myNationality) {
	this->iPerson = iPerson;
	current_phrase = 0;
	pWatch = 0;
}

Smalltalk::~Smalltalk(void) {
	pWatch.reset();
}

//cycles through phrases added in populatePhrases. Returns them 1 by 1 starting with the first and ending
//with the last and then it starts over
//takes the form Nationality iPerson: phrase
//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
//AMERICAN 10:Why yes, I would like to supersize that
std::string Smalltalk::saySomething() {
	int phraseToSay = current_phrase % mySmallTalk.size();
	std::string phrase = nationality + " " + std::to_string(iPerson) + ":" + mySmallTalk[phraseToSay];
	current_phrase++;
	return phrase;
}

//returns the time (if pWatch contains a watch ) in the form of THE_CURRENT_TIME_IS: (from the actual watch object itself) and then the time
//or I_DO_NOT_HAVE_A_WATCH string (if pWatch does not contain a watch)
std::string Smalltalk::getTime() {
	if (pWatch != 0) {
		return THE_CURRENT_TIME_IS + pWatch->getTime();
	}

	return I_DO_NOT_HAVE_A_WATCH;
}

//if this object has a watch it is taken away, otherwise an empty unique_ptr is returned
//This transaction simulates giving away a watch
std::unique_ptr<Watch> Smalltalk::takeWatch() {
	if (pWatch != 0) {
		std::unique_ptr<Watch> newWatch = std::move(pWatch);
		pWatch = 0;
		return newWatch;
	}
	return nullptr;
}

//if already have a watch then return false and dont change pWatch pointer
//otherwise accept watch (return true) and set this->pWatch=pWatch (use std::move)
bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	if (this->pWatch != 0) {
		return false;
	}

	this->pWatch = std::move(pWatch);
	return true;
}



