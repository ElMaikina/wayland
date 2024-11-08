//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	// memory usage
//	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"Mem: ", "free -h | awk '/^Mem/ { print $3 }'",			30,		0},
	// get battery levels
	//{"Battery: ", "acpi | tail -1",								10,		0},
	// volume levels
	{"Audio:", "amixer -M sget Master | tail -1",				30,		0},
	// date and time
	{"Time: ", "date '+%b %d (%a) %I:%M%p'",					5,		0},
	
	/* Updates whenever "pkill -SIGRTMIN+10 someblocks" is ran */
	/* {"", "date '+%b %d (%a) %I:%M%p'",					0,		10}, */
};



//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
