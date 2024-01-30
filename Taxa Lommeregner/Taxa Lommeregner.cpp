
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

    // indsæt hvor mange km kunden vil køres

    cout << "Hvor mange KM vil kunden k\x9Bres? ";
    cin >> indtastetKM;

    // har kunden kastet op? ja eller nej 

    string Opkast;
    cout << "Har kunden kastet op ? \n 1) ja \n 2) nej\n";
    cin >> Opkast;

    //hvis ja(1) sæt variablens Kastetop til en værdi af 1

    if (Opkast == "1" || Opkast == "ja") {
        kastetop = 1;
    }

    // ellers hvis nej (2) sæt variablen Kastetop til 0

    else if (Opkast == "2" || Opkast == "nej") {
        kastetop = 0;
    }

    // hvis indtastetKM er under 100 skal der ganges pris pr km med indtastet km og plusses opstarts pris

    if (indtastetKM <= 100) {
        udregnetPrisForK�rteKMFoerGebyr = prisprkm * indtastetKM;
        Resultat = udregnetPrisForK�rteKMFoerGebyr + opstart;

        // hvis kastet op lægges der opkastgebyr oven i

        if (kastetop == 1) {
            visResultat = Resultat + opkastgebyr;
            cout << visResultat << ",- Kr\n";
            goto label;
        }

        // ellers bare vis resultat uden opkast gebyr

        else if (kastetop == 0) {
            cout << Resultat << ",-Kr\n";
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
            cout << Resultat << ",- Kr\n";
            goto label;
        }
        else if (kastetop == 0) {
            cout << visResultat << ",-Kr\n";
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
            cout << Resultat << ",- Kr\n";
            goto label;
        }
        else if (kastetop == 0) {
            cout << visResultat << ",-Kr\n";
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
            cout << Resultat << ",- Kr\n";
            goto label;
        }
        else if (kastetop == 0) {
            cout << visResultat << ",-Kr\n";
            goto label;
        }

    }
    return 0;
}