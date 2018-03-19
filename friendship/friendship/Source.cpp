#include <stdio.h>
#include <iostream>
using namespace std;


class Item
{
private:
	char* itemName;
public:
	Item(char* name__) : itemName(name__) {}

	~Item() {};
	friend class Player;
};

class Player 
{
private:
	char* playerName;
	unsigned short lifes;
	bool invincible;
	bool* capabilities; 
	bool* weapon = new bool[3];

public:
	Player(char* name_) : playerName(name_), lifes(3), invincible(false), capabilities(new bool[3]()), weapon(new bool[3]()) { capabilities[1] = true; }
	~Player() { delete[] capabilities; delete[] weapon; };

public:
	char* getName() { return playerName; }
	
	void PrintNumLifes() { cout << lifes << endl; }
	
	void PrintInvincible() 
	{ 
		if (invincible == true) 
		{ 
			cout << "invincible" << endl; 
		}
		else { cout << "not invincible" << endl; }
	}
	
	void PrintCapabilities() 
	{ 
		for (int i = 0; i < 3; i++)
		{
			if (*(capabilities + i) == true) 
			{
				cout << i << " capability is true" << endl;
			 }
		}
	}


	void PrintWeapon()
	{
		for (int i = 0; i < 3; i++)
		{
			if (*(weapon + i) == true)
			{
				cout << i << " weapon is true" << endl;
			}
		}
	}

	bool operator== (Player &p)
	{
		return (strcmp(playerName, p.playerName) == 0);
	}


	void useItem(Item item_) 
	{
		if (strcmp(item_.itemName, "One_Up") == 0) { lifes++; }

		if (strcmp(item_.itemName, "Mini_Mario")==0) { 
			*(capabilities) = true; 
			*(capabilities+1) = false;
			*(capabilities + 2) = false;
		}

		if (strcmp(item_.itemName, "Super_Mario")==0) {
			*(capabilities) = false;
			*(capabilities + 1) = false;
			*(capabilities + 2) = true;
		}

		if (strcmp(item_.itemName, "Ice_Flower")==0) {
			*(weapon) = false;
			*(weapon + 1) = true;
			*(weapon + 2) = false;
		}
		if (strcmp(item_.itemName, "Fire_Flower")==0) {
			*(weapon) = true;
			*(weapon + 1) = false;
			*(weapon + 2) = false;
		}
		if (strcmp(item_.itemName, "Golden_Flower")==0) {
			*(weapon) = false;
			*(weapon + 1) = false;
			*(weapon + 2) = true;
		}
	
	}
	friend void starTouched(Player &p);
};



void starTouched(Player &p) 
{
	p.invincible = true;
}

int main() {
	cout << "player name " << endl;
	char c[40];
	cin >> c;
	cout << endl;

	Player p(c);

	bool  quit = false;
	while (quit == false) {

		cout << "MENU" << endl;
		cout << " 1 - One_Up" << endl;
		cout << " 2 - Mini_Mario" << endl;
		cout << " 3 - Super_Mario" << endl;
		cout << " 4 - Fire_Flower" << endl;
		cout << " 5 - Ice_Flower" << endl;
		cout << " 6 - Golden_Flower" << endl;
		cout << " 7 - Star" << endl;
		cout << " 8 - Quit" << endl;
		cout << "Select an option: " << flush;

		int option;
		cin >> option;

		switch (option) {
		case 1: p.useItem("One_Up"); break;
		case 2: p.useItem("Mini_Mario"); break;
		case 3: p.useItem("Super_Mario"); break;
		case 4: p.useItem("Fire_Flower"); break;
		case 5: p.useItem("Ice_Flower"); break;
		case 6: p.useItem("Golden_Flower"); break;
		case 7: starTouched(p); break;
		case 8: quit = true; break;
		default:
			cout << "Invalid option" << endl;
		
		}
		cout << endl;
		p.PrintNumLifes();
	p.PrintInvincible();
	p.PrintCapabilities();
	p.PrintWeapon();
	cout << endl;
	}
	


}