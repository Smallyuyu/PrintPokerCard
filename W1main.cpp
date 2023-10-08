#include <bits/stdc++.h>
#include "PokerCard.h"
#include "PokerCard.cpp"
using namespace std;
PokerCard PokerCardSet[53];
void _print(int remain ,int n, int curRow){
    int cur;
    if(remain != 0){
        cur = (curRow - 1) * n + 1;
        n = remain;
    }
    else cur = (curRow - 1) * n + 1;
    int now;
    int nowColor;
    int nowNumber;
    for(int j = 1 ; j <= 20 ; j++){
        if(j == 2){
            for(int i = 0 ; i < n ; i++){
                now = cur + i;
                nowNumber = PokerCardSet[now].get_number();
                if(PokerCardSet[now].get_number2() == 'N'){
                    if(PokerCardSet[now].get_number() == 10){
                        cout<<"*10                   *";
                    }
                    else{
                        cout<<"*"<<PokerCardSet[now].get_number()<<"                    *";
                    }
                }
                else{
                    cout<<"*"<<PokerCardSet[now].get_number2()<<"                    *";
                }
                cout<<"  ";
            }
        }
        else if(j == 19){
                for(int i = 0 ; i < n ; i++){
                    now = cur + i;
                    nowNumber = PokerCardSet[now].get_number();
                    if(PokerCardSet[now].get_number2() == 'N'){
                        if(PokerCardSet[now].get_number() == 10){
                            cout<<"*                   10*";
                        }
                        else{
                            cout<<"*"<<"                    "<<PokerCardSet[now].get_number()<<"*";
                        }
                    }
                    else{
                        cout<<"*"<<"                    "<<PokerCardSet[now].get_number2()<<"*";
                }
                cout<<"  ";
            }
        }
        else{
            for(int i = 0 ; i < n ; i++){
                now = cur + i;
                cout<<PokerCardSet[now].get_graph(j);
                cout<<"  ";
            }
        }
        cout<<'\n';
    }
}
int main(){
    //自訂義模式
    cout<<"請輸入一行幾數"<<'\n'<<'\n';
    int n,column,remain;
    cin >> n;

    //規定輸入的數字範圍
    if(n == 0 || n > 52){
        cout<<'\n'<<"ERROR"<<'\n';
        system("pause");
        return 0;
    }
    cout<<'\n';

    //運算需印出幾行以及最後一行剩多少張
    column = 52 / n;
    remain = 52 % n;

    //給每張撲克牌賦予大小及花色
    for(int i = 1 ; i <= 13 ; i++){
        for(int j = 1 ; j <= 4 ; j++){
            PokerCardSet[i * 4 + j - 4].set_number(i);
            PokerCardSet[i * 4 + j - 4].set_color(j);
        }
    }

    //印出每行撲克牌
    for(int i = 1 ; i <= column ; i++){
        _print(0, n, i);
        cout<<'\n';
        cout<<'\n';
    }
    
    //印出最後剩餘的撲克牌
    if(remain != 0 ) _print(remain, n, column + 1);

    //運行結束
    cout<<'\n'<<'\n'<<"運行結束"<<'\n';
    system("pause");
    return 0;
}