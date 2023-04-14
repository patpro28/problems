from math import log

sum = 0

for i in range(1, 2001):
    sum += log(i, 10)
# for i in range(1, 1001):
#     sum -= log(i, 10) * 2

# sum -= log(1001, 10)

print(int(sum))