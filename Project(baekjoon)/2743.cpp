#include<iostream>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);
	
	string s;
	getline(cin, s);
	cout << s.size();

	return 0;
}