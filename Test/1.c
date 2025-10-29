// In the name of Allah, the Most Gracious, the Most Merciful
// String Operations
#include <stdio.h>
#include <string.h>

char str[100], str1[100], str2[100], out[200];
int idx, len, pos;

int length(char s[]) {
    int count = 0;
    while (s[count] != '\0')
        count++;
    return count;
}

void sub_string(char str[100]) {
    int j = 0;
    for (int i = idx; i < idx + len && str[i] != '\0'; i++) {
        out[j] = str[i];
        j++;
    }
    out[j] = '\0';  
}

int index_of(char str[100], char pattern[100]) {
    int str_len = length(str);
    int pat_len = length(pattern);
    
    for (int i = 0; i <= str_len - pat_len; i++) {
        int j;
        for (j = 0; j < pat_len; j++) {
            if (str[i + j] != pattern[j])
                break;
        }
        if (j == pat_len) { 
            return i;
        }
    }
    return -1;
}

void con_cat(char str1[100], char str2[100]) {
    int i;
    for (i = 0; i < length(str1); i++)
        out[i] = str1[i];

    for (int j = 0; j < length(str2); j++)
        out[i + j] = str2[j];
    
    out[i + length(str2)] = '\0';
}

int main() {
    printf("Enter string: ");
    scanf("%s", str);  
    
    printf("Enter starting index and length: ");
    scanf("%d %d", &idx, &len);

    sub_string(str);
    printf("Substring: %s\n", out);

    char text[100];
    printf("Enter pattern to search: ");
    scanf("%s", text);
    
    pos = index_of(str, text);
    if (pos != -1)
        printf("Pattern found at index: %d\n", pos);
    else
        printf("Pattern not found\n");

    printf("Enter two strings: ");
    scanf("%s %s", str1, str2);

    con_cat(str1, str2);
    printf("Concatenated string: %s\n", out);

    return 0;
}