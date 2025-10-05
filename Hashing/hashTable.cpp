#include"hashLib.hpp"

int main()
{
    Hash hash;
    while (true)
    {
        int selection = 0;
        std::cout << "1. Add name\n2. Delete name\n3. Print names\n";
        std::cin >> selection;
        switch(selection)
        {
            case 1: {
                std::string name;
                std::cout << "What name you wanna add: ";
                std::cin >> name;
                hash.addHash(name);
                break;
            }
            case 2: {
                std::string name;
                std::cout << "What name you wanna delete: ";
                std::cin >> name;
                hash.deleteHash(name);
                break;
            }
            case 3: hash.printHash(); break;
            
            default: std::cout << "Error!\n"; break;
        }
    }
    return 0;
}
