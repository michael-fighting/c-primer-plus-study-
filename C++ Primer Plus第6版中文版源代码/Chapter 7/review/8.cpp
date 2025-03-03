int replace(char * str, char c1, char c2){
    int res = 0;
    while(*str){
        if (*str == c1){
            *str = c2;
            res++;
        }
        str++;
    }
    return res;
    
}