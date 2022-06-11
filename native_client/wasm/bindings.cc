
#include <stdio.h>

#include <emscripten/bind.h>
#include "coqui-stt.h"

using namespace emscripten;

float lerp(float a, float b, float t) {
    return (1 - t) * a + t * b;
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("lerp", &lerp);
}

// TODO: STT_CreateStream

