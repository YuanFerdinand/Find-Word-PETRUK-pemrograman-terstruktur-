#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
  char tabel[15][15]={{'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
		{'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
		{'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
		{'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
          	{'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
		{'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
		{'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
		{'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
		{'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
		{'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'},
		{'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
		{'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'},
		{'m','o','s','g','z','c','z','d','t','d','b','o','o','t','o'},
		{'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'},
		{'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'}};
	int h,i,j,jml,kali,jumlah,uji,coba;
	char kata[15];
	//=====print tabel yang diatas
	for(i=0;i<15;i++){
		cout<<"| ";
		for(j=0;j<15;j++){
			cout<<tabel[i][j]<<" ";
		}
		cout<<" |";
		cout<<endl;
	}
	cout<<endl;
	//====masukkan kata disini(belum bisa masukkin kata sampai n kali)
	cout<<"Masukkan katanya :";
	cin>>kata;
	jumlah=strlen(kata);
	
	for(i=0;i<15;i++){
		for(j=0;j<15;j++){
			if(kata[0]==tabel[i][j]){
				//====diagonal kanan atas
				for(h=0;h<jumlah;h++){
					if(kata[h]==tabel[i-h][j+h]){
						uji=h;
					}
					else{
						break;
					}
				}
				if(uji==jumlah-1){
					coba+=1;
				}
				else{
					coba+=0;
				}
				uji=0;
				//====diagonal kanan bawah
				for(h=0;h<jumlah;h++){
					if(kata[h]==tabel[i+h][j+h]){
						uji=h;
					}
					else{
						break;
					}
				}
				if(uji==jumlah-1){
					coba+=1;
				}
				else{
					coba+=0;
				}
				uji=0;
			}
		}
	}
	//====pengujiannya
	if(coba!=0){
	cout<<"ADA"<<endl;
	}	
	else{
	cout<<"TIDAK ADA"<<endl;
	}

	
}
