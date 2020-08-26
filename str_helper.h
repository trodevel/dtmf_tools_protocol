#ifndef APG_DTMF_TOOLS__STR_HELPER_H
#define APG_DTMF_TOOLS__STR_HELPER_H

// system includes
#include <sstream>

// includes
#include "protocol.h"

namespace dtmf_tools
{

namespace str_helper
{

// enums
std::ostream & write( std::ostream & os, const tone_e r );

// objects

// base messages

// messages

template<class T>
std::string to_string( const T & l )
{
    std::ostringstream os;

    write( os, l );

    return os.str();
}

} // namespace str_helper

} // namespace dtmf_tools

#endif // APG_DTMF_TOOLS__STR_HELPER_H
