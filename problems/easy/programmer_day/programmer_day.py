def dayOfProgrammer(year):
    if year == 1918:
        # Transition year from Julian to Gregorian
        return "26.09.1918"
    elif (1700 <= year <= 1917) and year % 4 == 0:
        # Julian leap year
        return f"12.09.{year}"
    elif (year >= 1919) and (year % 400 == 0 or (year % 4 == 0 and year % 100 != 0)):
        # Gregorian leap year
        return f"12.09.{year}"
    else:
        # All non-leap years
        return f"13.09.{year}"

