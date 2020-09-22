/*
 * OpenBOR - http://www.chronocrash.com
 * -----------------------------------------------------------------------
 * All rights reserved, see LICENSE in OpenBOR root for details.
 *
 * Copyright (c) 2004 - 2014 OpenBOR Team
 */

#ifndef RAND32_H
#define RAND32_H

// *** INCLUDES ***
#include <limits.h>   // for CHAR_BIT

extern unsigned long seed;

unsigned int rand32(void);

void srand32(int n);

#endif




