#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iterator>

int main(void) {
    int size;
    scanf("%d", &size);
    
    int src[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &src[i]);
    }
    
    std::vector<int> v(src, src+size);
    
    auto maxIdx = std::max_element(v.begin(), v.end());
    
    float res[size];
    float sum = 0;
    for (int i =0; i < size; i++) {
        res[i] = (float) src[i] / *maxIdx * 100;
        sum += res[i];
    }

    printf("%.6f\n", sum / size);
    
}
