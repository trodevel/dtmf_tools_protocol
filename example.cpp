#include "protocol.h"
#include "str_helper.h"
#include "csv_helper.h"
#include "dummy_creator.h"
#include "validator.h"

#include <iostream>       // std::cout

template <class T>
void validate( const T & o, const std::string & name )
{
    try
    {
        dtmf_tools_protocol::validator::validate( o );
        std::cout << name << " : valid" << std::endl;
    }
    catch( std::exception & e )
    {
        std::cout << name << " : invalid : " << e.what() << std::endl;
    }
}

// enums

void example_tone_e()
{
    auto obj = dtmf_tools_protocol::dummy::create__tone_e();

    std::cout << "tone_e : STR : " << dtmf_tools_protocol::str_helper::to_string( obj ) << std::endl;
}


// objects


// messages


int main( int argc, char ** argv )
{
    if( argc > 1 )
    {
        std::srand( std::stoi( std::string( argv[1] ) ) );
    }

    // enums

    example_tone_e();

    // objects


    // messages


    return 0;
}

