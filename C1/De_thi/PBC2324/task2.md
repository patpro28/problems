### Câu 2 (5.0 điểm). GIẢI MÃ

Nhân dịp tổng kết năm học, câu lạc bộ Tin học của bạn Nam tổ chức chuyến tham quan dã ngoại tại một khu du lịch trên địa bàn huyện X. Trải nghiệm đầu tiên của các bạn là trò chơi "Tìm kho báu". Để tìm ra kho báu các bạn cần phải có mật mã là một dãy S gồm các chữ cái in thường. Mật mã này đã được mã hóa thành dãy T theo quy tắc sau:

- Chọn trước 1 ký tự $ch$ và tiến hành loại bỏ tất cả các ký tự $ch$ trong dãy $S$ thu được dãy mới là $K$.
- Nối dãy $K$ vào sau dãy $S$ thu được dãy $T$.

Các thành viên câu lạc bộ được Ban tổ chức cung cấp dãy $T$ và một ký tự $ch$. Nhiệm vụ của các thành viên là giải mã để tìm dãy $S$.

Em hãy lập trình giúp câu lạc bộ của bạn Nam giải quyết nhiệm vụ trên.

### Yêu cầu

Tìm dãy $S$ từ dãy $T$ đã cho.

### Dữ liệu vào

Từ tệp văn bản `GIAIMA.INP` gồm:

  - Dòng thứ nhất ghi dãy $T$ có độ dài $L$ $(2 ≤ L ≤ 10^6)$.
  - Dòng thứ hai ghi một ký tự ch.

### Kết quả

Ghi ra tệp văn bản `GIAIMA.OUT` gồm một dòng là dãy S nếu tìm được mật mã, ngược lại ghi -1 nếu không tìm được mật mã.

### Ví dụ

| GIAIMA.INP     | GIAIMA.OUT |
| -------------- | ---------- |
| abcab <br> c   | abc        |
| abcabcc <br> b | -1         |

### Giới hạn

- 60% số test ứng với $2 ≤ L ≤ 10^3$.
- 40% số test ứng với $10^3 < L ≤ 10^6$.
