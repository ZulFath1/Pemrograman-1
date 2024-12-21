hestek=0 
bitang=0 
kawannya_naruto =input() 
musuhnya=input() 
if len(kawannya_naruto) != len(musuhnya): 
    print("Panjang kalimat berbeda, pesan palsu")
    exit()
for i in range(len(kawannya_naruto)): 
    if kawannya_naruto[i] == ' ' and musuhnya[i] == ' ': 
        continue 
    if musuhnya[i] == kawannya_naruto[i]: 
        print("*", end="") 
        bitang += 1 
    else: 
        print("#", end="") 
        hestek += 1 
print("\n* = ", bitang) 
print("# = ",  hestek) 
if (bitang >= hestek): print("Pesan Asli") 
else: print("Pesan Palsu")