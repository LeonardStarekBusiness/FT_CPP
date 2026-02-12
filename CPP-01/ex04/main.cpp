#include <fstream>
#include <iostream>
#include <string>

std::string read_string_from_file(const std::string &file_path)
{
	std::ifstream fd(file_path.c_str(), std::ios_base::in);
	if (!fd.is_open())
		throw std::runtime_error("baal");
	std::string rstr;
	std::string line;
	while (getline(fd, line))
	{
		rstr.append(line);
        rstr.append("\n");
	}
	fd.close();
	return (rstr);
}

void write_to_file(const std::string &file_path, const std::string msg)
{
    std::ofstream fd(file_path.c_str(), std::ios_base::out);
    fd << msg;
    fd.close();
}

std::string ft_replace(std::string str, std::string s1, std::string s2)
{
    size_t n;
    std::string *rstr = &str;
    while ((n = rstr->find(s1)) != (size_t)-1)
    {
        rstr->erase(n, s1.length());
        rstr->insert(n, s2);
    }
    return (*rstr);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "usage: ./ex04 <filename> <s1> <s2>" << std::endl;
		return (0);
	}
	std::string content = read_string_from_file(av[1]);
    std::string outfile = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string modified = ft_replace(content, s1, s2);
    outfile.append(".replace");
	write_to_file(outfile, modified);
}