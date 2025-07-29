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

int main() {
    // Test cases
    char test1[] = "abcabcbb";
    char test2[] = "bbbbb";
    char test3[] = "pwwkew";
    char test4[] = "";
    
    printf("Test 1: \"%s\" -> Length: %d\n", test1, lengthOfLongestSubstring(test1));
    printf("Test 2: \"%s\" -> Length: %d\n", test2, lengthOfLongestSubstring(test2));
    printf("Test 3: \"%s\" -> Length: %d\n", test3, lengthOfLongestSubstring(test3));
    printf("Test 4: \"%s\" -> Length: %d\n", test4, lengthOfLongestSubstring(test4));
    
    return 0;
}

/*
 * Time Complexity: O(n) - where n is the length of the string
 * Space Complexity: O(min(m,n)) - where m is the size of the charset (256 for ASCII)
 * 
 * Algorithm: Sliding Window Technique
 * - Use two pointers (start and current position)
 * - Keep track of last index of each character
 * - When duplicate found, move start pointer to avoid repetition
 */