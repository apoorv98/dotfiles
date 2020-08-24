//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
	{" ",		"dwm_mpc",			1,			8},
	{" 🔺 ",	"dwm_upt",			60,			2},
	{" ",		"dwm_weather",			18000,			5},
	{" ",		"dwm_battery",			5,			3},
	{" 🔆 ",	"dwm_backlight",		2,			6},
	{" 💻 ",	"dwm_memory",			6,			1},
	{" 🔊 ",	"dwm_volume",			2,			10},
	{" ",		"dwm_internet",			5,			4},
	{" 🕑 ",	"dwm_clock",			60,			0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim = '|';
