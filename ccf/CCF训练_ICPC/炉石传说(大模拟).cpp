//#include<iostream>
//#include<string>	
//#include<vector>
//using namespace std;
//struct Role//��ɫ
//{
//	int health;//����ֵ
//	int attack;//������
//	Role() {};
//	Role(int health1, int attack1) :health(health1), attack(attack1) {};
//};
//struct Player//���
//{
//	vector<Role> role;
//	Player()
//	{
//		role.push_back(Role(30, 0));//���Ӣ��
//	}
//};
//int main(void)
//{
//	Player player[2];//���
//	int index = 0;//0�����Ϊ������ң�1�����Ϊ�������
//	int n;//n�β���
//	cin >> n;
//	while (n--)
//	{
//		string op;
//		cin >> op;
//		if (op == "summon")
//		{
//			int a, b, c;
//			cin >> a >> b >> c;//��λ��a�ٻ�һ��������Ϊb������ֵΪc�����
//			player[index].role.insert(player[index].role.begin() + a, Role(c, b));
//		}
//		else if (op == "attack")
//		{
//			int attacker, defender;
//			cin >> attacker >> defender;
//			player[!index].role[defender].health -= player[index].role[attacker].attack;
//			player[index].role[attacker].health -= player[!index].role[defender].attack;
//			if (player[!index].role[defender].health <= 0)//�����ߵ��������
//			{
//				if (defender != 0)
//					player[!index].role.erase(player[!index].role.begin() + defender);
//				else break;//Ӣ������
//			}
//			if (player[index].role[attacker].health <= 0)//�����ߵ��������
//			{
//				player[index].role.erase(player[index].role.begin() + attacker);
//			}
//		}
//		else if (op == "end")
//		{
//			index = !index;//�л����
//		}
//	}
//	/*���ʤ��*/
//	if (player[0].role[0].health <= 0) cout << -1 << endl;
//	else if (player[1].role[0].health <= 0) cout << 1 << endl;
//	else cout << 0 << endl;
//
//	/*�������*/
//	cout << player[0].role[0].health << endl;
//	cout << player[0].role.size() - 1;
//	for (int i = 1; i < player[0].role.size(); i++) cout << ' ' << player[0].role[i].health;
//	cout << endl;
//	/*�������*/
//	cout << player[1].role[0].health << endl;
//	cout << player[1].role.size() - 1;
//	for (int i = 1; i < player[1].role.size(); i++) cout << ' ' << player[1].role[i].health;
//}