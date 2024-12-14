def bio(tahunlahir,nama,asal):
    tahun_sekarang=2020
    print("Perkenalkan Nama Saya : %s"%(nama))
    print("Umur Saya : %d"%(tahun_sekarang - tahunlahir))
    print("Saya Adalah Angkatan : 2020")
    print("Asal Saya dari : %s"%(asal))
tahunlahir=int(input())
nama=input()
asal=input()
bio(tahunlahir,nama,asal)