#include <iostream>
int main()
{
	int N = 0;	//������ �ִ� ����ī���� ���� 
	int M = 0;	//���� ���� ī���� ���� 
	
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
