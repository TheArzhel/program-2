#include <iostream>
#include <string>
using namespace std;

//class pixel {
//private:
//	unsigned char r, g, b;
//public:
//	pixel() : r(0), g(0), b(0) {}
//	pixel(unsigned char r_, unsigned char g_, unsigned char b_) :
//		r(r_), g(g_), b(b_) {}
//
//	unsigned char red() const { return r; }
//	unsigned char green() const { return g; }
//	unsigned char blue() const { return b; }
//
//	pixel mix(const pixel &p) const {
//		unsigned char newred = (r + p.r) / 2;
//		unsigned char newgreen = (g + p.g) / 2;
//		unsigned char newblue = (b + p.b) / 2;
//
//		pixel newpixel(newred, newgreen, newblue);
//
//		return newpixel;
//	}
//};
//
//	int main() {
//		pixel blue(0, 0, 255), black;
//		pixel red(255, 0, 0);
//		pixel m;
//		m = red.mix(blue);
//		cout << (int)black.red() << " " << (int)black.green() << " " << (int)black.blue()
//			<< endl;
//		cout << (int)m.red() << " " << (int)m.green() << " " << (int)m.blue() << endl;
//
//		system("pause");
//		return  0;
//};

//class Point1D {
//public:
//	int x;
//	Point1D() : x(0) {
//		cout << "Ctor Point1D" << endl;
//	}
//};
//class Point2D : public Point1D {
//public:
//	int y;
//	Point2D() : y(0) {
//		cout << "Ctor Point2D" << endl;
//	}
//};
//
//int main()
//{
//	Point2D p;
//	system("pause");
//	return 0;
//}

//class clock 
//{
//private:
//	int hours, min, sec;
//public:
//	clock() : hours(0), min(0), sec(0) {}
//	clock(int h_, int m_, int s_) : hours(h_), min(m_), sec(s_) {}
//  ~clock() {}; 
//public :
//
//	int returnhours() const { return hours; }
//	int returnmin() const { return min; }
//	int returnsec() const { return sec; }
//
//	void sameclock(const clock &clock2) {
//		if (hours == clock2.hours && min== clock2.min && sec == clock2.sec)
//		{
//			cout << "both clocks are the same" << endl;
//		}
//		else if ( hours < clock2.hours || hours == clock2.hours && min < clock2.min || hours == clock2.hours && min == clock2.min && sec < clock2.sec)
//		{
//			cout << " clock 2 is greater" << endl;
//		}
//		else if (hours > clock2.hours || hours == clock2.hours && min > clock2.min || hours == clock2.hours && min == clock2.min && sec > clock2.sec)
//		{
//			cout << " clock 1 is greater" << endl;
//		}
//	}
//	void setHours(int hours_, int min_, int sec_) {
//		hours = hours_; 
//		min = min_;
//		sec=sec_;
//	}
//
//	void printHours() {
//		cout << hours << ":" << min << ":" << sec << endl;
//	}
//
//};
//
//int main() {
//
//	clock clock1, clock2(12, 30, 5), clock3(12, 30, 4), clock4(11, 40, 50), clock5(12, 50, 30);
//	cout << (int)clock2.returnhours() << ":" << (int)clock2.returnmin()  <<":" << (int)clock2.returnsec() << endl;
//	clock1.sameclock(clock2);
//	clock2.sameclock(clock2);
//	clock2.sameclock(clock3);
//	clock2.sameclock(clock4);
//	clock2.sameclock(clock5);
//
//	clock1.setHours(24, 59, 59);
//	clock1.printHours();
//	system("pause");
//	return 0;
//}

class Matricula
{
private:
	int number;
	char* strings;
public:
	Matricula() : number(9999), strings("ZZZZ") {}
	Matricula(int numb, char* str) : number(numb), strings(str) {}
	~Matricula() {};
public:
	char* to_string () {
		

		return z;
	}

	bool is_equal(Matricula &m) {
		bool q = false;
		if (number == m.number && strings == m.string) {	
			q = true;
		}
		return q;

	}

};

int main() {
	Matricula m1(1234, "ABC"), m2(5588, "KXM");

	Matricula m3(m1), m4;

	char* s = m4.to_string(); 

	cout << "m4 val: " << s << endl;

	cout << "m2 val: " << m2.to_string() << endl;

	cout << "m1 is equal to m3?? ";

	if (m1.is_equal(m3)) {

		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	cout << "Finished" << endl;

	system("pause");
	return 0;
}
//Produces the following output :
//m4 val : 9999 - ZZZ
//m2 val : 5588 - KXM
//m1 is equal to m3 ? ? yes