alas=5
tinggi=12
miring=(alas*alas+tinggi*tinggi)**0.5
keliling=alas+tinggi+miring
luas=(alas*tinggi)/2
print(f"diketahui :")
print(f"alas = {alas:.0f} cm")
print(f"tinggi = {tinggi:.0f} cm\n")
print(f"jawaban :")
print(f"sisi A = {tinggi:.0f} cm")
print(f"sisi B = {miring:.0f} cm")
print(f"sisi C = {alas:.0f} cm")
print(f"keliling = {keliling:.0f} cm")
print(f"luas = {luas:.0f} cm")