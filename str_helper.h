/*

String Helper. Provides to_string() function.

Copyright (C) 2014 Sergey Kolevatov

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

*/

// $Revision: 13520 $ $Date:: 2020-08-19 #$ $Author: serge $

#ifndef DTMF_TOOLS_PROTOCOL__STR_HELPER_H
#define DTMF_TOOLS_PROTOCOL__STR_HELPER_H

#include <string>

// system includes
#include <sstream>

#include "protocol.h"          // tone_e

namespace dtmf_tools
{

namespace str_helper
{

// enums
std::ostream & write( std::ostream & os, const tone_e r );

template<class T>
std::string to_string( const T & l )
{
    std::ostringstream os;

    write( os, l );

    return os.str();
}

} // namespace str_helper

} // namespace dtmf_tools

#endif // DTMF_TOOLS_PROTOCOL__STR_HELPER_H
