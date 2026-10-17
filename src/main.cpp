/*
 * Main.cpp: Main file for the project
 */

#include <include/ReadFile.hpp>

int main()
{
    ReadFile::ReadFile *read = new ReadFile::ReadFile("file.txt");
    std::cout << "Hex View Main: " << read->getFileName() << '\n';
    delete read;
    return 0;
}
