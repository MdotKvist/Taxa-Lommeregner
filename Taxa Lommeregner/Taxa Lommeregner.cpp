
#include <iostream>
using namespace std;

int main()
{
    double indtastetKM;
    double opstart = 75;
    double opkastgebyr = 1500;
    double kundenHarKastetOp;
    double prisprkm = 2;
    double udregnetPrisForK�rteKMFoerGebyr;
    double sumindenrabat;
    double kastetop;
    double Resultat;
    double visResultat;
    double Rabatten;

label:

    std::cout << "Hvor mange KM vil kunden k\x9Bres? ";
    std::cin >> indtastetKM;

    string Opkast;
    std::cout << "Har kunden kastet op ? \n 1) ja \n 2) nej\n";
    std::cin >> Opkast;

    if (Opkast == "1" || Opkast == "ja") {
        kastetop = 1;
    }
    else if (Opkast == "2" || Opkast == "nej") {
        kastetop = 0;
    }


    if (indtastetKM <= 100) {
        udregnetPrisForK�rteKMFoerGebyr = prisprkm * indtastetKM;
        Resultat = udregnetPrisForK�rteKMFoerGebyr + opstart;
        if (kastetop == 1) {
            visResultat = Resultat + opkastgebyr;
            std::cout << visResultat << ",- Kr\n";
            goto label;
        }
        else if (kastetop == 0) {
            std::cout << Resultat << ",-Kr\n";
            goto label;
        }
    }

    if (indtastetKM > 100) {
        //Renger indtastet km om til prisen p� k�rte kilometer
        sumindenrabat = prisprkm * indtastetKM;
        //regner rabatten ud
        Rabatten = sumindenrabat * 10 / 100;
        //tr�kker rabatten fra beregnet pris
        udregnetPrisForK�rteKMFoerGebyr = sumindenrabat - Rabatten;
        // ligger opstart gebyr til prisen
        visResultat = udregnetPrisForK�rteKMFoerGebyr + opstart;

        if (kastetop == 1) {
            Resultat = visResultat + opkastgebyr;
            std::cout << Resultat << ",- Kr\n";
            goto label;
        }
        else if (kastetop == 0) {
            std::cout << visResultat << ",-Kr\n";
            goto label;
        }

    }
    if (indtastetKM > 150) {
        //Renger indtastet km om til prisen p� k�rte kilometer
        sumindenrabat = prisprkm * indtastetKM;
        //regner rabatten ud
        Rabatten = sumindenrabat * 20 / 100;
        //tr�kker rabatten fra beregnet pris
        udregnetPrisForK�rteKMFoerGebyr = sumindenrabat - Rabatten;
        // ligger opstart gebyr til prisen
        visResultat = udregnetPrisForK�rteKMFoerGebyr + opstart;

        if (kastetop == 1) {
            Resultat = visResultat + opkastgebyr;
            std::cout << Resultat << ",- Kr\n";
            goto label;
        }
        else if (kastetop == 0) {
            std::cout << visResultat << ",-Kr\n";
            goto label;
        }

    }


    if (indtastetKM > 200) {
        //Renger indtastet km om til prisen p� k�rte kilometer
        sumindenrabat = prisprkm * indtastetKM;
        //regner rabatten ud
        Rabatten = sumindenrabat * 30 / 100;
        //tr�kker rabatten fra beregnet pris
        udregnetPrisForK�rteKMFoerGebyr = sumindenrabat - Rabatten;
        // ligger opstart gebyr til prisen
        visResultat = udregnetPrisForK�rteKMFoerGebyr + opstart;

        if (kastetop == 1) {
            Resultat = visResultat + opkastgebyr;
            std::cout << Resultat << ",- Kr\n";
            goto label;
        }
        else if (kastetop == 0) {
            std::cout << visResultat << ",-Kr\n";
            goto label;
        }

    }
    return 0;
}

