check = [0]*2005
check[0] = 1
check[1] = 3

for i in range(2,2005):
	check[i] = (check[i-1]-check[i-2])+2*check[i-1]

while True:
	N = int(input())
	if N == 0:
		break
	print(check[N-1])