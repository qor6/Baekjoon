#include <iostream>
int main()
{
	int N = 0;	//가지고 있는 숫자카드의 개수 
	int M = 0;	//비교할 숫자 카드의 개수 
	
	cin >> N;
	int *s = new string[N+1];
	for (int i=0; i < N; i++)
	{
		cin >> s[i];
	}
	cin >> M;
	int *p = new string[M+1];	 
	int *c = new string[M+1];
	for (int j=0; i < N; i++)
	{
		cin >> p[i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if(s[i]==p[j])
			{
				c[i]++;
			}
		}
	}
	return 0;
}
