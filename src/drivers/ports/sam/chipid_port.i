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

#include "simba.h"

int chipid_port_read(struct chipid_t *id_p)
{
    uint32_t cidr;
    
    cidr = SAM_CHIPID->CIDR;
        
    id_p->version = CHIPID_CIDR_VERSION_GET(cidr);
    id_p->embedded_processor = CHIPID_CIDR_EPROC_GET(cidr);
    id_p->non_volatile_program_memory_size[0] = CHIPID_CIDR_NVPSIZ_GET(cidr);
    id_p->non_volatile_program_memory_size[1] = CHIPID_CIDR_NVPSIZ2_GET(cidr);
    id_p->internal_sram_size = CHIPID_CIDR_SRAMSIZ_GET(cidr);
    id_p->architecture = CHIPID_CIDR_ARCH_GET(cidr);
    id_p->non_volatile_program_memory_type = CHIPID_CIDR_NVPTYP_GET(cidr);

    return (0);
}
