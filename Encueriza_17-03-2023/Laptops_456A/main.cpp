#include <iostream>

int main()
{
    int n, a, b;

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        if(a < b)
        {
            std::cout << "Happy Alex" << std::endl;
            return 0;
        }
    }
    std::cout << "Poor Alex" << std::endl;

    return 0;
}
