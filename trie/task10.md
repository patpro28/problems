# SEED

Một SEED là một xâu chỉ gồm 2 loại kí tự `1` hoặc `*` thoả mãn điều kiện bắt đầu và kết thúc của SEED là `1`. Một SEED $s$ được gọi là ``hit`` được xâu nhị phân $x$ độ dài $N$ nếu tồn tại một vị trí $i$ trên xâu $x$ thoả mãn: Nếu kí tự thứ $k$ trên xâu $s$ là $1$ thì kí tự thứ $i+k-1$ của $x$ cũng bằng $1$.

Ví dụ: `1*1` có thể `hit` được các xâu `0`**`101`**`100`, **`111`**`0000`, **`101`**`0`**`111`** nhưng không `hit` được xâu `0100010`.

Cho $N$ và $s$, đếm xem có bao nhiêu xâu nhị phân độ dài $N$ mà $s$ `hit` được.

## Input

- Dòng một chứa một số nguyên $N$.
- Dòng 2 chứa một xâu $s$ chỉ gồm 2 loại kí tự `1` và `*`.

## Output

- Gồm một dòng in ra số lượng xâu nhị phân mà $s$ có thể `hit` được.

## Constraints

- $1\le N\le 50$
- $1\le |S|\le 30$
- Số kí tự `*` không vượt quá 15.

## Example

|Input|Output|
|-|-|
|10<br>1|1023|
|3<br>1*1|2|
