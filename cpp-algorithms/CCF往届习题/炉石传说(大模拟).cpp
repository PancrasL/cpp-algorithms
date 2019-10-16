//#include<iostream>
//#include<string>	
//#include<vector>
//using namespace std;
//struct Role//角色
//{
//	int health;//生命值
//	int attack;//攻击力
//	Role() {};
//	Role(int health1, int attack1) :health(health1), attack(attack1) {};
//};
//struct Player//玩家
//{
//	vector<Role> role;
//	Player()
//	{
//		role.push_back(Role(30, 0));//添加英雄
//	}
//};
//int main(void)
//{
//	Player player[2];//玩家
//	int index = 0;//0号玩家为先手玩家，1号玩家为后手玩家
//	int n;//n次操作
//	cin >> n;
//	while (n--)
//	{
//		string op;
//		cin >> op;
//		if (op == "summon")
//		{
//			int a, b, c;
//			cin >> a >> b >> c;//在位置a召唤一个攻击力为b，生命值为c的随从
//			player[index].role.insert(player[index].role.begin() + a, Role(c, b));
//		}
//		else if (op == "attack")
//		{
//			int attacker, defender;
//			cin >> attacker >> defender;
//			player[!index].role[defender].health -= player[index].role[attacker].attack;
//			player[index].role[attacker].health -= player[!index].role[defender].attack;
//			if (player[!index].role[defender].health <= 0)//防御者的随从死亡
//			{
//				if (defender != 0)
//					player[!index].role.erase(player[!index].role.begin() + defender);
//				else break;//英雄死亡
//			}
//			if (player[index].role[attacker].health <= 0)//进攻者的随从死亡
//			{
//				player[index].role.erase(player[index].role.begin() + attacker);
//			}
//		}
//		else if (op == "end")
//		{
//			index = !index;//切换玩家
//		}
//	}
//	/*输出胜负*/
//	if (player[0].role[0].health <= 0) cout << -1 << endl;
//	else if (player[1].role[0].health <= 0) cout << 1 << endl;
//	else cout << 0 << endl;
//
//	/*先手玩家*/
//	cout << player[0].role[0].health << endl;
//	cout << player[0].role.size() - 1;
//	for (int i = 1; i < player[0].role.size(); i++) cout << ' ' << player[0].role[i].health;
//	cout << endl;
//	/*后手玩家*/
//	cout << player[1].role[0].health << endl;
//	cout << player[1].role.size() - 1;
//	for (int i = 1; i < player[1].role.size(); i++) cout << ' ' << player[1].role[i].health;
//}