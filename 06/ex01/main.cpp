//
// Created by Mahmud Jego on 1/29/21.
//

#include <iostream>

struct Data {
	std :: string s1;
	int n;
	std :: string s2;
};

void * serialize(void)
{
	char *res = new char[2 * sizeof(std::string) + sizeof(int)];
	std::string alphanumerical = "qwertyuiopasdfghjklzxcvbnm1234567890";
	int i = 0;
	srand(time(NULL));
	for (; i < 8; ++i)
	{
		res[i] = alphanumerical[rand() % alphanumerical.length()];
	}
	*reinterpret_cast<int*>(res + 8) = static_cast<int >(alphanumerical[rand() % alphanumerical.length() - 1]);
	i += 4;
	for (; i < 20; ++i)
	{
		res[i] = alphanumerical[rand() % alphanumerical.length()];
	}
	return (res);
}

Data * deserialize(void * raw)
{
	Data *data = new Data;
	data->s1 = std::string(static_cast<char*>(raw), 8);
	data->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	data->s2 = std::string(static_cast<char*>(raw) + 12, 8);
	delete reinterpret_cast<char*>(raw);
	return data;
}

int main()
{
	std::cout << "hello day 06 :(" << std::endl;

	void * hello = serialize();
	Data * data = deserialize(hello);

	std::cout << "s1: " << data->s1 << std::endl
	<< "n: " << data->n << std::endl
	<< "s2: " << data->s2 << std::endl;

	delete data;

	return (0);
}