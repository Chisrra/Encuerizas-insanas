#include <iostream>
#include <vector>

int main()
{
    std::string word;
    std::cin >> word;

    /*Ambos casos funcionan y tardan más o menos el mismo tiempo de ejecución*/

    // word[0] = toupper(word[0]);
    if(word[0] >= 97)
        word[0] -= 32;

    std::cout << word;

    return 0;
}
