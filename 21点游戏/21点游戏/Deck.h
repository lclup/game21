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
	void Populate();//����52����

	void Shuffle();

	void Deal(Hand& hand);//����

	void AdditionalCards(GenericPlayer& aGenericPlayer);
};

