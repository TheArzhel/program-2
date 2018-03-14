#include <iostream>
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

//class clock {
//private:
//	unsigned short int h, m, s;
//public:
//	clock() : h(0), m(0), s(0) {}
//	//pixel(unsigned char r_, unsigned char g_, unsigned char b_) :
//		//		r(r_), g(g_), b(b_) {}
//
//
//	unsigned short int hours() const { return h; }
//	unsigned short int minutes() const { return m; }
//	unsigned short int seconds() const { return s; }
//
//	void same(const clock &p) const {
//		if (h == p.h && m == p.m && s == p.s) {
//			cout << "are the same" << endl;
//		} else if (h << p.h || m << p.m || s << p.s) {
//			cout << "firste clock is minor" << endl;
//		} else if (h >> p.h || m >> p.m || s >> p.s) {
//			cout << "firste clock is minor" << endl;
//		}
//	}
//
//	void setHours(unsigned short int h_, unsigned short int m_, unsigned short s_) {
//		p.h(h_);
//		p.m(m_); 
//		p.s(s_);
//	}
//
//	void printHour() const {
//		cout << h << ":" << m << ":" << s << endl;
//
//	}
//
//
//
//};
//
//int main() {
//	clock first( 11, 30, 50), second;
//	clock third(11, 30, 50), fourth(12, 0, 0);
//
//	cout << first.hours() << " " << first.minutes() << " " << first.seconds()<< endl;
//	
//	first.same(second);
//	first.same(third);
//	first.same(forth);
//
//	second.setHours(5, 45, 23);
//	second.printHour();
//
//	system("pause");
//	return 0;
//}

