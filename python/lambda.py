import timeit


def plus_ten(x):
    res = x + 10
    return res
def plus_twenty(x):
    res = x + 20
    return res

# 1줄 짜리로 작성하려면?
# 람다식으로 쓰면 됨

# lambda x: x + 10 # 이렇게 하는 이유....?! 1가지
# 함수를 파라미터로 바로 넣어주고 싶을 때.

func_list = [plus_ten, plus_twenty]

for f in func_list:
    print(f(100))

def check_time(function, parameter):
    start = timeit.timeit()

    result = function(paramter)

    end = timeit.timeit()

    return end - start, result

print(check_time(plus_ten, 100))
print(check_time(lambda x: x + 10, 100))
