#include <iostream>
#include <string>
#include <cctype>
int parseHex(const char* hexString)
{
	int result = 0;
	for (int i = 0; hexString[i] != '\0'; ++i)
	{
		char c = hexString[i];
		int value;
		if (std::isdigit(c))
		{
			value = c - '0';
		}
		else if (std::isalpha(c))
		{
			c = std::toupper(c);
			value = c - 'A' + 10;
		}
		else { return 0; } result = (result << 4) + value;
	}return result;
}
int main()
{
	const char* hexStr = "A5";
	int decimal = parseHex(hexStr);
	std::cout << decimal << std::endl;
	return 0;

}