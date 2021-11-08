#include <fstream>
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Invalid argument" << std::endl;
		return (0);
	}
	std::string  filename = argv[1];

	std::ifstream ifs(filename);
	
	if (ifs.fail())
	{
		std::cout << "Faild to open file" << std::endl;
	}

	std::ofstream ofs("test.cpp");
    if (ofs.fail())
    {
        std::cout << "Failed to open file" << std::endl;
    }

	std::string line;
	while (std::getline(ifs, line))
	{
		ofs << line << std::endl;
	}	
	
} 
