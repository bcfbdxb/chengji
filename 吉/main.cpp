# include <iostream>
# include<fstream>
# include<string>
using namespace std;
struct student{
    char num[3];
    char name[3];
    char xueyuan[3];
};
struct referee{
    char name[7];
    char score[7];
}s1;
int main(int argc, const char * argv[]) {
   
    ifstream in( "/users/hp/Desktop/a.txt");
    //ifstream cin("/users/hp/Desktop/b.txt");
   // ofstream out("/users/hp/Desktop/c.txt",ios_base::out);
    int i,k,j,a,b;
    int line;
    struct student s[3];
    for(i=0;i<3;i++){
    gets(s[i].name);
    gets(s[i].num);
    gets(s[i].xueyuan);
        }

   // for(k=0;k<7;k++){
       // gets(s1.name);
       // gets(s1.score);
    //}
  
if(in.is_open()){
	char student[1000];
   in.getline(student,1000);
	cout<<student;
	cout<<endl;
}
in.close();
//if(cin.is_open()){
	
//cin>>b;
//}
//cin.close();
//if(out.is_open()){
	//for(j=0;j<=1000;j++){
		//out<<student[j];
	//}
//	out<<b;
//}
//out.close();
    return 0;
}
