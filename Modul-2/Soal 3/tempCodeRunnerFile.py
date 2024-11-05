nilai=[]
while (len(nilai)<6):
    baris=input()
    baris1=baris.split()

    for value in baris1:
        nilai.append(float(value))
a,b,i,j,x,y=nilai
print("%.3f"%((a - b) * i / j - (x + y)))