#include <iostream>
#include "Pokemon.hpp"
#include "Gameplay.hpp"
#include <time.h>

using namespace std;

int main(){
	//random number stuff
	srand(time(NULL));
	
	
	string name;
	
	Pokemon poke1 ;
	cout << "name of pokemon?!";
	cin >> name;
	poke1 = createPokemon(poke1, name, "Rock" , 1 ,rand() % 10 + 5,rand() % 10,rand() % 10,rand() % 10,rand() % 10);
	
	
	cout << "pok name : " << poke1.getName() << endl;
	cout << "Pok level " << poke1.getLevel()<< endl;
	cout << "Pok Type " << poke1.getType()<< endl;
	cout << "Pok hp " << poke1.gethp()<< endl;	
	cout << "Pok atk " << poke1.getatk()<< endl;
	cout << "Pok def " << poke1.getdef()<< endl;
	cout << "Pok spcl " << poke1.getspcl()<< endl;
	cout << "Pok spd " << poke1.getspd()<< endl;
	
	
	return 0;
}