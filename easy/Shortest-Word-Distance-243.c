int shortestDistance(char** words, int wordsSize, char* word1, char* word2) {
        int min_size = wordsSize+1;
        int i, prev_index;
        char *prev_word = NULL;
           
         //if (strcmp(word1, word2) == 0)
           //  return 0;
         for (i=0; i < wordsSize; ++i) {
             if (!strcmp(words[i], word1) || !strcmp(words[i], word2)) {
                 if ((prev_word != NULL) && strcmp(prev_word,words[i])) {
                     if (min_size > (i - prev_index)) {
                        min_size = i - prev_index;
                     }
                 }
                 prev_word = words[i];
                 prev_index = i;
             }
         }
         if (min_size == (wordsSize+1)) {
             return -1;
         }
         return min_size;
}
