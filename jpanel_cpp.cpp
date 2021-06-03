#include<iostream>
// #include<string>
#include<cstdlib>
using namespace std;

class temperaturClass {
	public: //penentu akses
        float 
            umur,
            nik,
            suhu; //atribut variabel

        string
            nama,
            pesan,
            alamat;
        
        bool 
            swab;

        void setTemperature(int s) {
            suhu = s;
            if(suhu <= 37.5) {
                pesan = "Suhu normal, silakan lanjutkan aktivitas anda";
                swab = false;
            }else{
                pesan = "Suhu melebihi batas maksimal, silakan lakukan pemeriksaan dokter"; 
                swab = true;  
            }
        }

        string getTemperature() {
            return pesan;
        }

        string printDataSwab(){
            cout<<" Data Swab "<<endl;
            cout<<" _______________________________________"<<endl;
            cout<<"| NIK\t\t|:"<<nik<<endl;
            cout<<"| Nama\t\t|:"<<nama<<endl;
            cout<<"| Umur\t\t|:"<<umur<<endl;
            cout<<"| Hasil\t\t|:"<<"Menunggu"<<endl;
            cout<<"| Alamat\t|:"<<alamat<<endl;
            cout<<" ---------------------------------------"<<endl;
            return 0;
        }
};

void temperatureApps() {
    float n;
    int 
        i, 
        x = 1;
    string 
        status, 
        ask;

    cout<<"\n";
    cout<<"++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"+ Aplikasi Simple Temperature Detector +"<<endl;
    cout<<"+ \t\t\tBy Jarwonozt   +"<<endl;
    cout<<"++++++++++++++++++++++++++++++++++++++++"<<endl;

    //menggunakan perulangan do while
    do{
        x++;
        cout<<"________________________________________\n"<<endl;
        cout<<"Input Suhu : ";
        cin>>n;
        cout<<"________________________________________"<<endl;
        cout<<"\n"<<endl;

        //atribut objek
        temperaturClass jarwonozt;
        jarwonozt.setTemperature(n);
        cout<<jarwonozt.getTemperature();
        cout<<"\n######################################\n"; 
        if(jarwonozt.swab == true){
            status = "n";
            cout<<"\nApakah anda akan melakukan Swab Tes (y/n) = ";
            cin>>ask;
            if(ask == "y"){
                cout<<"\n";
                cout<<"Untuk melakukan swab tes silakan isi data berikut \n";
                cout<<"NIK\t\t\t: ";
                cin>>jarwonozt.nik; //input data varivael nik pada objek jarwonozt yang memanggil kelas temperaturClass
                cout<<"Nama sesuai KTP\t\t: ";
                getline(cin>>ws, jarwonozt.nama); //input data dengan spasi / withspace
                cout<<"Umur \t\t\t: ";
                cin>>jarwonozt.umur;
                cout<<"Alamat susuai KTP \t: ";
                getline(cin>>ws, jarwonozt.alamat);
                cout<<"\n";
                cout<<jarwonozt.printDataSwab();

            }else{
                cout<<"\nKami sarankan anda untuk melakukan swab tes di tempat terdekat"<<endl;
            }
                
        }else{
                cout<<"Tambah (y/n) = ";
                cin>>status;       
                cout<<"\n######################################\n";
                // for(i = 0; i < x; i++){
                //     cout<<"a"<<endl;
                // }
        }
    }while(status == "y");
    cout<<"\nTanks of using...."<<endl;
}

