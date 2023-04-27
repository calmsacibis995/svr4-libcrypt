/*
 * Copyright (c) 1990 UNIX System Laboratories, Inc.
 * Copyright (c) 1988 AT&T
 * All rights reserved.
 */

#ifdef __STDC__
	#pragma weak setkey = _setkey
	#pragma weak encrypt = _encrypt
	#pragma weak crypt = _crypt
#endif

#include "synonyms.h"

void
setkey(const char *key)
{
	extern void	des_setkey();
	des_setkey(key);
}

void
encrypt(char *block, int edflag)
{
	extern void	des_encrypt();
	des_encrypt(block, edflag);
}

char *
crypt(const char *pw, const char *salt)
{
	extern char	*des_crypt();
	
	return(des_crypt(pw, salt));
}
