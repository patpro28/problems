Hai quả cầu đang chuyển động dần đều trong không gian. Tại thời điểm $t=0$, quả cầu một với bán kính $r_1$ có tâm tại vị trí $(x_1,y_1,z_1)$ và gia tốc $(a_{i_1},a_{j_1},a_{k_1})$, quả cầu hai bán kính $r_2$ có tâm tại vị trí $(x_2,y_2,z_2)$ và gia tốc $(a_{i_2},a_{j_2},a_{k_2})$. Biết thời điểm $t=0$ vận tốc của hai quả cầu đều bằng 0.

Hỏi khi hai quả cầu di chuyển thì chúng có thể tiếp xúc hay va chạm nhau hay không.

## Input

- Dòng đầu chứa một số nguyên $t$ là số bộ thử của bài toán.

- Các dòng tiếp theo chứa các bộ thử của bài toán, mỗi bộ thử có định dạng như sau:

    - Dòng đầu chứa 2 số nguyên $r_1,r_2 $.
    - 2 dòng tiếp theo, dòng đầu chứa 3 số nguyên $x_1,y_1,z_1$, dòng thứ 2 chứa 3 số nguyên $a_{i2},a_{j2},a_{k2}$.

## Output

- Gồm $t$ dòng, mỗi dòng in ra `YES` hoặc `NO` với mỗi bộ thử của bài toán.

## Constraints

- $1 \le t \le 10^4$
- $0 \le x_1,x_2,y_1,y_2,z_1,z_2 \le 100$.
- $1 \le r_1, r_2 \le 100$
- $0 \le a_{i_1},a_{i_2},a_{j_1},a_{j_2},a_{k_1},a_{k_2} \le 100$.


## Example
|Sample Input|Sample Output|
|-|-|
|2 <br> 1 2 <br> 0 0 0 <br> -1 0 0 <br> 4 0 0 <br> 1 0 0 <br> 1 2 <br> 0 0 0 <br> 100 0 0 <br> 4 0 0 <br> 0 0 0| NO <br> YES|

- Với bộ thử đầu, 2 quả cầu đi ngược hướng nhau nên chúng không bao giờ chạm nhau.
- Với bộ thử thứ 2, quả cầu thứ 2 đứng yên trong khi quả cầu 1 đi về phía nó nên chúng sẽ va chạm nhau.