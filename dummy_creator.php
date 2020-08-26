<?php

namespace dtmf_tools;


// includes
require_once __DIR__.'/../basic_parser/dummy_creator.php';
require_once 'object_initializer.php';

// enums

function create_dummy__tone_e()
{
    $SIZE = 16;

    $values = array( tone_e__TONE_0, tone_e__TONE_1, tone_e__TONE_2, tone_e__TONE_3, tone_e__TONE_4, tone_e__TONE_5, tone_e__TONE_6, tone_e__TONE_7, tone_e__TONE_8, tone_e__TONE_9, tone_e__TONE_A, tone_e__TONE_B, tone_e__TONE_C, tone_e__TONE_D, tone_e__TONE_STAR, tone_e__TONE_HASH,  );

    $res = $values[ \basic_parser\create_dummy__int32() % $SIZE ];

    return $res;
}

// objects

// messages

# namespace_end dtmf_tools


?>
