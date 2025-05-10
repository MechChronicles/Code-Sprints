def passwordLeaked(s,p):
   from collections import Counter

def find_anagrams(s, p):
    result = []
    len_p = len(p)
    len_s = len(s)

    if len_p > len_s:
        return result

    p_counter = Counter(p)
    window_counter = Counter(s[:len_p])

    if window_counter == p_counter:
        result.append(0)

    for i in range(len_p, len_s):
        # Add the new character to the window
        window_counter[s[i]] += 1
        # Remove the character left behind
        window_counter[s[i - len_p]] -= 1

        # Remove zero-count keys to keep dicts comparable
        if window_counter[s[i - len_p]] == 0:
            del window_counter[s[i - len_p]]

        if window_counter == p_counter:
            result.append(i - len_p + 1)

    return result

    return []
