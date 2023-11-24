#include "Pokemon.hpp"
#include <string>
#include <iostream>

using namespace std;

string Pokemon::getName(){
	return name;
}
void Pokemon::setName(string newName){
	name = newName;
}

int Pokemon::getLevel(){
	return level;
}
void Pokemon::setLevel(int newLevel){
	level = newLevel;
}

string Pokemon::getType(){
	return type;
}
void Pokemon::setType(string newType){
	type = newType;
}

int Pokemon::gethp(){
	return hp;
}
void Pokemon::sethp(int newHp){
	hp = newHp;
}

int Pokemon::getatk(){
	return atk;
}
void Pokemon::setatk(int newAtk){
	atk = newAtk;
}

int Pokemon::getspcl(){
	return spcl;
}
void Pokemon::setspcl(int newSpcl){
	spcl = newSpcl;
}

int Pokemon::getspd(){
	return spd;
}
void Pokemon::setspd(int newSpd){
	spd = newSpd;
}

int Pokemon::getdef(){
	return def;
}
void Pokemon::setdef(int newDef){
	def = newDef;
}



