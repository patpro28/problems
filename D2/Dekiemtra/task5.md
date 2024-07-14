# Bài 6: Sắp xếp lá bài

Chúng ta có $N$ lá bài đánh số từ $1,2,\ldots,N$. Lá bài thứ $i$ được viết một số $A_i$ bằng mực đỏ lên một mặt và một số $B_i$ bằng mực xanh lên mặt còn lại. Lúc đầu, tất cả các lá bài được xếp từ trái qua phải theo thứ tự $1$ đến $N$, với mặt mực đỏ là mặt ngửa.

Cần xác định xem chúng ta có thể tạo thành một dãy không giảm của các số trên mặt ngửa từ trái qua phải (tức là với mỗi lá bài thứ $i\ (1\le i<N)$ tính từ bên trái thì số ghi trên mặt ngửa của lá bải $i$ phải không lớn hơn số trên mặt ngửa của lá bài thứ $i+1$ tính từ bên trái) bằng cách lặp lại sử dụng thao tác dưới đây. Nếu câu trả lời là có thì tìm số bước nhỏ nhất để đạt được điều đó.

- Chọn một số nguyên $i\ (1\le i<N)$, hoán đổi vị trí lá bài thứ $i$ và $i+1$, sau đó lật lại 2 lá bài đấy.

## Input
- Dòng đấu chứa một số nguyên dương $N$ $(1\le N\le 18)$.
- Dòng 2 chứa $N$ số nguyên $A_i$ $(1\le A_i\le 50)$.
- Dòng 3 chứa $N$ số nguyên $B_i$ $(1\le B_i\le 50)$.

## Output
- Nếu không có cách thì in ra $-1$, ngược lại in ra số bước nhỏ nhất.

| Input                               | Output |
| ----------------------------------- | ------ |
| 3<br>3 4 3<br>3 2 3                 | 1      |
| 2<br>2 1<br>1 2                     | -1     |
| 5<br>4 46 6 38 43<br>33 15 18 27 37 | 3      |