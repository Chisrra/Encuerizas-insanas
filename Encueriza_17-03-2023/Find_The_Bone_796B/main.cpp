#include <iostream>
#include <vector>

#define   NeedForSpeed std::ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);

int main()
{
    NeedForSpeed

    long n, m, k; //Cups, holes, No. swappaing
    long u, v; //positions of the cups to be swapped
    long position; //actual position

    std::cin >> n >> m >> k;


    std::vector<bool> holes(n+1,false);

    for(long i = 0; i < m; i++)
    {
        std::cin >> position;
        holes[position] = true;
    }

    position = 1;

    while(k > 0)
    {
        std::cin >> u >> v;

        if(holes[position]) break;

        if(u == position) position = v;
        else if(v == position) position = u;

        k--;
    }

    std::cout << position << std::endl;

    return 0;
}
