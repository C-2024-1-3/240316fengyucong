#include <iostream>
#include <string>
int indexof(const char* s1, const char* s2)
{
	int len1 =
		std::string(s1).length();
	int len2 =
		std::string(s2).length();
	for (int i = 0; i <= len1 - len2; i++)
	{
		int j;
		for (j = 0; j < len2; ++j)
		{
			if (s1[i + j] != s2[j])
				break;
		}
		if (j == len2)
			return i;
	}return -1;
}
int main()
{
	char s1[100];
	char s2[100];
	std::cout << "�������ַ���s1��";
	std::cin.getline(s1, 100);
	std::cout << "�������ַ���s2��";
	std::cin.getline(s2, 100);
	int result = indexof(s1, s2);
	if (result != -1) {
		std::cout << "s2��s1�е�һ�γ��ֵ��±��ǣ�" << result << std::endl;
	}
	else {
		std::cout << "s2����s1���Ӵ�" << std::endl;
	}
	return 0;
}