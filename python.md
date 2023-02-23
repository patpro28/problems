# Python 3 Cheatsheet

## Kiểu dữ liệu cơ bản

### String

```py
s = 'Hello World!'
p = "Hello World!"
x = str("Hello World!")
```

### Numeric

```py
a = 5       # int
b = 5.2     # float
c = int(5)
d = float(5) # 5.0
```

### Sequence

* List

```py
mylist = []
mylist.append(1)
mylist.append(2)
for item in mylist:
  print(item) # prints out 1,2
```

* Tuple

```py
my_tuple = (1, 2, 3)
my_tuple = tuple((1, 2, 3))
```

### Mapping

```py
empty_dict = {}
a = {
  "one": 1,
  "two": 2,
  "three": 3
}
print(a['one'])   # Output: 1
print(a.keys())   # dict_keys(['one', 'two', 'three'])
print(a.values()) # dict_values([1, 2, 3])

a.update({"four": 4})
print(a['four'])  # Output: 4
```

### Set

```py
set1 = {'a', 'b', "c"}
set2 = set(("a", "b", "c"))
```

### Boolean

```py
my_bool = True 
my_bool = False

bool(0)     # => False
bool(1)     # => True
```

## Các phép toán số học

```py
result = 10 + 30 # => 40
result = 40 - 10 # => 30
result = 50 * 5  # => 250
result = 16 / 4  # => 4.0 (Float Division)
result = 16 // 4 # => 4 (Integer Division)
result = 25 % 2  # => 1 (Module)
result = 5 ** 3  # => 125 (Power)
```

```py
cnt = 0
cnt += 10        # => 10
cnt -= 5         # => 5

s = "Hello "
s += "World!"    # => "Hello World!"
```

## Câu lệnh vào ra

### Input

* Nhập 1 số trên một dòng

```py
n = int(input())
```

* Nhập 1 xâu kí tự trên một dòng

```py
s = input()
```

* Nhập nhiều số trên một dòng cách nhau bởi dấu cách

```py
a, b = map(int, input().split())
a, b, c = map(int, input().split())
```

* Nhập một mảng các số

```py
a = list(map(int, input().split()))
```

### Output

* In ra trên một dòng

```py
print("Hello World") # Hello World

s = "Hello World"
print(s) # Hello World

x = 5
y = 10
print(x, y) # 5 10

print() # Xuống dòng
```

* In ra không xuống dòng

```py
print("Hello World", end=' ')
```

* In ra một list

```py
a = [1, 2, 3]
print(a)  # [1, 2, 3]
print(*a) # 1 2 3
```

## Câu lệnh điều kiện

```py
num = 200
if num > 0:
    print("num is greater than 0")
else:
    print("num is not greater than 0")
```

```py
num = 5
if num > 10:
    print("num is totally bigger than 10.")
elif num < 10:
    print("num is smaller than 10.")
else:
    print("num is indeed 10.")
```

Trên một dòng

```py
a = 330
b = 200
r = "a" if a > b else "b"
print(r) # Output: a
```

## Vòng lặp

### For loop

```py
primes = [2, 3, 5, 7]
for prime in primes:
  print(prime)
```

```py
x = 0
for index in range(10):
  x = index * 10
  if index == 5:
    break
  print(x, end=' ')

# Output: 0 10 20 30 40
```

```py
for index in range(3, 8):
  x = index * 10
  if index == 5:
    continue
  print(x, end=' ')

# Output: 30 40 60 70
```

```py
for i in range(4):
  print(i) # Prints: 0 1 2 3

for i in range(4, 8):
  print(i) # Prints: 4 5 6 7

for i in range(4, 10, 2):
  print(i) # Prints: 4 6 8
```

### While loop

```py
x = 0
while x < 4:
  print(x)
  x += 1  # Shorthand for x = x + 1
```
