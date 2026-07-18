/*
 *	ucvim
 *	Default configuration for ucvim
 */

#ifndef __UCVIM_CONF_H_INC__
#define __UCVIM_CONF_H_INC__

typedef unsigned char uint8_t;

#define ENTRY(name) { #name, &(C.name) }

struct Ucvim_Conf {
	int tabsize;
	int outputBufferSize;
	int historySize;
	int highlightTrailingSpace;
	int highlightKeywordColor;
	int autoIndent;
	int positionStackSize;
} C = {
	8,		/* tabsize */
	64 * 1024,	/* outputBufferSize */
	64,		/* historySize */
	1,		/* highlightTrailingSpace */
	2,		/* highlightKeywordColor */
	1,		/* autoIndent */
	16,		/* positionStackSize */
};

/*
 *	DO NOT MODIFY
 */
typedef struct {
	const char *name;
	int *value;
} Ucvim_Conf_Entry;
Ucvim_Conf_Entry gConfList[] = {
	ENTRY(tabsize),
	ENTRY(highlightTrailingSpace),
	ENTRY(highlightKeywordColor),
	ENTRY(autoIndent),
};

#undef ENTRY

#endif	/* __UCVIM_CONF_H_INC__ */
