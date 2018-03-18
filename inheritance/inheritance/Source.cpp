#include <iostream>
using namespace std;

class Building
{
protected:
	const char* name;
public:
	Building(const char* n_) : name(n_) {};

	const char* getName() { return name; }
	virtual ~Building() {};
};

class Warehouse : public Building {
protected:
	int wood, rocks, wheat;
public:
	Warehouse(const char* b_, int w_, int r_, int wh_) : Building(b_), wood(w_), rocks(r_), wheat(wh_) {}
	~Warehouse() {};
public:
	void printResources() {
		cout << "-- " << name << " --" << endl;
		cout << "Wood: " << wood << endl;
		cout << "Rocks: " << rocks << endl;
		cout << "Wheat: " << wheat << endl;
	}
};

class House : public Building
{
protected:
	int floors, inhabitants, servants;
public:
	House(const char* housename, int flo, int inh, int ser) : Building(housename), floors(flo), inhabitants(inh), servants(ser) {}

	void printHouse() {
		cout << "-- " << name << " --" << endl;
		cout << "Floors: " << floors << endl;
		cout << "Inhabitants: " << inhabitants << endl;
		cout << "Servants: " << servants << endl;
	}

};

class Temple : public Building
{
protected:
	int priest;
	char* god;
public:
	Temple(const char* templename, char* gody, int priest_) : Building(templename), god(gody), priest(priest_) {}

	void printTemple() {
		cout << "-- " << name << " --" << endl;
		cout << "God: " << god << endl;
		cout << "Num. Priests: " << priest << endl;

	}

};

void reverse(int* vec) {

	/*int vec2[5];
	int a = 0;

	for (int i = 0; i < 5; ++i) {
	*(vec2 + i) = *(vec + i);
	}
	for (int i = 4; i >= 0; --i) {
	*(vec + i) = *(vec2 + a);
	++a;
	}*/


	int first = 0;
	int last = 0;
	int a = 4;
	for (int i = 0; i < 3; ++i) {
		first = *(vec + i);
		last = *(vec + a);
		*(vec + i) = last;
		*(vec + a) = first;
		--a;
	}

}

int main() {

	Warehouse w("East Warehouse", 10, 20, 30);
	House h("Agripa's house", 2, 5, 10);
	Temple t("Mercury's Temple", "Mercury", 3);
	int arr1[5] = { 1, 2, 3, 4, 5 };
	cout << "Warehouse name: " << w.getName() << endl << endl;

	w.printResources();
	h.printHouse();
	t.printTemple();
	cout << endl << endl;
	reverse(arr1);
	for (int i = 0; i < 5; ++i) {
		cout << arr1[i] << endl;
	}

	system("pause");
	return 0;

}

