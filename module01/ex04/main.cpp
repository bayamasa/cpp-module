#include <fstream>
#include <iostream>

int main(int argc, char *argv[])
{
	std::string filename;
	std::string orig;
	std::string repl;

	if (argc != 4)
	{
		std::cout << "Invalid argument" << std::endl;
		return (0);
	}

	filename = argv[1];
	orig = argv[2];
	repl = argv[3];

	std::ifstream ifs(filename);
	
	if (ifs.fail())
	{
		std::cout << "Faild to open file" << std::endl;
	}

	std::ofstream ofs(filename + ".replace");
    if (ofs.fail())
    {
        std::cout << "Failed to open file" << std::endl;
    }

	std::string line;
	while (std::getline(ifs, line))
	{
		ssize_t index = line.find(orig);
		if (index > 0)
		{
			ofs << line.erase(index, orig.length()).insert(index, repl) << std::endl;
		}
		else
		{
			ofs << line << std::endl;
		}
	}
} 
