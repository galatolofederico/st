typedef struct {
	const char* pattern;
	void (*hook)(void);
	int match;
} PatternHook;

extern PatternHook phs[];