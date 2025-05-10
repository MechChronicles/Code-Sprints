
def getPowerRange(n,a,b):
    import math


    # Find the smallest integer whose nth power is >= a
    lower = math.ceil(a ** (1/n))
    # Find the largest integer whose nth power is <= b
    upper = math.floor(b ** (1/n))
    # Count how many integers between lower and upper inclusive
    return max(0, upper - lower + 1)


    return 0
