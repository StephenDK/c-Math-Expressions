#include <iostream>
#include <cmath>

using namespace std;

int main() {
	bool runProgram = true;
	cout << "Start of program" << endl;
	while (runProgram == true) {
		cout << '\n';
		int userSelection;
		cout << "1. Area of a Triangle." << endl;
		cout << "2. Sum of Numbers." << endl;
		cout << "3. Quadratic Equation" << endl;
		cout << "4. Area of a Circle" << endl;
		cout << "5. Finding Speed" << endl;
		cout << "6. Calculate Simple Intrest" << endl;
		cout << "7. Volume of a Cylinder" << endl;
		cout << "8. Distance between two points" << endl;
		cout << "9. END PROGRAM" << endl;
		cin >> userSelection;

		if (userSelection == 1) {
			int base, height, area;
			cout << "Please enter the base and height" << endl;
			cin >> base >> height;
			area = (base * height) / 2;
			cout << "The area of your triangle is: " << area << endl;
		}
		else if (userSelection == 2) {
			int n, sum;
			cout << "Please enter n." << endl;
			cin >> n;
			sum = n * (n + 1) / 2;
			cout << "The sum is: " << sum << endl;
		}
		else if (userSelection == 3) {
			int a, b, c;
			float result, result2;
			cout << "Please enter a, b, and c." << endl;
			cin >> a >> b >> c;
			result = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			result2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			cout << "The result is: " << result << endl;
			cout << "Result 2 is: " << result2 << endl;
		}
		else if (userSelection == 4) {
			float r, area;
			cout << "What is the radius?" << endl;
			cin >> r;
			area = 3.1425f * r * r;
			cout << "The area is: " << area << endl;
		}
		else if (userSelection == 5) {
			int u, v, a;
			float speed;
			cout << "Enter initail velocity, final velocity, and acceleration." << endl;
			cin >> u >> v >> a;
			speed = (v * v - u * u) / (2 * a);
			cout << "The speed is: " << speed << endl;
		}
		else if (userSelection == 6) {
			int  P, T, R;
			float SI;
			cout << "Please enter the principle ammount, time, and rate of interest." << endl;
			cin >> P >> T >> R;
			SI = P * T * R / 100.0;
			cout << "The simple interest is: " << SI << endl;
		}
		else if (userSelection == 7) {
			int r, h;
			float pi = 3.14f;
			float volume;
			cout << "Please enter the radius and height" << endl;
			cin >> r >> h;
			volume = pi * r * r * h;
			cout << "The volume of the cylinder is: " << volume << endl;
		}
		else if (userSelection == 8) {
			int x1, y1, x2, y2;
			float distance;
			cout << "Please enter x1, y1, x2, y2" << endl;
			cin >> x1 >> y1 >> x2 >> y2;
			distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
			cout << "The distance between the two points is: " << distance << endl;
		}
		else if (userSelection == 9) {
			runProgram = false;
			cout << "Thank you for using my program!! Good-Bye :P" << endl;
		}
	}
	return 0;
}