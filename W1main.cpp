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
    //�ۭq�q�Ҧ�
    cout<<"�п�J�@��X��"<<'\n'<<'\n';
    int n,column,remain;
    cin >> n;

    //�W�w��J���Ʀr�d��
    if(n == 0 || n > 52){
        cout<<'\n'<<"ERROR"<<'\n';
        system("pause");
        return 0;
    }
    cout<<'\n';

    //�B��ݦL�X�X��H�γ̫�@��Ѧh�ֱi
    column = 52 / n;
    remain = 52 % n;

    //���C�i���J�P�ᤩ�j�p�Ϊ��
    for(int i = 1 ; i <= 13 ; i++){
        for(int j = 1 ; j <= 4 ; j++){
            PokerCardSet[i * 4 + j - 4].set_number(i);
            PokerCardSet[i * 4 + j - 4].set_color(j);
        }
    }

    //�L�X�C�漳�J�P
    for(int i = 1 ; i <= column ; i++){
        _print(0, n, i);
        cout<<'\n';
        cout<<'\n';
    }
    
    //�L�X�̫�Ѿl�����J�P
    if(remain != 0 ) _print(remain, n, column + 1);

    //�B�浲��
    cout<<'\n'<<'\n'<<"�B�浲��"<<'\n';
    system("pause");
    return 0;
}