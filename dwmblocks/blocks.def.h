//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:",	 "sb-disk",		1800,			19},
	{"Mem:",	 "sb-memory",		10,			20},
	{"Mem:",	 "sb-loadavg",		5,			21},
	{"Mem:",	 "sb-date",		1,			22},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
