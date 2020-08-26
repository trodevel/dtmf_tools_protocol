// includes
#include "validator.h"
#include "basic_parser/validator.h"

namespace dtmf_tools
{

namespace validator
{

using ::basic_parser::validator::validate;
using ::basic_parser::validator::validate_t;

// enums

bool validate( const std::string & prefix, const tone_e r )
{
    validate( prefix, static_cast<unsigned>( r ), true, true, static_cast<unsigned>( tone_e::TONE_0 ), true, true, static_cast<unsigned>( tone_e::TONE_HASH ) );

    return true;
}

// objects

// base messages

// messages

} // namespace validator

} // namespace dtmf_tools