void foodApps() {
    int
        kode_meja,
        jml_pemesan,
        no = 1,
        porsi[10],
        kode_menu[10];
    
    float    
        bayar,
        kembalian,
        harga[10],
        total_bayar = 0,
        total_harga[10],
        diskon[10];

    string
        tambah,
        status = "Belum Bayar",
        menu[10];

    cout<<"+++++++++++++++++++++++++++"<<endl;
    cout<<"+  CAFE CODING JARWONOZT  +"<<endl;
    cout<<"+++++++++++++++++++++++++++"<<endl;
    cout<<"Masukan Nomor Meja : ";
    cin>>kode_meja;
    cout<<"\n";
    do{
        no++;
        cout<<"++++++++++++++++++++++"<<endl;
        cout<<"+ DAFTAR MENU"<<endl;
        cout<<"++++++++++++++++++++++"<<endl;
        cout<<"+ MAKANAN "<<endl;
        cout<<"+ 1. Chicken Syntak "<<endl;
        cout<<"+ 2. Sop C++ "<<endl;
        cout<<"+ 3. Mie Coding "<<endl;
        cout<<"+ 4. Soto Array "<<endl;
        cout<<"+ 5. Bakso String "<<endl;
        cout<<"+ -------------------- "<<endl;
        cout<<"+ MINUMAN "<<endl;
        cout<<"+ 6. Coffe Start Up "<<endl;
        cout<<"+ 7. Ice Code "<<endl;
        cout<<"+ 8. Tea Code "<<endl;
        cout<<"+ 9. Cocolate Code "<<endl;
        cout<<"+ 10. Aquit "<<endl;
        cout<<"++++++++++++++++++++++"<<endl;
        cout<<"Pilih menu (contoh : 7 untuk kode Ice Code): ";
        cin>>kode_menu[no];
        cout<<"Jumlah Pesanan : ";
        cin>>porsi[no];
        cout<<"tambah ? (y/n) : ";
        cin>>tambah;

    }while(tambah == "y");

    for(int i = 2; i <= no; i++){   
            if(kode_menu[i] == 1){
                menu[i] = "Chicken Syntak";
                harga[i] = 13000;
                if(porsi[i] > 5){
                    diskon[i] = 20; // 30%
                    total_harga[i] = (harga[i] - (harga[i] * (diskon[i]/100))) * porsi[i];
                }else{
                    diskon[i] = 0;
                    total_harga[i] = harga[i] * porsi[i];
                }
            }
            else if(kode_menu[i] == 2){
                menu[i] = "Shop C++";
                harga[i] = 15000;
                if(porsi[i] > 4){
                    diskon[i] = 30; // 30%
                    total_harga[i] = (harga[i] - (harga[i] * (diskon[i]/100))) * porsi[i];
                }else{
                    diskon[i] = 0;
                    total_harga[i] = harga[i] * porsi[i];
                }
            }
            else if(kode_menu[i] == 3){
                menu[i] = "Mie Coding";
                harga[i] = 14000;
                if(porsi[i] > 4){
                    diskon[i] = 15; // 30%
                    total_harga[i] = (harga[i] - (harga[i] * (diskon[i]/100))) * porsi[i];
                }else{
                    diskon[i] = 0;
                    total_harga[i] = harga[i] * porsi[i];
                }
            }
            else if(kode_menu[i] == 4){
                menu[i] = "Soto Array";
                harga[i] = 17000;
                if(porsi[i] > 5){
                    diskon[i] = 30; // 30%
                    total_harga[i] = (harga[i] - (harga[i] * (diskon[i]/100))) * porsi[i];
                }else{
                    diskon[i] = 0;
                    total_harga[i] = harga[i] * porsi[i];
                }
            }
            else if(kode_menu[i] == 5){
                menu[i] = "Bakso String";
                harga[i] = 20000;
                if(porsi[i] > 5){
                    diskon[i] = 20; // 30%
                    total_harga[i] = (harga[i] - (harga[i] * (diskon[i]/100))) * porsi[i];
                }else{
                    diskon[i] = 0;
                    total_harga[i] = harga[i] * porsi[i];
                }
            }
            else if(kode_menu[i] == 6){
                menu[i] = "Coffe Start Up";
                harga[i] = 10000;
                if(porsi[i] > 5){
                    diskon[i] = 20; // 30%
                    total_harga[i] = (harga[i] - (harga[i] * (diskon[i]/100))) * porsi[i];
                }else{
                    diskon[i] = 0;
                    total_harga[i] = harga[i] * porsi[i];
                }
            }
            else if(kode_menu[i] == 7){
                menu[i] = "Ice Code";
                harga[i] = 10000;
                if(porsi[i] > 5){
                    diskon[i] = 20; // 30%
                    total_harga[i] = (harga[i] - (harga[i] * (diskon[i]/100))) * porsi[i];
                }else{
                    diskon[i] = 0;
                    total_harga[i] = harga[i] * porsi[i];
                }
            }
            else if(kode_menu[i] == 8){
                menu[i] = "Tea Code";
                harga[i] = 10000;
                if(porsi[i] > 5){
                    diskon[i] = 20; // 30%
                    total_harga[i] = (harga[i] - (harga[i] * (diskon[i]/100))) * porsi[i];
                }else{
                    diskon[i] = 0;
                    total_harga[i] = harga[i] * porsi[i];
                }
            }
            else if(kode_menu[i] == 9){
                menu[i] = "Cocolate Code";
                harga[i] = 10000;
                if(porsi[i] > 5){
                    diskon[i] = 10; // 30%
                    total_harga[i] = (harga[i] - (harga[i] * (diskon[i]/100))) * porsi[i];
                }else{
                    diskon[i] = 0;
                    total_harga[i] = harga[i] * porsi[i];
                }
            }
            else if(kode_menu[i] == 10){
                menu[i] = "Aquit";
                harga[i] = 5000;
                if(porsi[i] > 10){
                    diskon[i] = 10; // 30%
                    total_harga[i] = (harga[i] - (harga[i] * (diskon[i]/100))) * porsi[i];
                }else{
                    diskon[i] = 0;
                    total_harga[i] = harga[i] * porsi[i];
                }
            }else{
                cout<<"#########################";
                cout<<"\nMENU BELUM TERSEDIA\n";
                // exit(EXIT_FAILURE);
                menu[i] = "KOSONG";
                harga[i] = 0;
                diskon[i] = 0;
                total_harga[i] = 0;
            }
        cout<<" ______________________________________"<<endl;
        cout<<"| Pesanan ke - "<<i-1<<endl;
        cout<<"| Menu\t\t\t: "<<menu[i]<<endl;
        cout<<"| Harga\t\t\t: Rp "<<harga[i]<<endl;
        cout<<"| Porsi\t\t\t: "<<porsi[i]<<endl;
        cout<<"| Diskon\t\t: "<<diskon[i]<<"%"<<endl;
        cout<<"| Total\t\t\t: Rp "<<total_harga[i]<<endl;
        cout<<" --------------------------------------"<<endl;
    }

    for(int i = 2; i <= no; i++){
        total_bayar = total_bayar + total_harga[i];
    }
    cout<<" ------------------------------------------"<<endl;
    cout<<"| Total Harga Pesanan\t: Rp "<<total_bayar<<endl;
    cout<<"| Nomor Meja\t\t: "<<kode_meja<<endl;
    cout<<"| Status\t\t: "<<status<<endl;
    cout<<" ------------------------------------------"<<endl;
    cout<<"| Bayar\t\t\t: ";
    cin>>bayar;
    cout<<"| "<<endl;
    if(bayar == total_bayar){
        kembalian = 0;
        status = "LUNAS";
    }else if(bayar > total_bayar){
        kembalian = (bayar - total_bayar);
        status = "LUNAS";
    }else if(bayar < total_bayar){
        kembalian = (total_bayar - bayar);
        status = "PEMBAYARAN MASIH KURANG";
    }
    cout<<"| Status\t\t: "<<status<<endl;
        if(status == "PEMBAYARAN MASIH KURANG"){
            cout<<"| Kurang\t\t: Rp "<<kembalian<<endl;
            cout<<"| Bayar\t\t\t: ";
            cin>>bayar;
                if(bayar == kembalian){
                    cout<<"| Status\t\t: LUNAS"<<endl;

                }
        }else{
            cout<<"| Kembalian\t\t: Rp "<<kembalian<<endl;
        }

    cout<<" ------------------------------------------"<<endl;
    
    
}

int main() {
    system("Color 0A");
    int select, no = 1;


    cout<<"_______________________________________"<<endl;
    cout<<"\t\tJARWONOTECH PANEL"<<endl;
    cout<<"---------------------------------------"<<endl;
    do{
        no++;
        temperatureApps();
        foodApps();
    }while(no > 0);
    // cout<<"Silakan pilih menu :"<<endl;
    // cout<<"1. Simple Temperature Detector [BETA]"<<endl;
    // cout<<"2. Pesan Makanan"<<endl;
    // cout<<"\n"<<endl;
    // cout<<"Masukan Pilihan : ";
    // cin>>select;

    // switch (select)
    // {
    // case 1:
    //     temperatureApps();
    //     break;
    // case 2:
    //     foodApps();
    //     break;
    
    // default:
    //     cout<<"Pilihan belum tersedia"<<endl;
    // }
    return 0;
}

