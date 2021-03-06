/*
Copyright (c) 2019 Miguel Mendez

This software is provided 'as-is', without any express or implied warranty. In
no event will the authors be held liable for any damages arising from the use of
this software.

Permission is granted to anyone to use this software for any purpose, including
commercial applications, and to alter it and redistribute it freely, subject to
the following restrictions:

    1. The origin of this software must not be misrepresented; you must not
claim that you wrote the original software. If you use this software in a
product, an acknowledgment in the product documentation would be appreciated but
is not required.

    2. Altered source versions must be plainly marked as such, and must not be
misrepresented as being the original software.

    3. This notice may not be removed or altered from any source distribution.
*/

#ifndef DDPCM_LOWLEVEL_H
#define DDPCM_LOWLEVEL_H

#include "asmparm.h"

void initDDPCM_Decoder(__ASMPARM("a0", int16_t **qtablesLeft),
                       __ASMPARM("a1", int16_t **qtablesRight),
                       __ASMPARM("a2", uint8_t *scalesLeft),
                       __ASMPARM("a3", uint8_t *scalesRight),
                       __ASMPARM("a4", uint8_t *left),
                       __ASMPARM("a5", uint8_t *right),
                       __ASMPARM("d0", uint32_t numFrames),
                       __ASMPARM("d1", uint32_t framesPerQTable));

void *getDDPCMMixRoutine16(void);

void decodeFrame_asm(__ASMPARM("a0", uint8_t *src),
                     __ASMPARM("a6", int16_t *dst),
                     __ASMPARM("a5", int16_t *q_table),
                     __ASMPARM("d7", uint8_t scale));

#endif
