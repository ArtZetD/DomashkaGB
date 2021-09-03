﻿#include <iostream>
#include <string>

enum Card_suits { // перечисление мастей карты
    SPADES, // ПИКИ 
    CLUBS,  // КРЕСТИ 
    HEARTS, // ЧЕРВИ 
    DIAMONDS // БУБЫ
};
enum Card_denomination // перечисление достоинств карты
{
    ACE = 1, // ТУЗ 
    TWO = 2, // ДВА
    THREE = 3, // ТРИ 
    FOUR = 4, // ЧЕТЫРЕ 
    FIVE = 5, // ПЯТЬ
    SIX = 6, // ШЕСТЬ
    SEVEN = 7, // СЕМЬ 
    EIGHT = 8, // ВОСЕМЬ
    NINE = 9,  // ДЕВЯТЬ
    TEN = 10, // ДЕСЯТЬ
    JACK = 10, // ВАЛЕТ
    QUEEN = 10, // КОРОЛЕВА
    KING = 10, // КОРОЛЬ
};
using namespace std;
/*///////////////////////////////////TASK1\/////////////////////////////////////////////////*/
class Figure
{
public:
    virtual void area() = 0;

};

class Circle : public Figure
{
public:

    Circle(float c_radius) : radius(c_radius) {}
    void area() {
        cout << " circle area = " << pi * radius * radius << endl;
    }
protected:
    float pi = 3.14f;
    float radius;

};

class Parallelogram : public Figure
{
public:
    Parallelogram() = default;
    Parallelogram(float c_height, float c_width) : height(c_height), width(c_width)
    {}
    void area()
    {
        cout << " parallelogram area = " << height * width << endl;
    }
protected:
    float height;
    float width;
};


class Rectangle : public Parallelogram
{
public:
    Rectangle(float c_length, float c_width) :length(c_length), width(c_width)
    {}
    void area()
    {
        cout << " rectangle area = " << length * width << endl;
    }
protected:
    float length;
    float width;
};

class Square : public  Parallelogram
{
public:
    Square(float c_length, float c_width) :length(c_length), width(c_width)
    {}
    void area()
    {
        cout << " square area = " << length * width << endl;
    }
protected:
    float length;
    float width;
};

class Rhombus : public Parallelogram
{
public:
    Rhombus(float c_diagonal1, float c_diagonal2) :diagonal1(c_diagonal1), diagonal2(c_diagonal2)
    {}
    void area()
    {
        cout << " rombus area = " << (diagonal1 * diagonal2) / 2 << endl;
    }
protected:
    float diagonal1;
    float diagonal2;
};


/*////////////////////////////////////////////////TASK2\////////////////////////////////////////////////////////////////////*/

class Car
{
public:

protected:
    string company;
    string model;
};
class PassengerCar : virtual public Car
{
public:

    PassengerCar()
    {
        company = "tesla";
        model = "model X";
        cout << "company - " << company << " " << "model - " << " " << model << "\n";
    }
};
class Bus : virtual public Car
{
public:
    Bus() {
        company = "toyota";
        model = "Hiace ";
        cout << "company - " << company << " " << "model - " << " " << model << "\n";
    }
};
class Minivan : virtual public Bus, public PassengerCar
{
public:
    Minivan()
    {
        company = "Mersedes";
        model = "V-class ";
        cout << "company - " << company << " " << "model - " << " " << model << "\n";
    }
};

/*////////////////////////////////////////////////TASK3\////////////////////////////////////////////////////////////////////*/
class Card
{
public:
    Card(Card_suits _suits, Card_denomination _denomination)
        :card_suits(_suits), card_denomination(_denomination)
    {

    }
    void getValue() {
        cout << card_denomination << '\n';
    }

    void flip() {
        if (position) {
            position = 0;
            cout << "карта рубашкой наверх" << endl;
        }
        else {
            position = 1;
            cout << "карта рубашкой вниз" << endl;
        }
    }

protected:
    Card_suits card_suits;
    Card_denomination card_denomination;
    bool position = 0; /* 0 карта рубашкой наверх
                          1 карта рубашкой вниз */

};

int main() {
    setlocale(LC_ALL, "RU");
    //Circle circle(3);
    //Parallelogram parallelogram(3,4);
    //Rectangle rectangle(4, 5);
    //Square square(5, 5);
    //Rhombus rombus(1, 4);

    //Figure* cirptr = &circle;
    //Figure* paralptr = &parallelogram;
    //Figure* recptr = &rectangle;
    //Figure* squptr = &square;
    //Figure* romptr = &rombus;

    //cirptr->area();
    //paralptr->area();
    //recptr->area();
    //squptr->area();
    //romptr->area();

    PassengerCar passengerCar;
    Bus bus;
    Minivan minivan;
    Card card(SPADES, FIVE);
    card.getValue();
}