#include "GenericPlayer.h"

 GenericPlayer::GenericPlayer(const string& name ):m_Name(name){}
 ostream& operator <<(ostream& os,   GenericPlayer& aGenericplayer) {
	os << aGenericplayer.m_Name.c_str()<< ":\t";
	vector<Card*>::const_iterator pCard;
	if (!aGenericplayer.m_Cards.empty()) {
		for (pCard = aGenericplayer.m_Cards.begin();
			pCard != aGenericplayer.m_Cards.end();++pCard) {
			os << *(*pCard) << "\t";
		}

		if (aGenericplayer.GetTotal() != 0)
			cout << "(" << aGenericplayer.GetTotal() << ")";
	}
	else {
		os << "<empty>";
	}
	return os;
}
  bool  GenericPlayer::IsHitting() 
 {
	 return  true ;
 }