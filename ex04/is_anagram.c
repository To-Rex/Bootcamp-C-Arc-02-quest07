#include <stdio.h> 
#include <string.h>
int is_anagram(char* param_1, char* param_2){
    int i,j;
    int len1 = strlen(param_1);
    int len2 = strlen(param_2);
    if(len1 != len2)
        return 0;
    int count[26] = {0};
    for(i = 0; i < len1; i++){
        count[param_1[i] - 'a']++;
    }
    for(j = 0; j < len2; j++){
        count[param_2[j] - 'a']--;
    }
    for(i = 0; i < 26; i++){
        if(count[i] != 0)
            return 0;
    }
    return 1;
}

//SUCCESS   