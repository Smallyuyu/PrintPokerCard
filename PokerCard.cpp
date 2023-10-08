#include <iostream>
#include <string>
#include "PokerCard.h"

PokerCard::PokerCard(){
    set_number(0);
    set_number2('N');
    set_color(0);
    set_color2("N");
}

PokerCard::PokerCard(int number1 , int color1){
    if(number1 == 1) set_number2('A');
    else if(number1 == 11) set_number2('J');
    else if(number1 == 12) set_number2('Q');
    else if(number1 == 13) set_number2('K');
    if(color1 == 1) set_color2("梅花");
    else if(color1 == 2) set_color2("菱形");
    else if(color1 == 3) set_color2("愛心");
    else if(color1 == 4) set_color2("黑桃");
    set_number(number1);
    set_color(color1);
}

void PokerCard::set_number(int number1){
    if(number1 == 1) set_number2('A');
    else if(number1 == 11) set_number2('J');
    else if(number1 == 12) set_number2('Q');
    else if(number1 == 13) set_number2('K');
    number = number1;
}

void PokerCard::set_number2(char number1){
    number2 = number1;
}

void PokerCard::set_color(int color1){
    if(color1 == 1){
        set_color2("梅花");
        set_graph("***********************",1);//1
        set_graph("*                     *",3);//3
        set_graph("*                     *",4);//4
        set_graph("*                     *",5);//5
        set_graph("*          *          *",6);//6
        set_graph("*         ***         *",7);//7
        set_graph("*        *****        *",8);//8
        set_graph("*      *  ***  *      *",9);//9
        set_graph("*     ***  *  ***     *",10);//10
        set_graph("*    *****   *****    *",11);//11
        set_graph("*     ***  *  ***     *",12);//12
        set_graph("*         ***         *",13);//13
        set_graph("*        *****        *",14);//14
        set_graph("*       *******       *",15);//15
        set_graph("*                     *",16);//16
        set_graph("*                     *",17);//17
        set_graph("*                     *",18);//18
        set_graph("***********************",20);//20
    }
    else if(color1 == 2){
        set_color2("方塊");
        set_graph("***********************",1);//1
        set_graph("*                     *",3);//3
        set_graph("*                     *",4);//4
        set_graph("*                     *",5);//5
        set_graph("*          *          *",6);//6
        set_graph("*         ***         *",7);//7
        set_graph("*        *****        *",8);//8
        set_graph("*       *******       *",9);//9
        set_graph("*      *********      *",10);//10
        set_graph("*     ***********     *",11);//11
        set_graph("*      *********      *",12);//12
        set_graph("*       *******       *",13);//13
        set_graph("*        *****        *",14);//14
        set_graph("*         ***         *",15);//15
        set_graph("*          *          *",16);//16
        set_graph("*                     *",17);//17
        set_graph("*                     *",18);//18
        set_graph("***********************",20);//20
    }
    else if(color1 == 3){
        set_color2("愛心");
        set_graph("***********************",1);//1
        set_graph("*                     *",3);//3
        set_graph("*                     *",4);//4
        set_graph("*                     *",5);//5
        set_graph("*    **        **     *",6);//6
        set_graph("*   ****      ****    *",7);//7
        set_graph("*  ******    ******   *",8);//8
        set_graph("*  *******  *******   *",9);//9
        set_graph("*  ****************   *",10);//10
        set_graph("*   **************    *",11);//11
        set_graph("*    ************     *",12);//12
        set_graph("*     **********      *",13);//13
        set_graph("*      ********       *",14);//14
        set_graph("*       ******        *",15);//15
        set_graph("*        ****         *",16);//16
        set_graph("*         **          *",17);//17
        set_graph("*                     *",18);//18
        set_graph("***********************",20);//20
    }
    else if(color1 == 4){
        set_color2("黑桃");
        set_graph("***********************",1);//1
        set_graph("*                     *",3);//3
        set_graph("*                     *",4);//4
        set_graph("*                     *",5);//5
        set_graph("*          *          *",6);//6
        set_graph("*         ***         *",7);//7
        set_graph("*        *****        *",8);//8
        set_graph("*      *********      *",9);//9
        set_graph("*     ***********     *",10);//10
        set_graph("*     ***********     *",11);//11
        set_graph("*        *****        *",12);//12
        set_graph("*         ***         *",13);//13
        set_graph("*        *****        *",14);//14
        set_graph("*                     *",15);//15
        set_graph("*                     *",16);//16
        set_graph("*                     *",17);//17
        set_graph("*                     *",18);//18
        set_graph("***********************",20);//20
    }
    color = color1;
}

void PokerCard::set_color2(std::string color1){
    color2 = color1;
}

void PokerCard::set_graph(std::string graph1,int i){
    graph[i] = graph1;
}

int PokerCard::get_number(){
    return number;
}

char PokerCard::get_number2(){
    return number2;
}

int PokerCard::get_color(){
    return color;
}

std::string PokerCard::get_color2(){
    return color2;
}

std::string PokerCard::get_graph(int i){
    return graph[i];
}