
def angryProfessor(k, a):
    # Write your code here
    on_time_students = sum(1 for arrival in a if arrival <=0)
    if on_time_students < k:
        return "Yes"
    else: 
        return "No"
    return "YES"
    #Example where k=3
k = 3
a = [-1, 3, -9,3]
print(angryProfessor(k, arrival_time)) # the output will be "Yes" because bellow 0 are 2
