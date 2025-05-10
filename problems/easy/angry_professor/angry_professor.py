def angryProfessor(k, a):
    # Count the number of students who arrived on time or early
    on_time_students = sum(1 for arrival in a if arrival <= 0)

    # If the number of on-time students is less than the threshold, cancel class
    if on_time_students < k:
        return "YES"  # Class is cancelled
    else:
        return "NO"   # Class is not cancelled
