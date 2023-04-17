<<<<<<< HEAD
<!-- https://oj.vnoi.info/problem/c11seq2 -->

Cho một dãy số nguyên $A$ gồm $N$ phần tử phân biệt. Từ dãy $A$ chọn ra $K$ phần tử và giữ nguyên thứ tự như trong $A$ tạo thành một dãy con. Sắp xếp tất cả các dãy con $K$ phần tử theo thứ tự từ điển. Yêu cầu:

1. Tìm dãy con độ dài $K$ có thứ tự từ điển thứ $M$.
2. Cho một dãy con $K$ phần tử. Cho biết thứ tự từ điển của dãy con đó.

## Input

- Dòng đầu chứa 2 số nguyên dương $N, K$.
- Dòng hai chứa $N$ số nguyên $A_i$.
- Dòng ba chứa một số nguyên dương $M$.
- Dòng bốn chứa $K$ số nguyên $B_i$.

## Output

- Dòng 1 in ra dãy con độ dài $K$ có thứ tự từ điển thứ $M$.
- Dòng 2 in ra một số là thứ tự từ điển của dãy con $B$.

## Constraints

- $1\le K\le N\le 60$.
- $|A_i|\le 10^6$.
- $1\le M\le 2^{63}$.

## Example 

| Input                              | Output       |
| ---------------------------------- | ------------ |
| 6 4<br>7 9 5 3 2 4<br>8<br>7 9 3 4 | 7 9 3 4<br>8 |

```pas
{$MODE OBJFPC}
{$INLINE ON}
Const
          Fi = 'C11SEQ2.INP';
          Fo = 'C11SEQ2.OUT';
          Maxn = 60;
Type
          Mang = Array[1..Maxn] of LongInt;
Var
          c: Array[0..Maxn, 0..Maxn] of Qword;
          res, x, a, p: Mang;
          n, k: LongInt;
          m: Qword;
Procedure Openf;
Begin
          Assign(Input, Fi); Reset(Input);
          Assign(Output, Fo); Rewrite(Output);
End;
Procedure Closef;
Begin
          Close(Input);
          Close(Output);
End;
Procedure Init;
Var
          i, j: LongInt;
Begin
          c[0, 0]:=1;
          c[0, 1]:=1;
          c[1, 1]:=1;
          For i:=2 to Maxn do
             Begin
                c[0, i]:=1;
                For j:=1 to i do c[j, i]:=c[j, i-1]+c[j-1, i-1];
             End;
End;
Procedure Enter;
Var
          i: LongInt;
Begin
          Readln(n, k);
          For i:=1 to n do
             Begin
                Read(a[i]);
                p[i]:=i;
             End;
          Readln(m);
          For i:=1 to k do Read(x[i]);
End;
Procedure Swap(i, j: LongInt);
Var
          tmp: LongInt;
Begin
          tmp:=a[i]; a[i]:=a[j]; a[j]:=tmp;
          tmp:=p[i]; p[i]:=p[j]; p[j]:=tmp;
End;
Procedure Sort;
Var
          i, j: LongInt;
Begin
          For i:=1 to n-1 do
             For j:=i+1 to n do
                If a[i] > a[j] then Swap(i, j);
End;
Procedure Process(m: Qword);
Var
          i, vt, j: LongInt;
Begin
          vt:=0; m:=m-1;
          For i:=1 to k do
             Begin
                For j:=1 to n do
                   If p[j] > vt then
                      If m >= c[k-i, n-p[j]] then m:=m-c[k-i, n-p[j]] else Break;
                While p[j] < vt do Inc(j);
                vt:=p[j];
                res[i]:=a[j];
             End;
          For i:=1 to k do Write(res[i], #32);
          Writeln;
End;
Procedure Process(x: Mang);
Var
          i, vt, j: LongInt;
          res: Qword;
Begin
          vt:=0; res:=1;
          For i:=1 to k do
             Begin
                For j:=1 to n do
                   If x[i] = a[j] then
                      Begin
                         vt:=p[j];
                         Break;
                      End
                   Else
                   If (p[j] > vt) and (p[j]+k-i <= n) then res:=res+c[k-i, n-p[j]];
             End;
          Writeln(res);
End;
BEGIN
          Try
             //Openf;
             Enter;
             Init;
             Sort;
             Process(m);
             Process(x);
          Finally
             Closef;
          End;
END.

```
=======
Chỉnh hợp là một khái niệm trong toán học, đại diện cho số cách chọn **một tập hợp** các phần tử **không lặp lại** và **không theo thứ tự** từ một tập hợp lớn hơn. Trong chỉnh hợp, thứ tự các phần tử được xem là quan trọng, nghĩa là các tập hợp có cùng các phần tử nhưng được sắp xếp khác nhau sẽ được tính là hai chỉnh hợp khác nhau.

Ví dụ, nếu chọn 3 quả bóng từ 5 quả bóng có các màu khác nhau, ta có thể tính được số chỉnh hợp của nó như sau: với lần chọn đầu tiên, có 5 lựa chọn, với lần chọn thứ hai chỉ còn 4 lựa chọn (do bóng đó đã được lấy đi), và với lần chọn cuối cùng còn 3 lựa chọn. Vậy số chỉnh hợp của 3 quả bóng từ 5 quả bóng là $5\times4\times3=60$.

Để tính số chỉnh hợp, ta có thể sử dụng công thức sau:

$$A(n,k)=A_n^k=n(n−1)(n−2)\cdots(n−k+1)=\frac{n!}{(n-k)!}$$

Trong đó $A(n,k)$ là số chỉnh hợp của $k$ phần tử từ $n$ phần tử, $A_n^k$ là ký hiệu khác của $A(n,k)$, và $n!$ là tích của các số tự nhiên từ 1 đến $n$.

Cho một tập hợp $A$ gồm $N$ phần tử phân biệt. Chúng ta sắp xếp các chỉnh hợp không lặp chập $k$ của $A$ theo thứ tự từ điển, và đánh số hiệu cho chúng theo thứ tự tăng dần từ 1. Chúng ta sẽ có $A_n^k$ chỉnh hợp không lặp chập $k$ của $A$. Yêu cầu:

1. Cho một số nguyên dương $P$. Tìm chỉnh hợp không lặp chập $k$ của $A$ có số hiệu $P$.
2. Cho một chỉnh hợp không lặp chập $k$ của $A$. Tìm số hiệu của chỉnh hợp đó.

## Input

- Dòng đầu tiên chứa hai số nguyên $N$ và $k$.
- Dòng 2 chứa $N$ số nguyên $a_1, a_2, \dots, a_N$.
- Dòng 3 chứa một số nguyên dương $P$.
- Dòng 4 chứa $k$ số nguyên $b_1, b_2, \dots, b_k$.

## Output

- Dòng 1 chứa $k$ số nguyên $c_1, c_2, \dots, c_k$ là chỉnh hợp không lặp chập $k$ của $A$ có số hiệu $P$.
- Dòng 2 chứa một số nguyên dương $Q$ là số hiệu của chỉnh hợp $b_1, b_2, \dots, b_k$.

## Constraints

- $1 \le k \le N \le 10^3$
- $1 \le a_i,b_i \le 10^9$
- $1 \le P \le A_n^k$
- $a_i$ là các số nguyên dương khác nhau.

## Example

| Input                           | Output       |
| ------------------------------- | ------------ |
| 5 3<br>10 2 4 6 8<br>5<br>6 4 2 | 2 6 8 <br>28 |
>>>>>>> 008c52899c7fc473df083babc87bae4b943a070b
