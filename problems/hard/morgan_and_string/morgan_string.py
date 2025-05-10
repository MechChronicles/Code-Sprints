def morganAndString(a, b):
    i = j = 0
    result = []

    # Add a sentinel character to handle string comparison easily
    a += 'z'
    b += 'z'

    while i < len(a) - 1 or j < len(b) - 1:
        # Compare the remaining substrings
        if a[i:] < b[j:]:
            result.append(a[i])
            i += 1
        else:
            result.append(b[j])
            j += 1

    return ''.join(result)

    pass
