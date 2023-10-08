#include <iostream>
#include <string>
#ifndef POKERCARD_H_
#define POKERCARD_H_
class PokerCard{

    public:
        PokerCard();
        PokerCard(int,int);
        void set_number(int);
        void set_number2(char);
        void set_color(int);
        void set_color2(std::string);
        void set_graph(std::string,int);
        int get_number();
        char get_number2();
        int get_color();
        std::string get_color2();
        std::string get_graph(int);

    private:
        int number;
        char number2;
        int color;
        std::string color2;
        std::string graph[21];
};
#endif