# (a-b) + (b-a)
#include <iostream>
int main()
{
	int A_n = 0;	//���� A�� ���� ���� 
	int B_n = 0;	//���� B�� ���� ����
	int *A = new int[A_n+1];
	int *B = new int[B_n+1];
	
	cin >> A_n >> B_n;
	for(int i=0; i<A_n; i++)
	{
		cin >> A[i];
	}
	
	for(int j=0; j<B_n; j++)
	{
		cin >> B[i];
	}
	
	
	return 0;
}
