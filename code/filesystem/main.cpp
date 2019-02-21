#include <iostream>
#include <experimental/filesystem>

using namespace std::experimental::filesystem;

int main(int arg_count, char* arguments[])
{
    path program_path(arguments[0]);
    auto program_directory = program_path.parent_path();

    std::cout << arguments[0] << '\n';
    std::cout << program_directory << '\n';

    for (const auto & entry : directory_iterator(program_directory))
        std::cout << entry.path() << std::endl;
}