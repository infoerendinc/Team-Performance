#include <stdio.h>

#define MAX_TEAM_SIZE 10

// Bir çalışanın performansını temsil eden yapı
typedef struct {
    char ad[50]; // Çalışanın adı
    int performans; // Performans değeri (örneğin, 1-10 arası)
} Calisan;

// Takımı temsil eden yapı
typedef struct {
    Calisan calisanlar[MAX_TEAM_SIZE]; // Takımdaki çalışanlar
    int calisan_sayisi; // Takımdaki çalışan sayısı
} Takim;

// Takımın performansını hesaplayan fonksiyon
float takimPerformansi(Takim *takim) {
    int toplamPerformans = 0;
    int i;

    // Tüm çalışanların performansını topla
    for (i = 0; i < takim->calisan_sayisi; i++) {
        toplamPerformans += takim->calisanlar[i].performans;
    }

    // Ortalama performansı hesapla
    float ortalamaPerformans = (float)toplamPerformans / takim->calisan_sayisi;

    return ortalamaPerformans;
}

int main() {
    Takim takim;

    // Örnek olarak 3 çalışan ekleyelim
    takim.calisan_sayisi = 3;

    // Çalışanların bilgilerini girelim (örneğin sırasıyla ad ve performans puanı)
    printf("1. Calisanin Adi: ");
    scanf("%s", takim.calisanlar[0].ad);
    printf("1. Calisanin Performansi (1-10 arasi): ");
    scanf("%d", &takim.calisanlar[0].performans);

    printf("2. Calisanin Adi: ");
    scanf("%s", takim.calisanlar[1].ad);
    printf("2. Calisanin Performansi (1-10 arasi): ");
    scanf("%d", &takim.calisanlar[1].performans);

    printf("3. Calisanin Adi: ");
    scanf("%s", takim.calisanlar[2].ad);
    printf("3. Calisanin Performansi (1-10 arasi): ");
    scanf("%d", &takim.calisanlar[2].performans);

    // Takımın performansını hesapla ve ekrana yazdır
    float ortalama = takimPerformansi(&takim);
    printf("Takimin ortalama performansi: %.2f\n", ortalama);

    return 0;
}
