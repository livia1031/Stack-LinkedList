#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *depan = NULL;

bool isempty(){
	if (depan == NULL){
		return 1;
	}
	else {
		return 0;
	}
}

void tambah (float isi){
	node *baru = new node;
	baru->data = isi;
	baru->next = NULL;
	if(isempty()){
		depan = baru;
		depan->next = NULL;
	}else{
		baru -> next = depan;
		depan = baru;
	}}

void kurang (){
	node *hilangkan = new node;
	if(isempty()){
		cout << "Tidak ada stack";
	}else{
		hilangkan = depan;
		depan = depan->next;
		delete hilangkan;
	}
}

void cetak (){
	node *bantu = depan;
	if (isempty () == 0){
		while (bantu != NULL){
		cout<< bantu ->data <<" ";
		bantu = bantu ->next;
		}
	}
	else{
		cout<<"Tidak ada stack \n";

	}
}

int saya();

int main()
{
	int pilih, tanda=1, nilai, menu;
	menu = saya();

 while( tanda == 1){
cout<<endl<<"Pilihan Menu"<<endl;
cout<<"1. Push \n";
cout<<"2. Pop \n";
cout<<"3. print stack \n";
cout<<"4. exit \n";
cout<<"===================\n";
   
cout<<"Pilih : ";cin>>pilih;
cout<<endl;
	switch (pilih)
	{
	case 1: cout<<"Masukan Nilai : ";
			cin>>nilai;
			tambah(nilai);
			break;
			
	case 2: kurang();
			break;
			
	case 3: cetak();
			break;
			
	case 4: tanda = 0;
			cout << endl << endl;
			break;
			
	default:
			cout <<"\t\nPilihan tidak ada";
			cin.get();
			break;
         
 	}
 }
    return 0;
}
int saya()
{
	cout<<"Livia Ayu Historia Hernani 1817051031";
}
