#pragma once
#include "genericplayer.h"
class House :public GenericPlayer {
public:
	House(const string& name="House"):GenericPlayer(name){}
	virtual ~House()
	{

	}

	  bool IsHitting() ;

	inline void FilpFirstCard() {
		if (!(m_Cards.empty())) {
			m_Cards[0]->Flip();
		}
		else {
			cout << "没有要翻的牌" << endl;
		}
	}
};

