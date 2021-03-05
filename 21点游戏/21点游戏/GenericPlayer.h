#pragma once
#include "hand.h"
class GenericPlayer : public Hand {
	friend ostream& operator <<(ostream& os,  GenericPlayer& aGenericPlayer);
public:
	GenericPlayer(const string& name = "");
	virtual ~GenericPlayer(){}
	virtual bool IsHitting() ;
	bool IsBusted() const {
		return (GetTotal() > 21);
	}
	void Bust()const {
		cout << m_Name.c_str()<< "ÄãÕ¨ÁË" << endl;
	}
protected:
	string m_Name;
};
ostream& operator <<(ostream& os,   GenericPlayer& aGenericplayer);