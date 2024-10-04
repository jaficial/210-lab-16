// COMSC-210 | Lab 14 | Jed Aficial
// github link: https://github.com/jaficial/210-lab-14

#include <iostream>
#include <iomanip>

using namespace std;

/* set max values for 0-255 for rgb values incase I'd like
   to edit this program into taking input from console/file*/
const int max_rgb = 255;
const int min_rgb = 0;

/* 'color' class contains 4 private member variables, three
	of them have type int for taking in a RGB value from 0-255.
	The last member is for taking in a string of the color name. */ 
class color {
private:
	int red_value;
	int green_value;
	int blue_value;
	string color_name;

public:
	int getred_value() {return red_value;} // getter returns the red RGB value 
	void setred_value(int red) {red_value = red;} // setter assigns the received red RGB value to red_value
	
	/* getter and setter for 'green_value', 'blue_value', 'getcolor_name'
	   work exactly the same as the getter and setter for 'red_value'.
	   Only difference is that 'getcolor_name' gets and sets a string vs. 
	   getting and setting an int for the RGB values variables. */
	int getgreen_value() {return green_value;} 
	void setgreen_value(int green) {green_value = green;}

	int getblue_value() {return blue_value;}
	void setblue_value(int blue) {blue_value = blue;}

	string getcolor_name() {return color_name;}
	void setcolor_name(string name) {color_name = name;}

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

/* CITED: Cited the class lecture code when testing with the setw() function
   as well as for testing and learning the syntax of writing a basic class */
// 3 color objects are written and defined in the main function
int main() {

	color brown;
	brown.setcolor_name("Brown");
	brown.setred_value(150);
	brown.setgreen_value(75);
	brown.setblue_value(0);
	brown.print();

	color wine;
	wine.setcolor_name("Wine");
	wine.setred_value(114);
	wine.setgreen_value(47);
	wine.setblue_value(55);
	wine.print();

	color forrest_green;
	forrest_green.setcolor_name("Forrest Green");
	forrest_green.setred_value(20);
	forrest_green.setgreen_value(142);
	forrest_green.setblue_value(20);
	forrest_green.print();

	return 0;
}

