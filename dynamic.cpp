#include<iostream>

using namespace std;

 

class list{

 	int mJmlh, mHarga; //x jumlah item | y harga per item;	

	public : void data(int jmlh, int harga){

		mJmlh=jmlh;

		mHarga=harga;

	}

	

	public : void tampil(){

		cout<<"Biaya dari "<<mJmlh<<" item dengan harga "<<mHarga<<" adalah "<<mJmlh*mHarga<<endl;

	}

};

int main(){

	int n = 0;

	cout<<"Jumlah barang yang ingin dientry: "; cin>>n;

	list *ptr = new list[n]; 

	

	//input

	for(int i=0; i<n; i++){

		int jmlh, harga;

		cout<<"\nUntuk barang ke-"<<i+1<<endl;

		cout<<"Jumlah item = "; cin>>jmlh;

		cout<<"Harga per item = "; cin>>harga;

		

		ptr[i].data(jmlh,harga);

	}

	

	//pembacaan

	for(int i=0; i<n; i++){

		cout<<"\nData barang "<<i+1<<endl;

		ptr[i].tampil();

	}

	

	delete[] ptr;

}
