#include <iostream>
#include <string>

using namespace std;

struct Car {
	int year;
	string brand;
}toyota, mercedes, bmw;

struct People {
	int email;
	string phone;
	Car hiscar;
}tobby;

class Rectangle {
	int width, height;
public:
	void set_value(int x, int y)
	{
		width = x;
		height = y;
	}
	int area()
	{
		return width * height;
	}
};

int main() {
	People* his = &tobby;
	his->hiscar.brand = "toyota";
	his->hiscar.year = 2018;
	cout << tobby.hiscar.brand << " " << tobby.hiscar.year << endl;

	system("pause");
	return 0;
}