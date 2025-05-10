def dayOfProgrammer(year):
    if year == 1918:
        # Special case: Transition from Julian to Gregorian
        return "26.09.1918"
    elif (year < 1918 and year % 4 == 0) or \
         (year > 1918 and (year % 400 == 0 or (year % 4 == 0 and year % 100 != 0))):
        # Leap year (Julian or Gregorian)
        return f"12.09.{year}"
    else:
        # Non-leap year
        return f"13.09.{year}"
