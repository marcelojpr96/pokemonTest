#ifndef POKEMON_HPP
#define POKEMON_HPP
#include <string>

using namespace std;

class Pokemon
{
	public:
		
		string getName();
		void setName(string newName);
		
		int getLevel();
		void setLevel(int newLevel);
		
		string getType();
		void setType(string newType);
	
		int gethp();
		void sethp(int newHp);
	
		int getatk();
		void setatk(int newAtk);
		
		int getspcl();
		void setspcl(int newSpcl);
		
		int getspd();
		void setspd(int newSpd);
		
		int getdef();
		void setdef(int newDef);
		
		Pokemon createPokemon(Pokemon newPoke,string newname, string newtype, int newlvl, int newhp, int newatk, int newdef, int newspcl, int newspd);
		
	private :
		string name;
		int level;
		string type;
		int hp;
		int atk;
		int spcl;
		int spd;
		int def;
		

};

#endif // POKEMON_HPP
