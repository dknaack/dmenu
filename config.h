/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Inconsolata:pixelsize=14",
	"JoyPixels:size=10",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                         fg         bg       */
	[SchemeNorm]          = { "#A0A8CD", "#11121D" },
	[SchemeSel]           = { "#FFFFFF", "#A485DD" },
	[SchemeSelHighlight]  = { "#00FF00", "#A485DD" },
	[SchemeNormHighlight] = { "#D7A65F", "#121217" },
	[SchemeOut]           = { "#A0A8CD", "#4573A6" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
