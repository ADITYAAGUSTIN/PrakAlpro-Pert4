#include <iostream>
#include <fstream> 
using namespace std;

class Proses{
	public :
      void getData(){
			ambil_data.open("output_input.txt");
			bool a = true;
			while(!ambil_data.eof()){
				if (a){
					ambil_data >> pengeluaran[0];
				}
				else if (a){
					ambil_data >> sisa[0];
				}
				else if (a){
					ambil_data >> pengeluaran[1];
				}
				else if (a){
					ambil_data >> sisa[1];
				}
				else if (a){
					ambil_data >> pengeluaran[2];
				}
				else if (a){
					ambil_data >> sisa[2];
				}
				else if (a){
					ambil_data >> pengeluaran[3];
				}
				else if (a){
					ambil_data >> sisa[3];
				}
				else if (a){
					ambil_data >> pengeluaran[4];
				}
				else if (a){
					ambil_data >> sisa[4];
				}
				else if (a){
					ambil_data >> pengeluaran[5];
				}
				else if (a){
					ambil_data >> sisa[5];
				}
				else if (a){
					ambil_data >> pengeluaran[6];
				}
				else if (a){
					ambil_data >> sisa[6];
				}
				else if (a){
					ambil_data >> pengeluaran[7];
				}
				else if (a){
					ambil_data >> sisa[7];
				}
				else if (a){
					ambil_data >> pengeluaran[8];
				}
				else if (a){
					ambil_data >> sisa[8];
				}
				else if (a){
					ambil_data >> pengeluaran[9];
				}
				else if (a){
					ambil_data >> sisa[9];
				}
				else if (a){
					ambil_data >> pengeluaran[10];
				}
				else if (a){
					ambil_data >> sisa[10];
				}
				else if (a){
					ambil_data >> pengeluaran[11];
				}
				else if (a){
					ambil_data >> sisa[11];
				}
			}
			ambil_data.close();
		}

		void toFile(){
			for (int i=0; i<=11; i++){
				jmlhluar+=pengeluaran[i];
				jmlhsisa+=sisa[i];
			}
			
			tulis_data.open("output_proses.txt");
			for (int i=0; i<=11; i++){
				tulis_data << pengeluaran[i] << endl;
				tulis_data << sisa[i] << endl;
			}
			tulis_data.close();
			
			tulis_data.open("output_proses2.txt");
			tulis_data << jmlhluar << endl;
			tulis_data << jmlhsisa;
			tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
		long pengeluaran[100];
		long sisa[100];
		double jmlhluar;
		double jmlhsisa;
		
};