#include <iostream>

using namespace std;

    int gaji_perjam(int jam_perminggu, int jam_kerja){
		int gaji_perjam =15000;
    	int total_gaji;
    
    	total_gaji = gaji_perjam * jam_kerja;
    
    	return total_gaji;
	}
	
	int gaji_lembur(int jam_perminggu, int jam_kerja){
		int gaji_perjam = 15000;
		int jam_lembur,gaji_lembur;
		int gaji, total_gaji;
		
		jam_lembur = jam_kerja - jam_perminggu;
		gaji_lembur = 1.5*gaji_perjam*jam_lembur;
		
		gaji = gaji_perjam*jam_perminggu;
		
		total_gaji = gaji_lembur+gaji;
		
		return total_gaji;
	}

void display(string nama, int total_gaji, int pengeluaran){
	if(total_gaji>pengeluaran){
		cout << nama << "Bisa Menabung"<<total_gaji-pengeluaran;
	}
	else if(total_gaji== pengeluaran){
		cout<<nama<<"Maaf anda tidak bisa menabung";
	}
	else{
			cout<<nama<<"Maaf and harus mencari tambahan";
	}
}
main(){
    system ("cls");
    cout<<"\t\t**Daftar Gaji Minggu Karyawan**" << endl;
    cout<<"\n==================================" << endl;
    cout<< endl;
    
    int jam_perminggu = 40;
    int jam_kerja,pengeluaran;
    string nama;
    
    cout<<"Nama Karyawan : ";
    getline(cin, nama);
    
    cout<<"Pengeluaran : ";
    cin>>pengeluaran;
    
    cout<<"Waktu Bekerja : ";
    cin >> jam_kerja;
    
    if(jam_kerja > jam_perminggu){
    	cout<<endl<<nama<<"Bekerja Selama"<<jam_kerja<<"Jam"<<endl;
    	cout<<"Total gaji : "<<gaji_lembur(jam_perminggu,jam_kerja)<<endl;
    	display(nama, gaji_lembur(jam_perminggu,jam_kerja),pengeluaran);
	}
	else{
		cout<<endl<<nama<<"Bekerja Selama"<<jam_kerja<<"Jam"<<endl;
    	cout<<"Total gaji : "<<gaji_perjam(jam_perminggu,jam_kerja)<<endl;
    	display(nama, gaji_lembur(jam_perminggu,jam_kerja),pengeluaran);
	}
}
