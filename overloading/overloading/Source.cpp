#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

#define TEST(cond, message) \
 if (cond) { cout << "OK    - " << message << endl; } \
 else      { cout << "ERROR - " << message << endl; }

class vec3 
{
public:
	
	// Members
	float x, y, z;
	
	// Constructors
	vec3() : x(0.0f), y(0.0f), z(0.0f) { }
	vec3(float px, float py, float pz) : x(px), y(py), z(pz) { }
	vec3(const vec3 & v) : x(v.x), y(v.y), z(v.z) { }
	
	// TODO: Member operators

	void operator+= (const vec3 &v) {
		x += v.x;
		y += v.y;
		z += v.z;
	}
	void operator*= (float f) {
		x *= f;
		y *= f;
		z *= f;
	}
};

float length(const vec3 &v) {

	return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}
// TODO: Non-member operators

bool operator ==(const vec3 & v1, const vec3 & v2) {

	return v1.x == v2.x && v1.y == v2.y && v1.z == v2.z;


}

bool operator <(const vec3 & v1, const vec3 & v2) {

	return length(v1) < length(v2);
	
}
	
	
vec3 operator *(const vec3 &v, float f) {
	
	vec3 a1;
	a1.x = v.x;
	a1.y=v.y;
	a1.z=v.z;
	a1.x *= f;
	a1.y *= f;
	a1.z *= f;

	return a1;
}

int main() {

	vec3 a, b;

	if (a == b) cout << 0 << endl;

	b += vec3(1, 2, 3); 

	if (b == vec3(1, 2, 3)) cout << 0 << endl;

	vec3 c = b * 2; 
	
	if (c == vec3(2, 4, 6)) cout << 0 << endl;

	if (b < c && !(c < b)) cout << 0 << endl;

	c *= 2;
	
	if (c == vec3(4, 8, 12)) cout << 0 << endl;

	system("pause");
	return 0;
}