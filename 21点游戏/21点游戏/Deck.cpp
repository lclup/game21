#include "Deck.h"

Deck::Deck() {
	m_Cards.reserve(52);
	Populate();
}

void Deck::Populate() {
	Clear();
	for (int s = Card::CLUBS;s <= Card::SPADES;++s) {
		for (int r = Card::ACE;r <= Card::KING;++r) {
			Add(new Card(static_cast<Card::rank>(r), static_cast<Card::suit>(s)));
		}
	}
}

void Deck::Shuffle() {
	random_shuffle(m_Cards.begin(), m_Cards.end());
}

void Deck::Deal(Hand& hand) {
	if (!m_Cards.empty()) {
		hand.Add(m_Cards.back());
		m_Cards.pop_back();
	}
	else {
		cout << "ÅÆÃ»ÓÐÁË" << endl;
	}
}

void Deck::AdditionalCards(GenericPlayer& aGen) {
	cout << endl;
	while (!(aGen.IsBusted()) && aGen.IsHitting()) {
		Deal(aGen);
		cout << aGen << endl;
		if (aGen.IsBusted()) {
			aGen.Bust();
		}
	}
}