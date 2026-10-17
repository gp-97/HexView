/*
 * ReadFile.cpp: Declaration and implementation of ReadFile.
 */

#include <include/ReadFile.hpp>

namespace ReadFile
{
ReadFile::ReadFile(std::string fileName)
{
    fileName_ = fileName;
}

void ReadFile::setFileName(std::string fileName)
{
    fileName_ = fileName;
}

std::string ReadFile::getFileName() const
{
    return fileName_;
}
}
