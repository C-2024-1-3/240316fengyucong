#include <iostream>
#include <cstring>
#include <cctype>
void count(const char s[], int counts[])
{
	//初始化counts数组为0
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	for (int i = 0; s[i] != '\0'; ++i)
	{
		if (isalpha(s[i])) {
			char ch = tolower(s[i]);
			int index = ch -'a';
			counts[index]++;
		}
	}
}
int main()
{
	char s[100];
	int counts[26];
	std::cout << "Enter a string:";
	std::cin.getline(s, 100);
	count(s, counts);
	for (int i = 0; i < 26; ++i) {
		if (counts[i] > 0)
		{
			char ch = 'a' + i;
			std::cout << ch << ":" << counts[i] << "times" << std::endl;
		}
	}
	return 0;
}