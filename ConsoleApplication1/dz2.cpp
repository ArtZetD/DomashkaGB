#include <iostream>
#include <string>
using namespace std;
class Person {

public:
	Person(string c_name)
	:name (c_name){}

	
	void set_name(string c_name) {
		name = c_name;
	}

	void set_age(string c_age) {
		name = c_age;
	}

	void set_gender(string c_gender) {
		name = c_gender;
	}

	void set_weight(string c_weight) {
		name = c_weight;
	}
protected:
	string name;
	string age;
	string gender;
	string weight;
};
class Student : Person {
private:
	int year_edu;
public:
	void getName() {
		cout << name;
	}
	void set_yearEdu( int year) {
		year_edu = year;
	}
	void new_YearEdu(int year) {
		year_edu++;
	}
};


class Fruit { 
public:
	Fruit() {};
protected:
	string name;
	string colour;
};


class Apple : Fruit {
public:
	Apple() {};
	void getName() {
		cout << name;
	}
	void getColour() {
		cout << colour;
	}
protected:
	string name = "apple";
	string colour = "red";

};



class Banana : Fruit {
public:
	Banana() {};
	void getName() {
		cout << name;
	}
	void getColour() {
		cout << colour;
	}
protected:
	string name = "banana";
	string colour = "yellow";
};


class GrannySmith : Apple {
public:
	GrannySmith() {};
	void getName() {
		cout << name;
	}
	void getColour() {
		cout << colour;
	}
private:
	string name = " Granny Smith apple";
	string colour = "green";
};

int main() {

	//Student FrstStu("Artur");
	//Student ScndStu("6666");
	//Student ThirStu("5555");
	//Student FourStu("4444");


	//cout << FrstStu.getName() << endl;



	Apple apple();
	Banana banana();
	GrannySmith GS();
	string blablabla = apple.getColour;


}