<!-- https://www.spoj.com/problems/SOCIALNE/ -->

Thế Anh, một trong những sinh viên đại học HUST, đang phát triển một mạng xã hội cho trường. Tuy nhiên, anh ấy đang gặp một vấn đề về việc xác định các mối quan hệ bạn bè. Theo anh ấy, hai người có thể là bạn gián tiếp nếu họ không phải bạn bè trực tiếp nhưng có ít nhất một bạn chung. Ví dụ, nếu người $A$ chỉ là bạn của người $B$ và người $B$ là bạn của người $C$, thì người $A$ và người $C$ là bạn gián tiếp. 

Anh ấy đã thu thập được một bảng các mối quan hệ bạn bè giữa các sinh viên. Bảng này chứa $N$ dòng và $N$ cột, trong đó $N$ là số sinh viên. Dòng thứ $i$ và cột thứ $j$ của bảng chứa kí tự $Y$ nếu sinh viên $i$ và sinh viên $j$ là bạn của nhau, và chứa kí tự $N$ nếu không phải. Quy ước sinh viên thứ $i$ không là bạn của chính mình, nghĩa là dòng thứ $i$ cột thứ $i$ luôn chứa kí tự $N$.

Anh ấy muốn xác định người nào có nhiều bạn gián tiếp nhất trong trường theo chỉ tiêu của anh ấy. Bạn hãy giúp anh ấy nhé.

## Input

- Dòng đầu tiên chứa một số nguyên dương $T$ $(1 \leq T \leq 1000)$ là số lượng test.
- Mỗi test có định dạng như sau:
  - Gồm $N$ xâu độ dài $N$ chứa kí tự $Y$ hoặc $N$ mô tả bảng mối quan hệ bạn bè giữa các sinh viên. ($2 \leq N \leq 50$)

## Output

- Với mỗi test, in ra hai số nguyên $ID$ và $X$ trên một dòng, trong đó $ID$ là số thứ tự của sinh viên có nhiều bạn gián tiếp nhất (đánh số từ $1$ đến $N$), $X$ là số lượng bạn gián tiếp của sinh viên đó. Nếu có nhiều sinh viên thỏa mãn, in ra sinh viên có số thứ tự nhỏ nhất.

## Sample Input

    3
    NYN
    YNY
    NYN
    NYYY
    YNNY
    YNNN
    YYNN
    NNYNNNN
    NNYNNNN
    YYNYNNN
    NNYNYNN
    NNNYNYY
    NNNNYNN
    NNNNYNN

## Sample Output

    1 1
    3 2
    4 4