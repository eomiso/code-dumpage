#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iterator>


float average(std::vector<int> const& v) {
  if (v.empty()) {
    return 0;
  }

  auto const count = static_cast<float>(v.size());
  int sum = 0;
  for (auto i : v) {
    sum += i;
  }

  return (float)sum / count;
}

int main(void) {
  int size, n;
  scanf("%d", &size);
  
  std::vector<int> v;

  int num;
  for (int i = 0; i < size; i++) {
    scanf("%d", &n);
    for (int j = 0; j < n; j++) {
      scanf("%d", &num);
      v.push_back(num);
    }

    float avg = average(v);
    int count = std::count_if(v.begin(), v.end(), [&avg](int k) {return (float) k > avg; } );

    printf("%.3f%%\n", (float)count / n * 100);
    v.clear();
  }


}
