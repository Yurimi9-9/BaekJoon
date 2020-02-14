// 백준 5622 - 다이얼
#include <iostream>

using namespace std;

int main()
{
	string word;
	cin >> word;

	int time = word.length();
	for(int i=0; i<int(word.length()); i++)
	{
		if(word[i] > 'V')
			time += 9;
		else if(word[i] > 'S')
			time += 8;
		else if(word[i] > 'O')
			time += 7;
		else if(word[i] > 'L')
			time += 6;
		else if(word[i] > 'I')
			time += 5;
		else if(word[i] > 'F')
			time += 4;
		else if(word[i] > 'C')
			time += 3;
		else
			time += 2;
	}
	cout << time;

	return 0;
}
