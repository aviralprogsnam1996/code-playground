step = int(input("Enter the number of which you want multiple: "))
beg = int(input("Enter the starting number: "))
end = int(input("Enter the ending number: "))

for i in range (beg, end):
    # print(i)
    if (i%step==0):
        print(i)