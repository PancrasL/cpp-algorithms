#include<string>
#include<iostream>

using namespace std;
const int N = 1e3 + 7; //最大磁盘数
const string base = "0123456789ABCDEF";
string hardDisk[N];
int n, s, l, max_k;
int to_int (char ch) {
    if (ch >= '0' && ch <= '9') return ch - '0';
    else  return ch - 'A' + 10;
}
void _xor (string& ans, string str) {
    for (int i = 0; i < str.size(); i++) {
        int x = to_int(ans[i]);
        int y = to_int(str[i]);
        ans[i] = base[(x ^ y)];
    }
}
string get_xor (int disk, int _start) {
    string ans(8,'0');
    for (int i = 0; i <= n; i++)
        if (i != disk)
            _xor(ans, hardDisk[i].substr(_start, 8));
    return ans;
}
int main ()
{
    ios::sync_with_stdio(false);
    cin >> n;//硬盘数目
    cin >> s;//条带大小
    cin >> l;//现存的硬盘数目
    n -= 1; // (n块数据,1块冗余)
    
    for (int i = 1; i <= l; i++) {
        int id; 
        cin >> id;
        cin >> hardDisk[id];

        max_k = hardDisk[id].size() / 8 / s;//条带数 = 磁盘总块数/每条带块数
    }

    int m; 
    cin >> m;
    while (m--) {
        int block; //准备读取的块号
        cin >> block;

        int y = block / s;//条带号
        int k = y / n;//条带编号
        int disk = (n - k % (n + 1) + y % n + 1) % (n + 1);
        if (k >= max_k) cout << "-\n";
        else  if (hardDisk[disk].size() != 0) {
            int _start = 8 * (k * s + block % s);
            cout << hardDisk[disk].substr(_start, 8) << "\n";
        }
        else if (hardDisk[disk].size() == 0 && l == n) {
            int _start = 8 * (k * s + block % s);
            cout << get_xor(disk, _start) << "\n";
        }
        else  cout << "-\n";
    }
    return 0;
}