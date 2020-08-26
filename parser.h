#ifndef APG_DTMF_TOOLS__PARSER_H
#define APG_DTMF_TOOLS__PARSER_H

// includes
#include "generic_request/request.h"
#include "enums.h"
#include "protocol.h"

namespace dtmf_tools
{

namespace parser
{

// enums

void get_value_or_throw( tone_e * res, const std::string & key, const generic_request::Request & r );

// objects


// base messages


// messages


// to_... functions


} // namespace parser

} // namespace dtmf_tools

#endif // APG_DTMF_TOOLS__PARSER_H
