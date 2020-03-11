char firstNotRepeatingCharacter(char* str) {
    
    #define NUM_OF_LETTERS 26
    char count[NUM_OF_LETTERS] = {0};
    int strLen = strlen(str);
    for(int i = 0; i < strLen; ++i) 
    {
        int index = str[i] - 'a';
        ++count[index];
    }

    for(int i = 0; i < strLen; ++i)
    {
        int index = str[i] - 'a';
        if(count[index] == 1) 
            return str[i];
    }
    
    /*
    for(int i = 0; i < 25; ++i)
    {
        if(count[i] == 1)
        {
            return
