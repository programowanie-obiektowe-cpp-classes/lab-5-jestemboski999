#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> v1;
    int size = v1.capacity();
    std::list<Human>::iterator it;
    
    for (it = people.end(); it != people.begin(); it--)
    {
    it->birthday();
    
    if(it->isMonster())
    {
        v1.push_back('n');
    }
    else
    {
        v1.push_back('y');
    }
    }

return(v1);
}
