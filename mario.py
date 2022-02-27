# TODO

from cs50 import get_int
# prompt user for height only accepting a range of from 1-8
while True:
    height = get_int('Height?: ')
    if height >= 1 and height <= 8:
        break

# print spaces and bricks
for i in range(height):
    print((height - i - 1) * " ", end="")
    print((i + 1) * "#")
# for i in range(1, height+1):
 #   if (n > 9):
   # print (' ' * (height + 1) + '#' * i)