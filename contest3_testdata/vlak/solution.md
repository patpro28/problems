Chúng ta sẽ sử dụng cây Trie để giải bài toán này.

Chúng ta sẽ xây dựng cây Trie cho tất cả từ của cả Nina và Emilịja. Chúng ta sẽ tô màu cho tất cả đỉnh là điểm kết thúc của các từ của Nina là màu xanh dương, và tất cả các đinh là điểm kết thúc của các từ của Emilịja là màu đỏ. Có thể một đỉnh có cả hai màu. Trò chơi sẽ xuất phát từ gốc của cây, và di chuyển đi xuống dọc theo các cạnh của cây. Nina di chuyển ở tầng chẵn, Emilija ở tầng lẻ.

Nina có thể di chuyển nếu như tồn tại một màu xanh dương ở trong cây con, và Emilija có thể di chuyển nếu như tồn tại một màu đỏ ở trong cây con. Nếu một người không thể di chuyển, người đó thua.

Người thắng có thể tìm kiếm bằng cách quy hoạch động. Chúng ta sẽ tính từ dưới lên. Người chơi chiến thắng nếu như cô ấy có thể đi đến một đỉnh mà cô ấy có thể thắng, ngược lại thì người còn lại thắng. Kết quả sẽ nằm ở gốc.