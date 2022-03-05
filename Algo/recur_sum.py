# 재귀를 통해 1 ... n 까지 더하기
def sum_n(n):
    if n <= 0:
        return 0
    return n + sum_n(n-1)


if __name__ == "__main__":
    print(sum_n(1))
    print(sum_n(4))
    print(sum_n(3))

# f(1) = 1
# f(n) = n + f(n-1)
# f(2) = 2 + f(1) = 3
# f(3) = 3 + f(2) = 6
# f(4) = 4 + f(3) = 10
