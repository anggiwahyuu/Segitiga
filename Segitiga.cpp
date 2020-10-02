#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Silakan dipilih mas: "; cin >> x;
    if (x==1){
        cout << "-----------------------------------------------" << endl;
        cout << "----------SEGITIGA TAJAM KE KIRI ATAS----------" << endl;
        cout << "-----------------------------------------------" << endl;
        int n;
        cout << "Ayok Mas: ";cin >> n;
        for (int i=1; i<=n; i++){
            for (int j=1; j<=i; j++){
                cout << "*";
            }cout << endl;
        }
    }
    else if (x==2){
        cout << "------------------------------------------------" << endl;
        cout << "----------SEGITIGA TAJAM KE KANAN ATAS----------" << endl;
        cout << "------------------------------------------------" << endl;
        int n;
        cout << "Ayok Mas: ";cin >> n;
        for (int i=1; i<=n; i++){
            for (int j=n-i; j>0; j--){
                cout << " ";
            }
            for (int k=1; k<=i; k++){
                cout << "*";
            }cout << endl;

        }
    }
    else if (x==3){
        cout << "------------------------------------------------" << endl;
        cout << "----------SEGITIGA TAJAM KE KIRI BAWAH----------" << endl;
        cout << "------------------------------------------------" << endl;
        int n;
        cout << "Ayok Mas: ";cin >> n;
        for (int i=1; i<=n; i++){
            for (int j=n; j>=i; j--){
                cout << "*";
            }cout << endl;
        }
    }
    else if (x==4){
        cout << "-------------------------------------------------" << endl;
        cout << "----------SEGITIGA TAJAM KE KANAN BAWAH----------" << endl;
        cout << "-------------------------------------------------" << endl;
        int n;
        cout << "Ayok Mas: ";cin >> n;
        for (int i=1; i<=n; i++){
            if (i!=1){
                for (int j=2; j<=i; j++){
                    cout << " ";
                }
            }
            for (int k=n; k>=i; k--){
                cout << "*";
            }cout << endl;
        }
    }
    else if (x==5){
        cout << "----------------------------------------------------" << endl;
        cout << "----------SEGITIGA SAMA KAKI TAJAM KE ATAS----------" << endl;
        cout << "----------------------------------------------------" << endl;
        int n;
        int counting = 0;
        cout << "Ayok Mas: "; cin >> n;
        for (int i=1; i<=n; i++){
            for (int j=n-i; j>0; j--){
                cout << " ";
            }
            for (int k=1; k<=(i+counting); k++){
                cout << "*";
            }cout << endl;
            counting++;
        }
    }
    else if (x==6){
        cout << "-----------------------------------------------------" << endl;
        cout << "----------SEGITIGA SAMA KAKI TAJAM KE BAWAH----------" << endl;
        cout << "-----------------------------------------------------" << endl;
        int n;
        int counting = -1;
        int counting2 = 0;
        cout << "Ayok Mas: "; cin >> n;;
        for (int i=1; i<n; i++){
            counting++;
        }
        for (int j=1; j<=n; j++){
            if (j!=1){
                for (int a=2; a<=j; a++){
                    cout << " ";
                }
            }
            for (int k=(n+counting); k>=counting2; k--){
                cout << "*";
            }cout << endl;
            counting2+=2;
        }
    }
    else{
        cout << "-----------------------------------------" << endl;
        cout << "---------------SALAH PILIH---------------" << endl;
        cout << "-----------------------------------------" << endl;
    }
    return 0;
    cin.get();
}
