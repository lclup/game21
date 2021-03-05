#include "Card.h"
Card::Card(rank r, suit s, bool ifu ) :m_Rank(r), m_Suit(s), m_IsFaceUp(ifu) {

}
int Card::GetValue() const {
	//���������泯�£���ô��ʱ��ֵ����0
	int value = 0;
	if (m_IsFaceUp) {
		value = m_Rank;
		if (value > 10) {
			value = 10;
		}
	}
	return value;
}
void Card::Flip() {
	m_IsFaceUp = !(m_IsFaceUp);
}

ostream& operator <<(ostream& os,   Card& aCard) {
	const string RANKS[] = { "0","A","2","3","4","5","6","7","8","9","10","J","Q","K" };
	const string SUITS[] = { "����","��Ƭ","����","÷��" };
	if (aCard.m_IsFaceUp) {
		os << RANKS[aCard.m_Rank].c_str() << SUITS[aCard.m_Suit].c_str();

	}
	else {
		os << "XX";
	}
	return os;
}