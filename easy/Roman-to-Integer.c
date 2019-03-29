int
helper (char c) {
     switch(c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
     }
     return 0;
}

int romanToInt(char* s) {
    bool flag = false;
    int i=0;
    int prev_index;
    int total = 0;
    if (strlen(s) == 0)
        return 0;
    if (strlen(s) == 1)
        return helper(s[0]);
        
    prev_index = 0;
    i = 1;
    while (s[i] != '\0') {
       if ((helper(s[i]) <= helper(s[prev_index]))) {
            total += helper(s[prev_index]);
            prev_index = i;
            ++i;
            continue;
       }
        total += helper(s[i]) - helper(s[prev_index]);
        prev_index = i+1;
        if (s[prev_index] == '\0')
            return total;
        i = i+2;
       }
       total +=helper(s[prev_index]);
       return total;
}


