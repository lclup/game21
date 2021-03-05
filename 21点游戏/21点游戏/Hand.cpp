#include "Hand.h"

Hand::Hand() {
	m_Cards.reserve(7);
}

Hand::~Hand() {
	Clear();
}

void Hand::Add(Card* pCard) {
	m_Cards.push_back(pCard);
}
void Hand::Clear() {
	vector<Card*>::iterator iter = m_Cards.begin();
	for (iter = m_Cards.begin();iter != m_Cards.end();iter++) {
		delete *iter;
		*iter = nullptr;
	}
	m_Cards.clear();
}

int Hand::GetTotal() const {
	if (m_Cards.empty())
		return 0;
	if (m_Cards[0]->GetValue() == 0)
		return 0;

	//ȫ�����ƣ����ǽ�ace��Ϊ1
	int total = 0;
	vector<Card*>::const_iterator iter;
	for (iter = m_Cards.begin();iter != m_Cards.end();++iter) {
		total += (*iter)->GetValue();
	}

	bool containAce = false;
	for (iter = m_Cards.begin();iter != m_Cards.end();++iter) {
		if ((*iter)->GetValue() == Card::ACE)
			containAce = true;
	}

	//��������Ace�����ҵ�ǰ��ֵ��С�����ǽ�����Ϊ11
	if (containAce && total <= 11)
		total += 10;
	return total;
}