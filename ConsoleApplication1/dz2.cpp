﻿#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <ctime>    
class MyVector // task 1 
{
private:
    int m_length;
    int* m_data;
    int pointer;
    int left_pointer;
    void realoc()
    {
        int* l_data = new int [m_length+2];
        for (int i = left_pointer; i < pointer; i++) {
            l_data[i] = m_data[i];    
        }
        delete[] m_data;
        m_data = l_data;
        m_length += 2;
    }

public:
    MyVector() :
        m_length(0), m_data(nullptr),pointer(0),left_pointer(0)
    {
    }

    MyVector(size_t length):
        m_length(length),pointer(0)
    {
        if (length > 0)
            m_data = new int[length];
        else
            m_data = nullptr;
    }

    void push_back(int elem) {
        if (pointer < m_length) {
       
        }
        else 
        {
            realoc();
        }
        m_data[pointer] = elem;
        pointer++;
    }
    void Print() 
    {
        for (int i = left_pointer; i < pointer; i++)
        {
            std::cout << m_data[i] << ' ';
        }
        std::cout << std::endl;
    }

    void pop_back()
    {
       (pointer == 0) ? pointer = 0 : pointer--;
    }
    void pop_front() {
        (left_pointer < pointer ) ? left_pointer++ : left_pointer;
    }
    void Sort() 
    {
        for (int i = left_pointer; i < pointer; i++) {
            for (int j = i + 1; j < pointer; j++) {
                if (m_data[i] < m_data[j]) {
                    m_data[i] ^= m_data[j];
                    m_data[j] ^= m_data[i];
                    m_data[i] ^= m_data[j];
                }
            }
        }
    }
    void fill_vec() {
        for (int i = 0; i < m_length; i++) {
            push_back(rand() % 10);
      }
    }
    void compare() { // считает кол во уникальных символов (task 2)
        size_t couter=0;
        Sort();
        for (int i = left_pointer; i < pointer; i++) {
            if (m_data[i] != m_data[i - 1]) {
                couter++;
            }
        }
        std::cout << couter << std::endl;

    }
    ~MyVector()
    {
        delete[] m_data;
    }
};
///////////////////////////////////////////////TASK 3\////////////////////////////////
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

class Card
{
public:
    Card(Card_suits _suits, Card_denomination _denomination)
        :card_suits(_suits), card_denomination(_denomination)
    {

    }
    int  getValue() {
       return card_denomination;
    }

    void flip() { // функция переворота карт
        if (position) {
            position = 0;
            std::cout << "карта рубашкой наверх" << std::endl;
        }
        else {
            position = 1;
            std::cout << "карта рубашкой вниз" << std::endl;
        }
    }

protected:
    Card_suits card_suits;
    Card_denomination card_denomination;
    bool position = 0; /* 0 карта рубашкой наверх
                          1 карта рубашкой вниз */

};
class Hand {
public:
    void Add(Card p_card) { // добавляет карту в руку 
        cards.push_back(p_card);
    }

    void clear(Card* p_card) { // очищает руку 
        cards.erase(it,cards.end());
    }
    int GetValue() {
        for (it; it != cards.end(); it++) {
           *it.getValue();
        }
    }
protected:
    std::vector<Card> cards; // создание вектора с обьектами карт
    std::vector<Card>::iterator it = cards.begin();

};
int main() {
    MyVector vec(15);
    vec.fill_vec();
    vec.compare();

  

}
