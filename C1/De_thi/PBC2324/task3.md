Bình và An đang tích cực học tập, ôn luyện để thi vào trường THPT chuyên trong tỉnh. Trong quá trình giải các bài toán, Bình đã gặp và giải một bài toán rất thú vị. Bình quy ước "Số đẹp" là số không chứa chữ số $0$ tận cùng. Bình muốn thử năng lực học tập của An nên thách đố An giải bài toán sau:

Cho hai số nguyên dương $a, b$ ($a < b$). Đặt $S = a \times (a+1) \times ... \times b$. Hãy cho biết số lượng chữ số 0 tận cùng của $S$ cần xóa để $S$ trở thành một số đẹp.

Ví dụ: Với $a = 4, b = 15$ thì $S = 4 \times 5 \times 6 \times ... \times 15 = 217945728000$ nên số lượng chữ số 0 tận cùng cần xóa là 3.

Rất nhanh chóng An đã tìm ra kết quả, em hãy lập trình để cùng bạn An đối sánh kết quả với Bình nhé!

### Yêu cầu

Đếm số lượng chữ số 0 tận cùng của $S$ cần xóa để $S$ trở thành số đẹp.

### Dữ liệu vào:
Từ tệp văn bản `SODEP.INP` gồm hai dòng:

- Dòng thứ nhất chứa số nguyên $T$ $(1 ≤ T ≤ 10^5)$ là số lượng cặp số nguyên.
- $T$ dòng tiếp theo, mỗi dòng ghi hai số nguyên dương $a, b$ ($a < b ≤ 10^{16}$).

### Kết quả:

Ghi ra tệp văn bản `SODEP.OUT` gồm $T$ dòng, mỗi dòng ghi số lượng chữ số 0 tận cùng của $S$ tương ứng. Kết quả có thể rất lớn nên cần lấy dư cho $10^9 + 7$ trước khi ghi ra tệp. Các số trên cùng một dòng được ghi cách nhau bởi một dấu cách.

### Ví dụ:

| SODEP.INP                        | SODEP.OUT        |
| -------------------------------- | ---------------- |
| 4<br>1 6<br>1 10<br>2 4<br>10 20 | 1<br>2<br>0<br>3 |

### Giới hạn:

- $40\%$ số test ứng với $T ≤ 10; b \le 18$.
- $30\%$ số test tiếp theo ứng với $T = 1; b \le 10^5$.
- $20\%$ số test tiếp theo ứng với $T ≤ 10^4; b \le 10^5$.
- $10\%$ số test còn lại ứng với $T ≤ 10^5; b ≤ 10^{16}$.