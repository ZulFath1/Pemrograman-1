def mutlak(angka): 
    return -angka if angka < 0 else angka
def hitung(nilai1,nilai2):
    return mutlak(nilai1-nilai2)
def main():
    a,c,b,d=map(int,input().split())
    hasil = hitung (a,b) + hitung (c,d)
    print(mutlak(hasil))
main()