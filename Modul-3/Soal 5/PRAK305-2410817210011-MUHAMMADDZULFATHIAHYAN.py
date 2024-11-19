inputan = (int(input("")))
hari = (inputan / 86400)
jam = (inputan % 86400) / 3600
menit = (inputan % 3600) / 60
detik = (inputan % 60)
if hari >= 1:print("%02d hari %02d:%02d:%02d\n"%(hari,jam,menit,detik))
else : print("%02d:%02d:%02d\n"%(jam,menit,detik))