Cho $N$ con slime xếp trên một hàng, slime thứ $i$ có kích thước $a_i$.

Taro cố gắng gộp tất cả slime thành một slime lớn hơn. Anh ấy được quyền thực hiện thao tác sau cho đến khi chỉ còn lại một slime:

- Chọn 2 slime kề nhau và gộp chúng thành một slime mới. Slime mới sẽ có kích thước là $x+y$ với $x$ và $y$ là kích thước của 2 slime cũ. Chi phí cho thao tác này là $x+y$. Vị trí tương đối của các slime sẽ không thay đổi khi thực hiện thao tác này.

Tìm chi phí nhỏ nhất để gộp tất cả slime thành một.

## Input

- Dòng đầu chứa số nguyên $N$.
- Dòng thứ hai chứa $N$ số nguyên $a_1, a_2, \dots, a_N$.

## Output

- Một số nguyên duy nhất là chi phí nhỏ nhất để gộp tất cả slime thành một.

## Constraints

- $2 \le N \le 400$.
- $1 \le a_i \le 10^9$.

## Example

| Input               | Output |
| ------------------- | ------ |
| 4<br>10 20 30 40    | 190    |
| 5<br>10 10 10 10 10 | 120    |
| 6<br>7 6 8 6 1 1    | 68     |

## Explanation

Các bước của ví dụ 3:

- $(7,6,8,6,1,1)\to(7,6,8,6,2)$, chi phí $1+1=2$.
- $(7,6,8,6,2)\to(7,6,8,8)$, chi phí $6+2=8$.
- $(7,6,8,8)\to(13,8,8)$, chi phí $7+6=13$.
- $(13,8,8)\to(13,16)$, chi phí $8+8=16$.
- $(13,16)\to(29)$, chi phí $13+16=29$.

Tổng chi phí là $2+8+13+16+29=68$.