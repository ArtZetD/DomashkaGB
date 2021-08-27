#include<iostream>
#include <cmath>
#include <cstdint>
using namespace std;
class Power // task one
{
public:

	int setNumber1(int Num1) {
		NumberOne = Num1;
		return 0;
	}


	int setNumber2(int Num2) {
		NumberTwo = Num2;
		return 0;
	}

	int Calculate() {
		cout << pow(NumberOne, NumberTwo);
		return 0;
	}
private:
	int NumberOne;
	int NumberTwo;


};

class RGBA // task two 
{
public:
	RGBA(uint8_t green, uint8_t blue, uint8_t red)
		: m_green(green), m_blue(blue), m_red(red),m_alpha(255)
	{}
	void Print() {
		cout << int(m_green) << " " << int(m_blue) << " " << int(m_red) << endl;
	}

private:
	uint8_t m_green;
	uint8_t m_blue;
	uint8_t m_red;
	uint8_t m_alpha;

};

int main() {
	Power Obj;
	//
	//Obj.setNumber1(3);
	//Obj.setNumber2(2);
	//Obj.Calculate();
	////////////////////////////////////////////////
	RGBA test(233, 125, 53);
	test.Print();

	return 0;
}