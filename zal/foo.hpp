#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> vector;
    for(auto r_it = people.rbegin(); r_it != people.rend(); r_it++)
    {
      //inkrementacja pola age 
      r_it->birthday();

      if(r_it->isMonster() == true)
      vector.push_back('n');
      else if (r_it->isMonster()==false)
      vector.push_back('y');
    }

    return {vector};
}