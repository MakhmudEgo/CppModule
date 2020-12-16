/*
 *
 *
 * ex 00
 *
 *
 */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	unsigned int index = 1;
	unsigned int i;

	if (argc > 1)
	{
		while (argv[index])
		{
			i = 0;
			while (argv[index][i])
			{
				std::cout << (char)toupper(argv[index][i]);
				i++;
			}
			index++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}
