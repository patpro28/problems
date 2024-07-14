# Định lý Fermat nhỏ

## Phát biểu định lý

Định lý Fermat nhỏ phát biểu rằng: Nếu $p$ là một số nguyên tố và $a$ là một số nguyên dương không chia hết cho $p$, thì $a^{p-1} \equiv 1 \pmod{p}$.

Cụ thể hơn, nếu $p$ là một số nguyên tố và $a$ là một số nguyên dương bất kỳ, thì $a^p \equiv a \pmod{p}$.

Công thức này có thể được viết dưới dạng:
$$a^{p-1} \equiv 1 \pmod{p} \quad \text{khi} \quad p \nmid a$$

Hoặc tổng quát hơn:
$$a^p \equiv a \pmod{p}$$

Định lý này được đặt theo tên của Pierre de Fermat, một nhà toán học người Pháp. Đây là một trường hợp đặc biệt của Định lý Euler.

## Ứng dụng

Định lý Fermat nhỏ có nhiều ứng dụng quan trọng trong lý thuyết số, đặc biệt là trong việc tính toán số dư và nghịch đảo modulo. Dưới đây là một số ứng dụng cụ thể:

### 1. Tính số dư

Định lý Fermat nhỏ có thể được sử dụng để tính số dư của một lũy thừa lớn modulo một số nguyên tố. Ví dụ, để tính $a^b \mod p$ với $p$ là số nguyên tố, ta có thể sử dụng:

$$a^b \mod p = a^{b \mod (p-1)} \mod p$$

Ví dụ, để tính $3^{100} \mod 7$:

- $7$ là số nguyên tố, $3$ không chia hết cho $7$.
- Theo Định lý Fermat nhỏ, $3^6 \equiv 1 \pmod{7}$.
- Do đó, $100 \mod 6 = 4$.
- Nên $3^{100} \equiv 3^4 \pmod{7}$.

Ta có:
$$3^4 = 81$$
$$81 \mod 7 = 4$$

Vậy $3^{100} \mod 7 = 4$.

### 2. Tính nghịch đảo modulo
Định lý Fermat nhỏ cũng hữu ích trong việc tìm nghịch đảo modulo của một số nguyên khi modulo là một số nguyên tố. Nghịch đảo của $a$ modulo $p$ là số $b$ sao cho $ab \equiv 1 \pmod{p}$ hay $a^{-1} \equiv b \pmod{p}$.

Theo Định lý Fermat nhỏ, nếu $p$ là số nguyên tố và $a$ không chia hết cho $p$, thì:

$$a^{p-1} \equiv 1 \pmod{p}$$

Do đó, nghịch đảo của $a$ modulo $p$ là $a^{p-2}$:

$$a \cdot a^{p-2} \equiv 1 \pmod{p}$$

Ví dụ, để tìm nghịch đảo của $3$ modulo $7$:

- $7$ là số nguyên tố, $3$ không chia hết cho $7$.
- Nghịch đảo của $3$ modulo $7$ là $3^{7-2} = 3^5$.

Ta có:
$$3^5 = 243$$
$$243 \mod 7 = 5$$

Vậy nghịch đảo của $3$ modulo $7$ là $5$, tức là $3 \cdot 5 \equiv 1 \pmod{7}$.
