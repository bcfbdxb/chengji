#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
struct student{
    char num[6]; 
    char name[6];
    char xueyuan[6];
    float verage;
}s1[5];
struct refree{
	char name;
	int score[7];
}s2[7];
int main(int argc,char*argv[]){
    ifstream in("/users/hp/Desktop/cin.txt");
	ifstream a("/users/hp/Desktop/in.txt");    
    ofstream out("/users/hp/Desktop/a.txt",ios_base::out);
    int i,k,t=0,j,s=0,m=0;
    student temp;
    for(i=0;i<5;i++){
     	in>>s1[i].name>>s1[i].num>>s1[i].xueyuan; 
		 //cout<<s1[i].name<<endl<<s1[i].num<<endl<<s1[i].xueyuan;    	
     	}
     	for(i=0;i<5;i++){
     		//cout<<s1[i].name;
     		//cout<<s1[i].num;
     		//cout<<s1[i].xueyuan;
		 }
	for(i=0;i<7;i++){
		a>>s2[i].name;
		//cout<<s2[i].name;
	}
	for(i=0;i<5;i++){
		for(k=0;k<7;k++){
			a>>s2[i].score[k];
			//cout<<s2[i].score[k]; 
		}
		cout<<endl;
		for(j=0;j<7-1;j++){
		    for(k=0;k<7-1-j;k++){
		  if(s2[i].score[k]>s2[i].score[k+1]){
		  	 t=s2[i].score[k];
		  	s2[i].score[k]=s2[i].score[k+1];
		  	s2[i].score[k+1]=t;	
		  }
		}
	}
	for(k=1;k<6;k++){
		s+=s2[i].score[k];
	}
		//cout<<s;
	s1[i].verage=s*1.0/5;
	//cout<<s1[i].verage;
	s=0;
		}
		for(i=0;i<5-1;i++){
			for(j=0;j-5-i;j++){
				if(s1[i].verage>s1[i+1].verage){
				temp=s1[i];
				s1[i]=s1[i+1];
				s1[i+1]=temp;
				}
			}
		}
		
		if(out.is_open()){
			for(i=0;i<5;i++){
			out<<"name: "<<s1[i].name<<"   ";
		    out<<"number: "<<s1[i].num<<"   ";
			out<<"academy: "<<s1[i].xueyuan<<"      ";
			out<<"verage: "<<s1[i].verage<<"   ";
		out<<endl;
		}
		out<<"refree: ";
		for(j=0;j<7;j++){
			out<<s2[j].name<<" ";
		}
		}	
		out.close();
		return 0;
	}
	
    
    
