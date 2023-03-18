#include <iostream>

int main()
{
    int n, p, q, cont = 0; //No.rooms, people already in, room capacity

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> p >> q;
        if((q - p) >= 2) cont++;
    }

    std::cout << cont << std::endl;

    return 0;
}
