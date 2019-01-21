
unsigned int strLength(const char *str) {
    int len = 0;

    while(*str++ != '\0') {
        len++;
    }

    return len;
}

void reverse(char *str)
{
    char *start = str;
    char *end = str + strLength(str) - 1;

    while (end > start)
    {
        char t = *end;
        *end-- = *start;
        *start++ = t;
    }
}