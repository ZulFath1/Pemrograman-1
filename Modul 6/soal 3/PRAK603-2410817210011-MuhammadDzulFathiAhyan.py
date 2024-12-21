r1, r2 = map(int, input().split())
if r1 != r2:
    print("Jumlah tidak sama")
    exit()
ruang1 = list(map(int, input().split()))
raung2 = list(map(int, input().split()))
for i in range(r1):
    print(ruang1[i] * raung2[i], end=" ")