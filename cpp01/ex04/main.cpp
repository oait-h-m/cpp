#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Please enter three parameters" << std::endl;
		return 1;
	}

	std::string fileName = av[1];
	std::string searchWord = av[2];
	std::string replaceWord = av[3];

	if (searchWord.empty())
	{
		std::cout << "Error: search word cannot be empty!" << std::endl;
		return 1;
	}
	
	std::ifstream file(fileName.c_str());
	if (!file.is_open())
	{
		std::cout << "Error opening the file!" << std::endl;
		return 1;
	}
	
	std::string fileNameOut = fileName + ".replace";
	std::ofstream outFile(fileNameOut.c_str());
	if (!outFile.is_open())
	{
		std::cout << "Error creating output file!" << std::endl;
		file.close();
		return 1;
	}
	
	std::string line;
	while (getline(file, line))
	{
		size_t pos = 0;
		size_t lastPos = 0;
		std::string result;
		
		while ((pos = line.find(searchWord, lastPos)) != std::string::npos)
		{
			result += line.substr(lastPos, pos - lastPos);
			result += replaceWord;
			lastPos = pos + searchWord.length();
		}
		result += line.substr(lastPos);
		outFile << result << std::endl;
	}
	file.close();
	outFile.close();
	
	return 0;
}
