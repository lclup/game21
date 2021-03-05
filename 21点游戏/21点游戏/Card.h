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

	//����Ƶĵ���
	int GetValue() const;
	//����
	void Flip();
private:
	rank m_Rank;//�Ƶĵ�����ö������
	suit m_Suit;//�ƵĻ�ɫ
	bool m_IsFaceUp;//�Ƿ���
};
 ostream& operator <<(ostream& os,   Card& aCard);
