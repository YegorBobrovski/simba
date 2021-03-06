/**
 * @section License
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2014-2017, Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * This file is part of the Simba project.
 */

#include "types_port.h"
#include <util/delay_basic.h>

#define I_CPU (F_CPU / 1000000L)

static void time_port_busy_wait_us(int microseconds)
{
    _delay_loop_2(microseconds * (I_CPU / 4));
}

static int time_port_micros(void)
{
    return ((CPU_CYCLES_PER_TIMER_TICK * TCNT1) / I_CPU);
}

static int time_port_micros_maximum(void)
{
    return (CPU_CYCLES_PER_SYS_TICK / I_CPU);
}

static int time_port_micros_resolution(void)
{
    return (DIV_CEIL(CPU_CYCLES_PER_TIMER_TICK, I_CPU));
}
