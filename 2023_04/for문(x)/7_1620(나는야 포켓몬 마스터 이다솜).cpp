//실행은 되나 for문이 많아 시간초과 됨
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

	
int main(void)
{
	
	int N = 0;	// 포켓몬의 개수
	int M = 0;	// 맞춰야 하는 문제의 개수(이름이면 번호를, 번호면 이름을 출력) 
	
	cin >> N >> M;
	
	string *s = new string[N+1];
	string *p = new string[M+1];
	
	//포켓몬이름 입력 
	for (int i=1; i <= N; i++)
	{
		cin >> s[i];
	}
	 
	//문제 입력 
	for (int j=0; j < M; j++)
	{
		int a;
		string ss = "";
		cin >> p[j];
		ss = p[j];
		if(ss < "A")			//true 이면 숫자니깐 문자로 바꾸기 65
		{
			a = stoi(p[j]);
			cout << s[a] << endl;
		}
		else
		{
			for (int i=1; i <= N; i++)
			{
				if(s[i] == p[j])
				{
					cout << i << endl;
				}
			}
		}
	}
	delete[] s;
	delete[] p;

	
	return 0;
}
