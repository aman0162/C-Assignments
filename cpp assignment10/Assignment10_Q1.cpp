#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
     ifstream fin1, fin2;
     ofstream fout;
     char ch, file_name1[20], file_name2[20], file_name3[30];
     cout<<"\n Enter First File Name with Extension '.txt'    :   ";
     gets(file_name1);
     
     cout<<"\n Enter Second File Name with Extension '.txt' ";
     cout<<"\n (which will Store the Contents of \n First File and Second File)                     :   ";
     gets(file_name2);
     
     fin1.open(file_name1);
    	fout.open(file_name2);
     try {
     	if(fin1==NULL )
     {
          throw string("File Not Found");
          
     }
	  }
	  catch(string err){
	  	cout << err ;
	  	exit(0);
	  }
     
     
     while(fin1.eof()==0)
     {
          fin1>>ch;
          fout<<ch;
     }
    
     cout<<"\n File content have been  copied into "<<file_name3<<" File Successfully...!!!";
     fin1.close();
     fout.close();
     return 0;
}
