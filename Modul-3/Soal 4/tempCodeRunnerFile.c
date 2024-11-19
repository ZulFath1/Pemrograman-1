    if (waluh <= -1 || waluh >= 100) {printf("Anda Menginput Melebihi Limit Bilangan");}
    else if (waluh == 0) {printf("Nol");}
    else if (waluh <= 10) {printf("Satuan");}
    else if (waluh >= 19) {printf("Belasan");}
    else if (waluh <= 99 && waluh >= 20) {printf("Puluhan");}
    else {printf("Anda Menginput Melebihi Limit Bilangan");}
    return 0;
}