#include "Player.h"
Player::Player(const string& name):GenericPlayer(name){}

void Player::Win() const {
	cout << m_Name.c_str() <<"获胜了" <<endl;
}

void Player::Lose() const {
	cout <<  m_Name.c_str() << "失败了" << endl;
}
void Player::Push() const {
	cout <<  m_Name.c_str() << "平手" << endl;
}
bool Player::IsHitting()   {
	cout <<   m_Name.c_str()  << ",您是否要跟牌(Y/N)";
	char response;
	cin >> response;
	return (response == 'y' || response == 'Y');
}