#include <iostream>


int main()
{
    int l, r, a, team;

    std::cin >> l >> r >> a;

    //If any of them are 0 and cannot completed
    if( ((l == 0) || (r == 0)) && (a == 0))
    {
        std::cout << 0 << std::endl;
        return 0;
    }

    //This will happen if there are more right-handers than left-handers
    if(l < r)
    {
        if ((l + a) < r) l += a;
        else
        {
            a -= r - l;
            l = r;
        }
    }

    //This will happen if there are more left-handers than right-handers
    else if(r < l)
    {
        if ((r + a) < l) r += a;
        else
        {
            a -= l - r;
            r = l;
        }
    }

    //When we have or get equality
    if((l == r) && (a > 1))
    {
        team = r + a/2;
    }
    else team = std::min(l, r);



    std::cout << team * 2 << std::endl;

    return 0;
}
