#include<vector>
#include<iostream>
using namespace std;
char grade[] = { 'E', 'E', 'E', 'E', 'E', 'E', 'D', 'C', 'B', 'A', 'A' };
int main(void) {
	int score;
	while (cin>>score)
	{
		if (score < 0 || score>100)
			cout << "Score is error!" << endl;
		else
			cout << grade[score / 10] << endl;
	}
	return 0;
}