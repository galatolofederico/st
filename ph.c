int test_hook(char ch, void* p){
    static char* red = "\033[31m";
    static char* reset = "\033[0m";
    if (((PatternHook*)(p))->running == 0){
        twrite(red, strlen(red), 0);
        return 1;
    } else {
        if(ch == '\n'){
            twrite(reset, strlen(reset), 0);
            return 0;
        } else {
            return 1;
        }
    }
}

PatternHook phs[] = {
    {"<RED>", test_hook},
};
int phs_len = LEN(phs);