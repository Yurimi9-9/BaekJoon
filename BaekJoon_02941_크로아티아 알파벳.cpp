// 백준 2941 - 크로아티아 알파벳
#include <iostream>

using namespace std;

int main()
{
	string word;
	cin >> word;

	int count=word.length();
	for(int i=1; i<int(word.length()); i++)
	{
		if(word[i]=='=')
		{
			if(word[i-1]=='c' || word[i-1]=='s')
				count--;
			else if(word[i-1]=='z')
				if(word[i-2]=='d')
					count-=2;
				else
					count--;
		}
		if(word[i]=='-')
			if(word[i-1]=='c' || word[i-1]=='d')
				count--;
		if(word[i]=='j')
			if(word[i-1]=='l' || word[i-1]=='n')
				count--;
	}

	cout << count;

	return 0;
}
