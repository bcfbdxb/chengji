#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
struct student{
    char num[6];//学生名字 
    char name[6];//学号 
    char xueyuan[6];//学院 
    float verage;//学生成绩的平均值 
}s1[5];//共有五位学生 
struct refree{
	char name[7];//裁判名字 
	int score[7];//裁判给出的成绩 
}s2[7];//人数7人 
int main(int argc,char*argv[]){
    ifstream in("/users/hp/Desktop/student.txt");
	ifstream a("/users/hp/Desktop/refree.txt");    
    ofstream out("/users/hp/Desktop/excle.txt",ios_base::out);
    int i,k,t=0,j,s=0,m=0;
    student temp;
    for(i=0;i<5;i++){
     	in>>s1[i].name>>s1[i].num>>s1[i].xueyuan; //读入学生的信息从student中 
		 //cout<<s1[i].name<<endl<<s1[i].num<<endl<<s1[i].xueyuan;    	
     	}
     	for(i=0;i<5;i++){
     		//cout<<s1[i].name;
     		//cout<<s1[i].num;
     		//cout<<s1[i].xueyuan;
		 }
	for(i=0;i<7;i++){
		a>>s2[i].name;//读入裁判的名字从文件refree中 
		//cout<<s2[i].name;
	}
	for(i=0;i<5;i++){
		for(k=0;k<7;k++){
			a>>s2[i].score[k];//读入裁判给出的成绩从文件refree中 
			//cout<<s2[i].score[k]; 
		}
		//cout<<endl;
		for(j=0;j<7-1;j++){//冒泡排序排列学生成绩 
		    for(k=0;k<7-1-j;k++){
		  if(s2[i].score[k]>s2[i].score[k+1]){
		  	 t=s2[i].score[k];
		  	s2[i].score[k]=s2[i].score[k+1];
		  	s2[i].score[k+1]=t;	
		  }
		}
	}
	for(k=1;k<6;k++){
		s+=s2[i].score[k];//将排好的成绩去掉最大最小然后求和 
	}
		//cout<<s;
	s1[i].verage=s*1.0/5;//求每位学生成绩的平均值 
	//cout<<s1[i].verage;
	s=0;
		}
		for(i=0;i<5-1;i++){//结构体数组排序（根据学生平均成绩）冒泡排序 
			for(j=0;j-5-i;j++){
				if(s1[i].verage>s1[i+1].verage){
				temp=s1[i];
				s1[i]=s1[i+1];
				s1[i+1]=temp;
				}
			}
		}
		
		if(out.is_open()){//将学生信息读入文件excle读入参与评定的裁判姓名 
			for(i=0;i<5;i++){
			out<<"name: "<<s1[i].name<<"   ";
		    out<<"number: "<<s1[i].num<<"   ";
			out<<"academy: "<<s1[i].xueyuan<<"      ";
			out<<"verage: "<<s1[i].verage<<"   ";
		out<<endl;
		}
		out<<"refree: ";
		for(j=0;j<7;j++){
			out<<s2[j].name<<"      ";
		}
		}	
		out.close();
		return 0;
	}
	
    
    
