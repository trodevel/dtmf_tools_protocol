#include <iostream>

#include "str_helper.h" // to_string
#include "parser.h"     //

int main()
{
    dtmf_tools::str_helper::write( std::cout, dtmf_tools::tone_e::TONE_9 );

    std::cout << std::endl;

    return 0;
}
