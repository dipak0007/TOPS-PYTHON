"""Write a Python program to generate and print a list of first and last 5 
   elements where the values are square of numbers between 1 and 30."""
def Values_sqr():
    l = list()
    for i in range(1, 31):
        l.append(i**2)
    print(l[:5])
    print(l[-5:])

Values_sqr()
