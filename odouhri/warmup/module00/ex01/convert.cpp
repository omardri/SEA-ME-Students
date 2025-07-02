#include <iostream>
#include <string>

void upperCase(char* str)
{
    int i = 0;
    while (str[i] != 0)
    {
        if (str[i] >= 97)
        {
            str[i] -= 32;
        }
        i++;
    }
}

void lowerCase(char* str)
{
    int i = 0;
    while (str[i] != 0)
    {
        if (str[i] <= 90)
        {
            str[i] += 32;
        }
        i++;
    }
}

int main(int argc, char* argv[]) {
    if (argc != 3) 
    {
        return 0;
    }
    if (argv[1][0] == 'u')
    {
        upperCase(argv[2]);
    }
    else if (argv[1][0] == 'd')
    {
        lowerCase(argv[2]);
    }
    else 
    {
        return 0;
    }
    std::cout << argv[2] << std::endl;

    return 0;
}
