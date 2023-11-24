#include "Gameplay.hpp"
#include "Pokemon.hpp"
#include <time.h>
using namespace std;



Pokemon createPokemon(Pokemon newPoke,string newname, string newtype, int newlvl, int newhp, int newatk, int newdef, int newspcl, int newspd){
	Pokemon poke = newPoke;
	poke.setName(newname);
	poke.setType(newtype);
	poke.setLevel(newlvl);
	cout << poke.getLevel() << endl;
	poke.sethp(newhp);
	poke.setatk(newatk);
	poke.setdef(newdef);
	poke.setspcl(newspcl);
	poke.setspd(newspd);
	
	return poke;
}

