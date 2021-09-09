#pragma once
#include<string>

class user
{
private:
    unsigned int age;
    std::string name;
    float height;
    float weight;
public:
    user(unsigned int age, std::string name, float height, float weight);
    ~user();

    unsigned int GetAge() const;
    std::string GetName() const;
    float GetHeight() const;
    float GetWeight() const;
};

