#pragma once
#include "hand.h"
#include"GenericPlayer.h"
 
#include <algorithm>
class Deck :public Hand {
public:
	Deck();
	virtual ~Deck()
	{

	}
	void Populate();//产生52张牌

	void Shuffle();

	void Deal(Hand& hand);//发牌

	void AdditionalCards(GenericPlayer& aGenericPlayer);
};

