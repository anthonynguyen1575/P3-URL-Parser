#include <iostream>
#include <string>


int main()
{
    std::cout << "Please enter a URL: ";

    std::string URL;
    std::cin >> URL;

    std::string scheme;
    std::string authority;
    std::string path;

    int colonPlacement = URL.find(":");

    scheme = URL.substr(0, colonPlacement + 1);

    int forwardSlashPlacement = URL.find_first_of("/", colonPlacement + 3);

    authority = URL.substr(colonPlacement + 1, forwardSlashPlacement - colonPlacement - 1);

    path = URL.substr(forwardSlashPlacement);
    

    std::cout << "scheme = " << scheme << "\n";
    std::cout << "authority = " << authority << "\n";
    std::cout << "path = " << path << "\n";
}