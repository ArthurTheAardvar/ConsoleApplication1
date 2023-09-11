#include <iostream>
using namespace std;

void cartesian() {

	double x1;
	double x2;
	double y1;
	double y2;
	int m;
	int m2;



	cout << "Enter 4 numbers corresponding to 'The Midpoint Formula: " << endl;
	cin >> x1;
	cin >> x2;
	cin >> y1;
	cin >> y2;

	m = ((x1 + x2) / 2);
	m2 = ((y1 + y2) / 2);
	cout << m << endl;
	cout << m2 << endl;

	cout << "The Midpoint is " << m << "," << m2 << endl;

}

int main() {
	while (1)
		cartesian();
}
	