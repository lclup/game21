#include "Player.h"
Player::Player(const string& name):GenericPlayer(name){}

void Player::Win() const {
	cout << m_Name.c_str() <<"��ʤ��" <<endl;
}

void Player::Lose() const {
	cout <<  m_Name.c_str() << "ʧ����" << endl;
}
void Player::Push() const {
	cout <<  m_Name.c_str() << "ƽ��" << endl;
}
bool Player::IsHitting()   {
	cout <<   m_Name.c_str()  << ",���Ƿ�Ҫ����(Y/N)";
	char response;
	cin >> response;
	return (response == 'y' || response == 'Y');
}