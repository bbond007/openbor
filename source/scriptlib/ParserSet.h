/*
 * OpenBOR - http://www.LavaLit.com
 * -----------------------------------------------------------------------
 * Licensed under the BSD license, see LICENSE in OpenBOR root for details.
 *
 * Copyright (c) 2004 - 2011 OpenBOR Team
 */

#ifndef PARSERSET_H
#define PARSERSET_H

#include "Lexer.h"
#include "Productions.h"

typedef struct ParserSet {
	MY_TOKEN_TYPE *FirstSet[NUMPRODUCTIONS];
	MY_TOKEN_TYPE *FollowSet[NUMPRODUCTIONS];
} ParserSet;


void ParserSet_Buildup(ParserSet * pset);
void ParserSet_Clear(ParserSet * pset);
bool ParserSet_First(ParserSet * pset, PRODUCTION theProduction, MY_TOKEN_TYPE theToken);
bool ParserSet_Follow(ParserSet * pset, PRODUCTION theProduction, MY_TOKEN_TYPE theToken);
MY_TOKEN_TYPE LookupValue(char * theToken);
#endif
