//getting max string length without duplications leet code problem 3 medium
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int lastIndex[256];  // To store last index of every character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLength = 0;
    int start = 0;  // Start of current window

    for (int i = 0; s[i] != '\0'; i++) {
        // If character has occurred before and is inside current window
        if (lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }

        lastIndex[(unsigned char)s[i]] = i;
        int windowLength = i - start + 1;
        if (windowLength > maxLength)
            maxLength = windowLength;
    }

    return maxLength;
}