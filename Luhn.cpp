#include <iostream>
#include <string>  // s(1,kartNo[i])
#include <sstream> //istringstream
using namespace std;



int main(){
	char kartNo[16];
	int cift=0,tek=0,deger=0;
	
	cout << "Lutfen Kart Numaranizi Giriniz :" ; cin>>kartNo;
		for(int i=0;i<16;i++){			
		
			string s(1,kartNo[i]);
			istringstream(s)>>deger;
			if(i%2==0){
				deger*=2;
				if(deger > 9){
					cift+= ((deger%10)+1);
				}
				else{
					cift+=deger;
				}
			}
			
			else if(i%2!=0){
				tek += deger;
			}
			
			deger = 0;	
				
		}
	
	if((tek+cift)%10==0){cout << "Gecerli Bir Kart Numarasi Girdiniz" << endl;}
	else{cout << "Gecersiz Bir Kart Numarasi Girdiniz."<<endl;}

		
	return 0;
}
