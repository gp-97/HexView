/*
 * ReadFile.hpp: Header File for reading files as binary.
 */

#ifndef HEXVIEW_INCLUDE_READFILE_HPP
#define HEXVIEW_INCLUDE_READFILE_HPP
#pragma once

#include <iostream>

namespace ReadFile
{
class ReadFile
{
    public:
        ReadFile() = default;

        ReadFile(std::string fileName);

        void setFileName(std::string fileName);
        std::string getFileName() const;

        ~ReadFile() = default;
    private:
        std::string fileName_;
};

#endif // HEXVIEW_INCLUDE_READFILE_HPP
}
