// system includes
#include <map>
#include <typeindex>

// includes
#include "csv_helper.h"
#include "basic_parser/csv_helper.h"

namespace dtmf_tools
{

namespace csv_helper
{

using ::basic_parser::csv_helper::write;
using ::basic_parser::csv_helper::write_t;

// enums

std::ostream & write( std::ostream & os, const tone_e r )
{
    write( os, static_cast<unsigned>( r ) );

    return os;
}

// objects

// base messages

// messages

} // namespace csv_helper

} // namespace dtmf_tools

