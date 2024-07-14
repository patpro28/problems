#include <iostream>
using namespace std;

int n, m;
vector<pair<int, int>> segments;
vector<int> v, points;

struct Compress {
  vector<int> values;
  Compress() {}
  Compress(vector<int> __values) : values(__values) {
    sort(values.begin(), values.end());
    values.erase(unique(values.begin(), values.end()), values.end());
  }
  int operator[](int i) {
    return lower_bound(values.begin(), values.end(), i) - values.begin();
  }
  int size() {
    return values.size();
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;
    if (x > y) swap(x, y);
    segments.push_back({x, y});
    v.push_back(x);
    v.push_back(y + 1);
  }

  for (int i = 0; i < m; ++i) {
    int x;
    cin >> x;
    points.push_back(x);
    v.push_back(x);
  }
  
  // Rời rạc hoá các giá trị trong vector v
  Compress compress(v);

  // Tạo vector thống kê số lượng đoạn thẳng mà mỗi điểm thuộc về
  vector<int> cnt(compress.size(), 0);

  for (auto& segment : segments) {
    // Tăng cnt mỗi điểm thuộc đoạn thẳng segment lên 1 đơn vị
    cnt[compress[segment.first]]++;
    cnt[compress[segment.second + 1]]--;
  }

  // Tính lai số lượng đoạn thẳng mà mỗi điểm thuộc về
  for (int i = 1; i < compress.size(); ++i)
    cnt[i] += cnt[i - 1];

  // In ra kết quả
  for (auto& point : points)
    cout << cnt[compress[point]] << ' ';
  return 0;
}