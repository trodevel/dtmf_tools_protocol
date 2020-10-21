#ifndef APG_DTMF_TOOLS_PROTOCOL__REQUEST_TYPE_PARSER_H
#define APG_DTMF_TOOLS_PROTOCOL__REQUEST_TYPE_PARSER_H

// includes
#include "enums.h"

namespace dtmf_tools_protocol
{

class RequestTypeParser
{
public:
    static request_type_e   to_request_type( const std::string & s );
};
} // namespace dtmf_tools_protocol

#endif // APG_DTMF_TOOLS_PROTOCOL__REQUEST_TYPE_PARSER_H
