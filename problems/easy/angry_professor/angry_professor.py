
def angryProfessor(k, a):
    on_time_students= sum(1 for arrival in a if k <=0)
    if on_time_students < k:
        return "Yes"
    else:
        return "No"



