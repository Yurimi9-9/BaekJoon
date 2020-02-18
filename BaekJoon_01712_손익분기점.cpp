// 백준 1712 - 손익분기점
#include <iostream>

using namespace std;

int main()
{
	int A=0, B=0, C=0;	// A=고정비용, B=가변비용, C=단위판매비용
	cin >> A >> B >> C;
	int n=0;	// 손익분기점에서의 판매량

	if(C <= B)	// C <= B 일 때 손익분기점 존재X
		cout << -1;
	else		// 판매량 n > A/(C-B)
	{
		n = A/(C-B); // 손익분기점의 판매량 식 대입
		if(n <= A/(C-B)) // 이익이 발생해야 하므로 식의 값보다 커야함
			n++;
		cout << n;
	}

	return 0;
}
