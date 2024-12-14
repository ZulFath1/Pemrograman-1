while True:
    print("Pilih Program\n 1.Penjumlahan\n 2.Pengurangan\n 3.Perkalian\n 4.Pembagian\n 5.Exit")
    r=int(input("Masukkan Pilihan ="))
    if r > 5:
        print("Input anda salah, silahkan coba lagi")
    elif r < 1:
        print("Input anda salah, silahkan coba lagi")
    elif r==5:
        print("Terima kasih, telah menggunakan kalkulator MUHAMMAD DZUL FATHI AHYAN")
        break
    else:
        y=float(input("Masukkan Nilai Pertama ="))
        a=float(input("Masukkan Nilai Kedua   ="))
        if r==1:
            print("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f"% (y,a, y+a))
        elif r==2:
            print("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f"% (y,a, y-a))
        elif r==3:
            print("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f"% (y,a, y*a))
        elif r==4:
            if a == 0:
                print("Woilah ini tidak bisa didefinisikan omagaat")
            else :
                print("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f"% (y,a, y/a))