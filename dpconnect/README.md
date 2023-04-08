# DP with connected components

<!-- Inspired by [Tutorial Non-trivial DP Tricks and Techniques, by
zscoder](https://codeforces.com/blog/entry/47764), This is actually a
well known DP trick, and has appeared in some problems, but I have not
found a detailed tutorial to easily understand it from scratch, me and
some friends had troubles to learn this trick, so I will try to explain
in a simple and detailed way. -->

## Thế nào là "DP with connected components"

Ý tưởng chính của kĩ thuật này là việc xây dựng hoán vị bằng cách chèn các phần tử vào dãy theo thứ tự **tăng dần về giá trị** và lưu lại trạng thái của DP bằng số lượng nhóm (dãy con liên tiếp không kề nhau) của $i$ phần tử đầu tiên $(1,2,...,i)$, sau đó sẽ thêm phần tử thứ $i+1$ vào dãy và kiểm tra xem sự thay đổi của các nhóm.

Kỹ thuật có thế hữu ích trong việc đếm số lượng hoán vị thỏa mãn một vài tính chất hoặc điều kiện và tìm hoán vị mà tối ưu của một số hàm.

<!-- The main idea of this trick is building permutations inserting the elements in increasing order, and storing as a state of the dynamic programming the number of chunks or components that represents some prefix of elements (i.e elements $1, 2, ..., i$), and the transitions are about how inserting the next element ($i + 1$), will affect this chunks or components. (note that these are the values of the elements, not their position in the permutation)

This trick can be useful to count the number of permutations with some characteristics or constraints and to find permutations that maximize or minimize some functions. -->

## Bài tập cơ bản

Cho một số nguyên $n$, hãy đếm số lượng hoán vị có độ dài $n$.

Đúng vậy, bạn đã đọc đúng, chúng ta sẽ tính $n!$ bằng một phương pháp quy hoạch động phức tạp với độ phức tạp $O(n^2)$, có phải đó là điều tuyệt vời? (Đừng sợ, với kỹ thuật này, bạn sẽ giải quyết được các bài toán mà không thể giải bằng các phương pháp kết hợp cơ bản)

##  Cách tiếp cận bài toán.

Chúng ta sẽ cố gắng xây dựng tất cả các hoán vị.

Chúng ta sẽ chèn các số từ $1$ đến $n$ theo thứ tự tăng dần. Khi chúng ta chèn số $i+1$, chúng ta sẽ có một vài khối hoặc thành phần nối của hoán vị sẽ chứa tất cả các số từ $1$ đến $i$. Hãy tập trung vào giai đoạn thứ $i$ này:

Ví dụ nếu chúng ta sắp chèn số $4$, và chúng ta đang đếm số hoán vị có kích thước $7$, chúng ta có thể có hai thành phần, như $(2)$ và $(3, 1)$, điều đó có nghĩa là hoán vị cuối cùng sẽ có dạng $(2,\_,\_,3,1,\_,\_)$ hoặc $(\_,2,\_,3,1,\_,\_)$, tức là sẽ có một số giá trị giữa mỗi thành phần (lớn hơn $i$, vì tất cả các giá trị nhỏ hơn $i$ đã được đặt), sẽ được đặt trong một thao tác sau đó, các thành phần sẽ xuất hiện theo thứ tự, và các số kề nhau trong các thành phần sẽ kề nhau trong hoán vị cuối cùng.

<!-- We will try to build all the permutations.

We will insert the numbers from $1$ to $n$ in increasing order, when we insert the number $i+1$, we will have some chunks or connected components of the permutation that will contain all numbers from $1$ to $i$, let\'s focus on this $i$-th stage:

For example if we are going to insert $4$, and we are counting the permutations of size $7$, we can have two components, like $(2)$ and $(3, 1)$, that means that the final permutation will look like $(2,?,?,3,1,?,?)$ or $(?,2,?,3,1,?,?)$, that is, there will be some numbers between each component (greater than $i$, because all others are already placed), that will be placed in some later operation, the components will appear in order, and the adjacent numbers in the components will be adjacent in the final permutation. -->

<!-- In the final permutation there will be some numbers from $i$
to $n$ (maybe $0$), then the first component, then
other numbers greater than $i$ (at least one, since otherwise
the first and the second component would be only one bigger component),
the second component, and so on, finally after the last component there
may be some numbers greater than $i$. Note that the components
should appear in order. -->

## Trạng thái:

Đặt $DP_{i,j}$ là số lượng tập hợp các thành phần được sắp xếp được hình thành từ các số từ $1$ đến $i$ với $j$ thành phần, ví dụ nếu chúng ta đang đếm số hoán vị của kích thước $7$ và có hai thành phần, $(2)$ và $(3,1)$, tập hợp được sắp xếp của chúng là $\{(2), (3,1)\}$ và sẽ được tính trong $DP_{3,2}$.

Ở đây, trong một tập hợp được sắp xếp, thứ tự của các phần tử quan trọng, không chỉ giá trị của chúng, tập hợp $(a, b)$ $\neq$ tập hợp $(b, a)$ và tập hợp $(a, b)$ $\neq$ tập hợp $(a, c)$.

Đáp án cuối cùng của bài toán sẽ là $DP_{n,1}$, vì đó sẽ lưu trữ số lượng các thành phần đơn lẻ có kích thước $n$, tức là số hoán vị có kích thước $n$.

## Chuyển trạng thái:

Bây giờ, để tính các chuyển trạng thái, hãy suy nghĩ xem việc chèn số $i+1$ sẽ ảnh hưởng như thế nào đến tập hợp các thành phần được hình thành từ các số từ $1$ đến $i$:

-   Chúng ta có thể tạo ra một thành phần mới chỉ chứa số $i+1$, chúng ta có thể đặt thành phần mới này ở bất kỳ vị trí nào giữa hai thành phần đã tồn tại, trước thành phần đầu tiên, hoặc sau thành phần cuối cùng. Chuyển trạng thái này sẽ là $DP_{i+1, j+1} = DP_{i+1, j+1}+ DP_{i, j} \cdot (j + 1)$ vì chúng ta sẽ kết thúc với một thành phần mới, và chúng ta sẽ có $(j+1)$ vị trí có sẵn.

-   Chúng ta có thể thêm số $(i+1)$ vào đầu hoặc cuối của bất kỳ thành phần đã tồn tại nào, giả sử chúng ta có tập hợp các thành phần này $\{(1, 2), (4), (3, 5)\}$, chúng ta có thể đặt $6$ vào đầu hoặc cuối của bất kỳ thành phần nào, nếu chúng ta đặt vào đầu của thành phần đầu tiên, chúng ta sẽ kết thúc với $\{(6, 1, 2), (4), (3, 5)\}$. Chuyển trạng thái này sẽ là $DP_{i+1, j} = DP_{i+1, j}+ DP_{i, j} \times (2 \cdot j)$, vì chúng ta sẽ kết thúc với cùng số lượng thành phần, và chúng ta sẽ có $(2\cdot j)$ vị trí có sẵn cho $i+1$.

-   Chúng ta có thể hợp nhất hai thành phần thành một thành phần lớn bằng cách đặt $i+1$ ở cuối một thành phần và ở đầu của thành phần tiếp theo cùng lúc. Ví dụ, nếu ta có tập hợp các thành phần $\{(1, 2), (4), (3, 5)\}$, ta có thể hợp nhất thành phần đầu tiên và thứ hai với số $6$, điều đó sẽ dẫn đến $\{(1, 2, 6, 4), (3, 5)\}$. Chuyển trạng thái này sẽ là $DP_{i+1, j-1} = DP_{i+1, j-1} + DP_{i, j} \cdot (j - 1)$, vì chúng ta sẽ có một thành phần ít hơn (chúng ta đã hợp nhất hai thành phần thành một), và chúng ta có thể hợp nhất bất kỳ hai thành phần liên tiếp nào, vì vậy có $(j - 1)$ lựa chọn.

## Độ phức tạp

Có tổng cộng $O(n^2)$ trạng thái và $O(1)$ chuyển trạng thái cho mỗi trạng thái, mỗi chuyển đổi có thể được thực hiện trong độ phức tạp thời gian $O(1)$. Ngoài ra, chúng ta có thể loại bỏ việc lưu trữ tất cả các trạng thái trong bộ nhớ bằng cách chỉ lưu trữ trạng thái hiện tại và trạng thái trước đó, do đó độ phức tạp thời gian tổng thể là $O(n^2)$ và sử dụng bộ nhớ là $O(n)$ hoặc $O(n^2)$ tùy thuộc vào cách thực hiện.

<!-- ## Proof of correctness:

First, we will prove that any permutation can be counted with this dp,
and after that, that each one will be counted exactly once.

First, let\'s show by induction that the subset of the $i$
elements of smallest value (i.e. the elements $1, 2, 3, ...,
i$ by value, not by position) of any permutation $p$ is
always an ordered set of components, it will be obviously true at
$i = 0$, since it\'s just the empty set. Now, for each
$i$, we claim that we have the ordered set of the first
$i-1$ elements, let\'s denote $j$ as the position of
$i$ in the permutation:

-   If $p_j < p_{j-1}$ and $p_j < p_{j+1}$
    (remember that $p_j = i$), then we can add a new
    component with the element $(i)$ between the rightmost
    existing component before $j$, and the leftmost existing
    component after $j$.

-   If $p_j > p_{j-1}$ and $p_j < p_{j+1}$,
    then we can add $i$ at the end of the component that ends
    at $j-1$.

-   If $p_j < p_{j-1}$ and $p_j > p_{j+1}$,
    then we can add $i$ at the beginning of the component that
    starts at $j+1$.

-   If $p_j > p_{j-1}$ and $p_j > p_{j+1}$,
    then we can merge the component that ends at $j-1$ with
    the one that starts at $j+1$ by placing $i$
    between them.

So for any case we can obtain a new ordered set from the previous one by
adding $i$.

This way we have proven that each subset that contains the smallest
$i$ numbers of a permutation of size $n$ corresponds
to a ordered set of components, and, since for a fixed permutation, in
each stage we will only have exactly one option that can end up in that
permutation after all stages are done, each permutation will be counted
exactly once.

[Code](https://pastebin.com/JMGZA9t8)

## Problems that can be solved with this trick:

Building the permutations in this way can be used to count the number of
permutations with some properties, Now I will share some problems that
can be solved with this trick, in relative increasing order of
dificulty:

-   Count the number of permutations of length $n$, that
    don\'t have three consecutive elements increasing or decreasing,
    that is, there is no $i$ $(1 \leq i \leq n-2)$
    such that $p_i > p_{i+1}$ and $p_{i+1} >
    p_{i+2}$, or $p_i < p_{i+1}$ and $p_{i+1}
    < p_{i+2}$, starts with a number $s$ and ends with
    a number $e$. This problem is actually [CEOI 2016
    Kangaroo](https://oj.uz/problem/view/CEOI16_kangaroo). You can see
    the solution explained
    [here](https://codeforces.com/blog/entry/47764?#comment-704139).

-   [B. Ant Man](https://codeforces.com/contest/704/problem/B)

-   [E. Phoenix and
    Computers](https://codeforces.com/contest/1515/problem/E) ,
    editorial doesn\'t mention that can be solved with this, but you can
    see a code with comments
    [here](https://codeforces.com/contest/1515/submission/115660316).

-   [JOI 2016 Open Contest ---
    Skyscrapers](http://s3-ap-northeast-1.amazonaws.com/data.cms.ioi-jp.org/open-2016/2016-open-skyscraper-en.pdf),
    Given $a_1, a_2, \..., a_n$ find the number of
    permutations of these numbers such that
    $\|a_1 - a_2\| + \|a_2 - a_3\| + \... + \|a_{n - 1} - a_n\| ≤ L$
    where $L$ is a given integer. Constraints :
    $n ≤ 100, L ≤ 1000, a_i ≤ 1000$. You can see the solution
    explained [here](https://codeforces.com/blog/entry/47764) in
    \"Connected Component\" DP section.

-   [UTS Open \'21 P7 --- April
    Fools](https://dmoj.ca/problem/utso21p7), editorial notes can be
    found
    [here](https://docs.google.com/document/d/1QWXWc37Yy3gOi2SEDq0H-kHKndgxNXOAGnn9vkPQ3c8/edit)

I would be grateful if you discuss about the topic in comments, let me
know if there is any mistake in the blog, or share other problems that
can be solved with this trick.

UPD: Here I will list the problems shared by community members, Thanks
to everyone who contributed, note that these problems are not sorted by
any particular order:

-   [SWERC 2020 F](https://codeforces.com/gym/103081/problem/F)

-   [CSES problem](https://cses.fi/problemset/task/1075) Abridged
    Statement: Count the number of permutations of length $n$,
    $(n \leq 30)$, such that the diference between each pair
    of adjacent elements is strictly greater than $1$.

-   [ARC 117 E: Zero-Sum Ranges
    2](https://atcoder.jp/contests/arc117/tasks/arc117_e)

-   [Malaysian Computing Olympiad 2017 P5, Magical
    Teleporter](https://codeforces.com/group/R2SERIff4f/contest/213171/problem/R)

-   [Malaysian Computing Olympiad 2020 P4, Reading
    Novels](https://codeforces.com/group/IO0c6wbyI8/contest/293254/problem/D)

-   [TOKI Regular Open Contest \#11
    H](https://tlx.toki.id/problems/troc-11/H) -->
