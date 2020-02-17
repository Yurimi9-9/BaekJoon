// 백준 1316 - 그룹 단어 체커 (예: aaabbcc=그룹단어, aaba=그룹단어X,a가 떨여져 나타남)
#include <iostream>

using namespace std;

int main()
{
	int N=0;	// 입력 받을 단어 수
	cin >> N;
	string words[N]={};
	for(int i=0; i<N; i++)
		cin >> words[i];	// 단어 입력 받기

	int count=N;	// 그룹 단어의 개수 세기 (전체 단어 수 - 그룹단어가 아닌 단어 수)
	for(int i=0; i<N; i++)
	{	// 입력 받은 단어 별로 체크
		bool used[26]={};	// 알파벳 사용 유무 (for 그룹 체크)
		for(int j=0; j<words[i].length(); j++)
		{
			int index = words[i][j]-'a';
			if(used[index])	// 그룹을 벗어난 알파벳 발견
			{
				j=100;	// 해당 단어 체크 끝내기 - 그룹단어 아님
				count--;
			}
			else	// 그룹 가능한 상태
				if(words[i][j]!=words[i][j+1])
					used[index] = true;	// 그룹 사용 종료 표시
		}
	}
	cout << count;

	return 0;
}
