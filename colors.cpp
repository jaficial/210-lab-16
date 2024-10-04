// COMSC-210 | Lab 16 | Jed Aficial
// github link: https://github.com/jaficial/210-lab-16

#include <iostream>
#include <iomanip>

using namespace std;

/* set max values for 0-255 for rgb values incase I'd like
   to edit this program into taking input from console/file*/
const int max_rgb = 255;
const int min_rgb = 0;

/* 'color' class contains 4 private member variables, three
	of them have type int for taking in a RGB value from 0-255.
	The last member is for taking in a string of the color name.  */ 
class color {
private:
	int red_value;
	int green_value;
	int blue_value;
	string color_name;

public:
	/* NOTE: default constructor does not take in any parameters. 
			 partial constructor takes in name and red value as parameters.
			 full param. constructor takes in name, and all three RGB values as parameters. */

	// default constructor
	color() {color_name = "none"; red_value = 0; green_value = 0; blue_value = 0;}
	// partial constructor
	color(string name, int red) {color_name = name; red_value = red; green_value = 0; blue_value = 0;}
	// full parameter constructor
	color(string name, int red, int green, int blue) {color_name = name; red_value = red; green_value = green; blue_value = blue;}

	// 'print' function outputs the name of the color, and its RGB values
	void print() {
		cout << endl << "RGB Values for " << color_name << ":" << endl;
		cout << "---------------------------" << endl;
		cout << setw(18) << "RED VALUE: " << red_value << endl;
		cout << setw(18) << "GREEN VALUE: " << green_value << endl;
		cout << setw(18) << "BLUE VALUE: " << blue_value << endl;
		cout << "---------------------------" << endl;
	}
};

void print(color);

/* CITED: Cited the class lecture code for Class constructors. 
		  Used a similar format when writing the default, partial,
		  and full parameter constructors in the color class. */

// 3 color objects are written and defined in the main function to display the three different constructors
int main() {
	// default constructor
	color nothing;
	nothing.print();

	// partial constructor
	color white("white", 255);
	white.print();

	// full constructor
	color wine("Wine", 114, 47, 55);
	wine.print();

	return 0;
}

