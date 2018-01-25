#include <iostream>
using namespace std;

int main() {
	int room_length = 5;
	int room_width = 10;
	/*
	float room_radius = 10.0;
	float room_circle_area = (room_radius * room_radius) * 3.14;
	*/
	bool keep_running = true;
	char question = 'y';

	while (keep_running) {


		cout << "Enter your room length: ";
		cin >> room_length;

		cout << "Enter your room width: ";
		cin >> room_width;

		// == != > < <= >= || &&
		/* if (room_length == room_width) {
			cout << "Length and Width are the same " << endl;
		}
		else {
			cout << "Length and Width are not the same " << endl;
		}
		*/

		if (room_length > room_width) {
			cout << "Length is greater than width" << endl;
		}
		else {
			cout << "Width is greater than length" << endl;
		}

		cout << "Run again (y/n): ";
		cin >> question;

		if (question != 'y') {
			keep_running = false;
		}
	}
	/*
	//printing stuff out
	cout << "Our number is " << room_length << endl;
	cout << "Our second number is " << room_width << endl;
	// math operators + - * %
	cout << "if you multiply them you get " << room_length * room_width;
	cout << "Unless your room is a circle " <<
		room_circle_area << endl;
		*/
	return 0;
}