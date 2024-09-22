Lưu ý rằng một ma trận thu được bằng cách dịch chuyển vòng tuần hoàn của các hàng và cột được xác định duy nhất bằng cách chọn ô sẽ được dịch chuyển đến góc trên bên trái.

Để đơn giản hóa giải pháp, chúng ta sẽ tạo một ma trận $2n \times 2m$ ($a_{i,j}$) bằng cách lấy bốn bản sao của ma trận, và thay thế các ký tự `*` và `.` bằng 0 và 1. Chúng ta cần xác định ma trận con $n \times m$ nhỏ nhất theo thứ tự từ điển của ma trận đó.

Chúng ta có thể sử dụng hàm băm hai chiều để so sánh các ma trận con: chúng ta lấy hàm băm của phần tử $a_{i,j}$ là $a_{i,j}. p^i. q^j$, trong đó $p$ và $q$ là các số nguyên tố khác nhau, ví dụ như 2 và 3. Hàm băm của một ma trận con nào đó bằng tổng các hàm băm của các phần tử của nó. Nếu chúng ta tính trước các tổng tiền tố hai chiều của các hàm băm, chúng ta có thể nhanh chóng có được giá trị đó cho bất kỳ ma trận con nào. Tất nhiên, vì các số có thể rất lớn, chúng ta tính các hàm băm theo modulo một số nguyên tố lớn, ví dụ như $10^9 + 7$.

Hai ma trận con có thể được so sánh theo thứ tự từ điển bằng cách sử dụng tìm kiếm nhị phân để tìm phần tử đầu tiên mà chúng khác nhau, sau đó so sánh phần tử đó. Nếu chúng ta tìm kiếm hàng trước, và sau đó là cột, của phần tử đó, chúng ta chỉ cần biết cách xác định xem hai ma trận con có bằng nhau hay không. Để làm điều đó, chúng ta sử dụng hàm băm đã tính. Trước khi kiểm tra xem các hàm băm có bằng nhau không, chúng ta cần chia (hoặc nhân) chúng bằng các lũy thừa tương ứng của $p$ và $q$, sao cho các lũy thừa nằm cạnh các phần tử tương ứng.

Để tìm ma trận con $n \times m$ nhỏ nhất theo thứ tự từ điển, chúng ta có thể đi qua tất cả các ma trận con như vậy và so sánh chúng với ma trận con nhỏ nhất theo thứ tự từ điển đã được xử lý.

Nếu từ đầu chúng ta tính trước tất cả các lũy thừa cần thiết của $p$ và $q$ trong độ phức tạp $O(n + m)$, các tổng tiền tố của hàm băm có thể được tính trong độ phức tạp $O(nm)$. Hai ma trận con có thể được so sánh theo thứ tự từ điển trong thời gian $O(\log(nm))$, do đó độ phức tạp tổng thể là $O(nm \log(nm))$.