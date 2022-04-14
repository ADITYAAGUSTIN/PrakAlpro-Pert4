#include<iostream>
#include<fstream>
using namespace std;

class input{
	public:
		void cetak(){
			cout<<"uang saku andi perbulan = 100000"<<endl;
			cout<<"pengeluaran tiap bulan = ";cin>>pengeluaran;
      sisa=100000-pengeluaran;
			cout<<"sisa uang saku = "<<sisa<<endl;
		}

		void toFile(){
			tulis_data.open("output_input.txt");
			tulis_data << pengeluaran<<endl;
			tulis_data<<sisa;
		}
		
		private:
			ofstream tulis_data;
			int pengeluaran, sisa;
};