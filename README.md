# PrintPokerCard
## 概要：
	用C++ 物件導向的概念實作列印PokerCard
 
    先讓使用者輸入想要一行有幾張撲克牌，接著依照使用者需求印出撲克牌
    
    在PokerCard.h及PokerCard.cpp定義撲克牌
    
    一張撲克牌包含數字大小、花色、花色的圖形
    
    在main主程式宣告陣列為52的PokerCardSet來存放52張撲克牌
    
	總行數：394行

## 遭遇的困難以解決方式：

遭遇的問題：卡最久的點是印出圖形的部分

    第一次製作我使用了gotoxy()的函式來將輸出的位置做調整
    
    但因為撲克牌共有52張，一定會超出版面大小，故當印到第三行左右時排版會全部亂掉

解決方法：直接輸出

    在PokerCard.h宣告20個位置才存放花色每一行的字串(圖形)
    
    並將如何判斷花色的圖形該擺在哪裡寫在PokerCard.cpp
    
    最後在主程式定義_print函式來進行輸出
    

    同一花色的撲克牌除了第二行及第十九行因為要放數字大小，所以會有更動外，其餘行都相同，直接輸出即可
    
    由於10這個數字比其他數字多佔一格空間，所以也要當特例處理
