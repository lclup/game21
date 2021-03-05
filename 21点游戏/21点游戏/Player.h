#pragma once
#include "genericplayer.h"
class Player :public GenericPlayer {
public:
	Player(const string& name = "");
	virtual ~Player()
	{

	}
	  bool IsHitting()  ;

	void Win() const;
	void Lose() const;
	void Push() const;
};

