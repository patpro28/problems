Xâu con của một xâu $s$ là một xâu thu được bằng cách xóa đi một số ký tự của $s$ mà không thay đổi thứ tự các ký tự còn lại. Ví dụ, xâu con của `abcde` là `ace`, `abe`, `abcde`, $\empty$, còn xâu con không phải là `acd`, `bca`, `edcba`.

Cho hai xâu $s$ và $t$. Hãy tìm độ dài xâu con chung dài nhất của $s$ và $t$.

## Input

- Dòng đầu tiên chứa xâu $s$.
- Dòng thứ hai chứa xâu $t$.

Cả hai xâu đều chỉ gồm các chữ cái tiếng Anh thường và có độ dài không vượt quá $3000$.

## Output

- In ra một xâu con chung dài nhất của $s$ và $t$.

## Example

| Input                        | Output  |
| ---------------------------- | ------- |
| axyb<br/>abyxb               | axb     |
| aa<br/>xayaz                 | aa      |
| a<br/>z                      |         |
| abracadabra<br/>avadakedavra | aaadara |
