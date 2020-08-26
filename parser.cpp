// system includes
#include <map>
#include <memory>

// includes
#include "parser.h"
#include "basic_parser/parser.h"
#include "basic_parser/malformed_request.h"
#include "validator.h"
#include "request_type_parser.h"

namespace dtmf_tools
{

namespace parser
{

using ::basic_parser::parser::get_value_or_throw;
using ::basic_parser::parser::get_value_or_throw_t;

// enums

void get_value_or_throw( tone_e * res, const std::string & key, const generic_request::Request & r )
{
    uint32_t res_i;

    get_value_or_throw( & res_i, key, r );

    * res = static_cast<tone_e>( res_i );
}

// objects

// base messages

// messages

// to object

// to forward message

} // namespace parser

} // namespace dtmf_tools

