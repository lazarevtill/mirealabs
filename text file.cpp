#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	//const std::string source;//где ищем
	const std::string lexeme = "g";//что ищем

	std::string source;
	std::ifstream inf;

	inf.open("myfile.txt");//if (!inf)cerr
	//------------------------- 
	getline(inf, source, '\0');
	//------------------------- 
	inf.close();

	unsigned lexeme_count = 0;

	for (std::size_t pos = 0; pos < source.size(); pos += lexeme.size())
	{
		pos = source.find(lexeme, pos);
		if (pos != std::string::npos)
		{
			++lexeme_count;
		}
		else
		{
			break;
		}
	}
	std::cout << "Result: " << lexeme_count << std::endl;//сколько вхождений
}