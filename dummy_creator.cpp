// includes
#include "dummy_creator.h"
#include "basic_parser/dummy_creator.h"
#include "object_initializer.h"

namespace dtmf_tools_protocol
{

namespace dummy
{

// enums

tone_e create__tone_e()
{
    static const unsigned SIZE = 16;

    static const tone_e values[SIZE] = { tone_e::TONE_0, tone_e::TONE_1, tone_e::TONE_2, tone_e::TONE_3, tone_e::TONE_4, tone_e::TONE_5, tone_e::TONE_6, tone_e::TONE_7, tone_e::TONE_8, tone_e::TONE_9, tone_e::TONE_A, tone_e::TONE_B, tone_e::TONE_C, tone_e::TONE_D, tone_e::TONE_STAR, tone_e::TONE_HASH,  };

    auto res = values[ ::basic_parser::dummy::create__uint32() % SIZE ];

    return res;
}

// objects

// messages

} // namespace dummy

} // namespace dtmf_tools_protocol

