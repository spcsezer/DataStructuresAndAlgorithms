#include<iostream>
#include<vector>
#include<algorithm>

struct Hash
{
    std::vector<std::vector<std::string>> names;

    void addHash(std::string name);
    void deleteHash(std::string name);

    int hashFunction(std::string name);

    void printHash();

    Hash()
    {
        names.resize(10);
    }
};

void Hash::addHash(std::string name)
{
    int hashCode = hashFunction(name);
    names[hashCode].push_back(name);
}

void Hash::deleteHash(std::string name)
{
    int hashCode = hashFunction(name);

    auto it = std::find(names[hashCode].begin(), names[hashCode].end(), name);
    if(it != names[hashCode].end())
    {
        names[hashCode].erase(it);
    }
}

int Hash::hashFunction(std::string name)
{
    int sum = 0;

    for(char character : name)
    {
        sum += character;
    }
    return sum%10;
}

void Hash::printHash()
{
    for(int i = 0; i < names.size(); i++)
    {
        for(int j = 0; j < names.at(i).size(); j++)
        {
            std::cout << names[i][j] << ", ";
        }
        std::cout << std::endl;
    }
}
