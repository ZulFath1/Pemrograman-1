nilai=[]
while (len(nilai)<2):
    baris=input()
    baris1=baris.split()

    for value in baris1:
        nilai.append(float(value))
tihang,singgang=nilai
#40 41 dan 16 65
print(f"Alas = {((singgang*singgang)-(tihang*tihang))**0.5:.0f} cm")
print(f"Tinggi = {tihang:.0f} cm")
print(f"Keliling = {tihang+(((singgang*singgang)-(tihang*tihang))**0.5)+singgang:.0f} cm")
print(f"Luas = {0.5*(((singgang*singgang)-(tihang*tihang))**0.5)*tihang:.0f} cm^2")