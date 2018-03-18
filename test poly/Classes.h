/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef CLASSES_H
#define CLASSES_H

// TO DO: Implement the base class Battalion here
class Battalion
{
protected:

	const char* name;

public:
	
	Battalion(const char* name_) : name(name_) {}

	const char* getName() const {return name; }
	
	virtual int combatValue() = 0; 

	virtual ~Battalion() {};

};


// TO DO: Implement the derived class Infantry here
class Infantry : public Battalion
{
private:

	 int  bayonetSoldiers, musketSoldiers;

public: 

	Infantry(const char* InfantryName,  int bayonet,  int musket) : Battalion(InfantryName), bayonetSoldiers(bayonet), musketSoldiers(musket) {}

	int  combatValue() override {return bayonetSoldiers * 1 + musketSoldiers * 2; }

	~Infantry() {};
};


// TO DO: Implement the derived class Chivalry here
class Chivalry:public Battalion {
private:
	int  lightChivalry, heavyChivalry;

public:

	Chivalry(const char* ChivalryName, int light, int heavy) : Chivalry(ChivalryName), lightChivalry(light), heavyChivalry(heavy) {}

	int  combatValue() override { return lightChivalry * 3 + heavyChivalry * 4; }

	~Chivalry()  {};

};



// TO DO: Implement the derived class Artillery here
class Artillery :public Battalion {
private:
	int  mortars, cannons;

public:

	Artillery(const char* ArtilleryName, int mortars_, int cannons_) : Artillery(ArtilleryName), mortars(mortars_), cannons(cannons_) {}

	int  combatValue() override { return mortars * 5 + cannons * 6; }

	~Artillery() {};

};



char* victoryInBattlefield(Battalion* div1, Battalion* div2)
{
	// TO DO: introduce the code of the function here
	div1


}


#endif // CLASSES_H