#include <iostream>
using namespace std;

class Pokemon
{
protected:
	char* name;
	char* type;
public:
	Pokemon(char* pokeName) : name(pokeName), type("noType") {}
	Pokemon(char* pokeName, char* type_) : name(pokeName), type(type_) {} 
public:
	char* getName() { return name; }
	char* getType() { return type; }
	virtual int damageAttack(Pokemon *p) { return 0; };

};

class ElectricPokemon : public Pokemon
{
public:
	ElectricPokemon(char* pokeName) : Pokemon(pokeName) { type="electric"; }

public:
	int damageAttack(Pokemon* p) override {
		int power = 10;

		if (p->getType() == "grass") {
			power *= 0.5;
		}
		if (p->getType() == "water") {
			power *= 2;
		}
		return power;
	}


};

class GrassPokemon : public Pokemon
{
public:
	GrassPokemon(char* pokeName) : Pokemon(pokeName,"grass") {}

public:
	int damageAttack(Pokemon* p) {
		int power = 10;

		if (p->getType() == "fire") {
			power *= 0.5;
		}
		if (p->getType() == "water") {
			power *= 2;
		}
		return power;
	}


};

class FirePokemon : public Pokemon
{
public:
	FirePokemon(char* pokeName) : Pokemon(pokeName) { type = "fire"; }

public:
	int damageAttack(Pokemon* p) {
		int power = 10;

		if (p->getType() == "water") {
			power *= 0.5;
		}
		if (p->getType() == "grass") {
			power *= 2;
		}
		return power;
	}


};

class WaterPokemon : public Pokemon
{
public:
	WaterPokemon(char* pokeName) : Pokemon(pokeName) { type = "water"; }

public:
	int damageAttack(Pokemon* p) {
		int power = 10;

		if (p->getType() == "grass") {
			power *= 0.5;
		}
		if (p->getType() == "fire") {
			power *= 2;
		}
		return power;
	}


};

int main()
{
	Pokemon *pikachu = new ElectricPokemon("Pikachu");
	Pokemon *bulbasaur = new GrassPokemon("Bulbasaur");
	Pokemon *charmander = new FirePokemon("Charmander");
	Pokemon *squirtle = new WaterPokemon("Squirtle");

	cout << "-- Damage Attacks --" << endl;

	cout << pikachu->getName() << " -> " << bulbasaur->getName() << " = " << pikachu->damageAttack(bulbasaur) << " units" << endl;
	cout << bulbasaur->getName() << " -> " << squirtle->getName() << " = " << bulbasaur->damageAttack(squirtle) << " units" << endl;
	cout << squirtle->getName() << " -> " << charmander->getName() << " = " << squirtle->damageAttack(charmander) << " units" << endl;
	cout << charmander->getName() << " -> " << pikachu->getName() << " = " << charmander->damageAttack(pikachu) << " units" << endl;

	delete pikachu;
	delete bulbasaur;
	delete charmander;
	delete squirtle;

	system("pause");

	return 0;
}