import time

def recursiveFibonacci(n):
    if n == 1 or n == 2:
        return 1
    else:
        return recursiveFibonacci(n-1) + recursiveFibonacci(n-2)


def dpFibonacci(n):
    N_1 = 1
    N_2 = 1
    
    if n == 1 or n == 2:
        return 1
    
    for i in range(3, n+1):
        N_3 = N_1 + N_2
        N_2 = N_1
        N_1 = N_3
    
    return N_3


def main():
    n = int(input())
    
    start = time.time()
    dpFibonacci(n)
    end = time.time()
    timeSpentDP = end - start
    
    start = time.time()
    recursiveFibonacci(n)
    end = time.time()
    timeSpentRecursive = end - start
    
    print(f"피보나치 수열의 {n}번째 항 계산에 소요된 시간을 비교합니다.")
    print(f"동적 계획법은 재귀 호출보다 {round(timeSpentRecursive/timeSpentDP,2)} 배 빠릅니다.")
    
if __name__ == "__main__":
    main()

