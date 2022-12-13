#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> v1;
    int size = people.size();
    std::list<Human>::iterator it = people.end();
    
    for (int i = size; i>0; i--)
    {
        it--;
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
