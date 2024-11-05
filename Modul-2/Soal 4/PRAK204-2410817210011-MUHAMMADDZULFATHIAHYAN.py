nilai=[]
while (len(nilai)<2):
    baris=input()
    baris1=baris.split()

    for value in baris1:
        nilai.append(float(value))
#7 10 dan 10 10
inierrrrrr,initeeeeee=nilai
v=(22/7 * (inierrrrrr)**2 * initeeeeee)
l=(2 * 22/7 * inierrrrrr * (inierrrrrr + initeeeeee))
k=(2 * 22/7 * inierrrrrr)
print("Volume = %.2f\nLuas = %.2f\nKeliling = %.2f "%(v,l,k))