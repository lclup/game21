#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include"Game.h"
using namespace std;
 
int main(void) {

	cout << "��ӭʹ��21����Ϸ" << endl;
	int numPlayers = 0;
	while (numPlayers < 1 || numPlayers>7) {
		cout << "��������ҵĸ���:";
		cin >> numPlayers;
	}
	vector<string> names;
	string name;
	for (int i = 0;i < numPlayers;i++) {
		cout << "�������û���";
		cin >> name;
		names.push_back(name);
	}
	cout << endl;
	Game aGame(names);
	char ans = 'y';
	while (ans != 'n' && ans != 'N') {
		aGame.Play();
		cout << "�������ٽ�����Ϸ��" << endl;
		cin >> ans;
	}
	system("pause");
	return 0;
}
 