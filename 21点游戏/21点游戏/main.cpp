#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include"Game.h"
using namespace std;
 
int main(void) {

	cout << "欢迎使用21点游戏" << endl;
	int numPlayers = 0;
	while (numPlayers < 1 || numPlayers>7) {
		cout << "请输入玩家的个数:";
		cin >> numPlayers;
	}
	vector<string> names;
	string name;
	for (int i = 0;i < numPlayers;i++) {
		cout << "请输入用户名";
		cin >> name;
		names.push_back(name);
	}
	cout << endl;
	Game aGame(names);
	char ans = 'y';
	while (ans != 'n' && ans != 'N') {
		aGame.Play();
		cout << "您还想再接着游戏吗？" << endl;
		cin >> ans;
	}
	system("pause");
	return 0;
}
 