//
//  main.cpp
//  chengji
//
//  Created by s20181106118 on 2019/6/20.
//  Copyright © 2019 s20181106118. All rights reserved.
//

#include <iostream>
# include<fstream>
# include<string>
using namespace std;
struct student{
    char num[11];
    char name[11];
    char xueyuan[11];
};
struct referee{
    char name[7];
    float  score[7];
}s1;
int main(int argc, const char * argv[]) {
    ifstream in( "/users/s20181106118/Desktop/a.txt/",ios_base::out);
    ifstream cin("/users/s20181106118/Desktop/b.txt/",ios_base::out);
    ofstream out("/users/s20181106118/Desktop/c.txt/",ios_base::out);
    int i,k,j;
    struct student s[11];
    for(i=0;i<3;i++){
    gets(s[i].name);
    gets(s[i].num);
    gets(s[i].xueyuan);
        }
    
    for(k=0;k<7;k++){
        gets(s1.name);
       
    }
   
    
    return 0;
}

