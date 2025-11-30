#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    std::transform(people.begin(), people.end(), retval.rbegin(), [](Human& h) {
        char status = h.isMonster() ? 'n' : 'y';
        h.birthday();
        return status;
    // Twoja implementacja tutaj
    });
    return retval;
}
