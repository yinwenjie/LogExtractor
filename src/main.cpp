#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        std::cerr << "Error: too few input paramaters." << std::endl;
        return -1;
    }

    std::ifstream ifs;
    ifs.open(argv[1], std::ifstream::in);
    if (!ifs.is_open())
    {
        std::cerr << "Error:open input file failed." << std::endl;
        return -1;
    }
    std::ofstream ofs;
    ofs.open(argv[argc - 1], std::ofstream::out);
    if (!ofs.is_open())
    {
        std::cerr << "Error:open output file failed." << std::endl;
        return -1;
    }

    while (!ifs.eof())
    {
        std::string log_line;
        std::getline(ifs, log_line);
        if (log_line.find(argv[2]) != std::string::npos)
        {
            std::cout << "Log line:" << log_line << std::endl;
            ofs << log_line << std::endl;
        }
    }

    if (ifs.is_open())
    {
        ifs.close();
    }
    if (ofs.is_open())
    {
        ofs.close();
    }

    return 0;
}