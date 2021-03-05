#pragma once
#include<iostream>
using namespace std;
class Card
{
public:
	enum rank
	{
		ACE=1,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,JACK,QUEEN,KING
	};
	enum suit
	{
		CLUBS,DIAMONDS,HEARTS,SPADES
	};
	friend ostream& operator<<(ostream& os,   Card& aCard);
	Card(rank r = ACE, suit = SPADES, bool ifu = true);

	//获得牌的点数
	int GetValue() const;
	//翻牌
	void Flip();
private:
	rank m_Rank;//牌的点数，枚举类型
	suit m_Suit;//牌的花色
	bool m_IsFaceUp;//是否翻牌
};
 ostream& operator <<(ostream& os,   Card& aCard);
