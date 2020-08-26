#ifndef APG_DTMF_TOOLS__REQUEST_TYPE_PARSER_H
#define APG_DTMF_TOOLS__REQUEST_TYPE_PARSER_H

// includes
#include "enums.h"

namespace dtmf_tools
{

class RequestTypeParser
{
public:
    static request_type_e   to_request_type( const std::string & s );
};
} // namespace dtmf_tools

#endif // APG_DTMF_TOOLS__REQUEST_TYPE_PARSER_H
