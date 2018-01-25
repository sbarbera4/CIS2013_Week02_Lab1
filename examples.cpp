#include <iostream>
using namespace std;

int main() {
	int room_length = 5;
	int room_width = 10;
	float room_radius = 10.0;
	float room_circle_area = (room_radius * room_radius) * 3.14;

	//printing stuff out
	cout << "Our number is " << room_length << endl;
	cout << "Our second number is " << room_width << endl;
	// math operators + - * %
	cout << "if you multiply them you get " << room_length * room_width;
	cout << "Unless your room is a circle " <<
		room_circle_area << endl;
	return 0;
}