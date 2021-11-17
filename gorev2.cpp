#include <iostream>

int main(){
    int num;
    std::cout << "1-999 arasinda bir sayi giriniz: ";
    std::cin >> num;

    int gecici_num = num;
    int count = 0;
    while (gecici_num > 0){
        gecici_num = gecici_num / 10;
        count += 1;
    }
    
    if (count == 0){
        std::cout << "Girilen sayi aralik disindedir.";
        return 0;
    }

    std::string rakamlar[] = {"", "bir", "iki", "uc", "dort", "bes", "altı", "yedi", "sekiz", "dokuz"};
    std::string ondalık[] = {"", "on", "yirmi", "otuz", "kirk", "elli", "altmis", "yetmis", "seksen", "doksan"};
    std::string okunus = "";
    gecici_num = num;
    for (int i = 1; i <= count; i++){
        int x = gecici_num % 10;
        gecici_num = gecici_num/10;
        switch (i){
            case 1:
                okunus = rakamlar[x] + okunus;
                break;
            case 2:
                okunus = ondalık[x] + okunus; 
                break;
            case 3:
                if (x == 1){
                    x = 0;
                }
                okunus = rakamlar[x] + "yuz" + okunus;
                break;
            default:
                okunus = "Girilen sayi aralik disindadir.";
                break;
        }
    }   
    std::cout << okunus << std::endl;
    return 0;
}