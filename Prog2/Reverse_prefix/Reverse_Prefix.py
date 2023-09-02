def reverse_segment(word, ch):
    if ch not in word:
        return word

    idx = word.index(ch)
    return word[:idx+1][::-1] + word[idx+1:]

# Test cases
word1 = "abcdefd"
ch1 = "d"
print(reverse_segment(word1, ch1))  # Output: "dcbaefd"

word2 = "xyxzxe"
ch2 = "z"
print(reverse_segment(word2, ch2))  # Output: "zxyxxe"

word3 = "abcd"
ch3 = "z"
print(reverse_segment(word3, ch3))  # Output: "abcd"
