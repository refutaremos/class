#include<iostream>
using namespace std;

int main(){
	float n1=0,n2=0,n3=0,nFinal=0,media=0;
	cout<<"\nDigite as 3 notas:"<<endl;
	cin>>n1>>n2>>n3;
	
	media=(n1+n2+n3)/3;
	
	if(media>6){
		cout<<"\nAprovado!"<<endl;
	}else{
		cout<<"\nRecuperação!"<<endl;
		cout<<"\nNota Final?"<<endl;
		cin>>nFinal;
		if(nFinal>5){
			cout<<"\nAprovado na Recuperação!"<<endl;
		}else{
			cout<<"\nReprovado!"<<endl;
		}
	}
	
	return 0;
}