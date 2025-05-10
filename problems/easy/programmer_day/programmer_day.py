
def dayOfProgrammer(year):
    def dayOfProgrammer(year):
    if year == 1918:
        return "26.09.1918"
    elif (1700 <= year <= 1917) and year % 4 == 0:
        return f"12.09.{year}"
    elif (year >= 1919) and (year % 400 == 0 or (year % 4 == 0 and year % 100 != 0)):
        return f"12.09.{year}"
    else:
        return f"13.09.{year}"
    return "12.09." + str(year)
