def sumOfN(data, Ind, N):
    return sum(data[Ind : Ind + N])


data = [3, 4, 1, 5, 7, 11, 3, 5, 4]
Ind = 4
N = 3
result = sumOfN(data, Ind, N)
print(f"Sum = {result}")
