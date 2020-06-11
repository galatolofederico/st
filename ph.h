typedef struct {
	const char* pattern;
	int (*hook)(char, void*);
	int match;
    int running;
    void *buff;
} PatternHook;

extern PatternHook phs[];
extern int phs_len;