//============================================================================
// Name        : array.cpp
// Author      : Machine Minds /Mohamed Gasser
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
using namespace std;






char arr[9][6]={"one","two","three","four","five","six","seven","eight","nine"};

string array_test="test";


int main() {

	///if,switch,? ,for ,
	///while,do while
	char new_frame[50];
	unsigned char test[50] = {0XFF,0X00,0X02,0X3,0x7A,0X7A,0x7A};
	if(1)
	{
		printf("1 done");
		printf("2 done");
	}
//	  printf("2 done");
	else if(0)
	 {

    }
	else {
		printf("else");
	}
		//Mg13245678910MG
		int array[5]={1,2};
	//array[9]=8;// 8*4 = 32
	cout<<&array << " "<<(array+8)<<" " ;
	*(array+8)=90;
	cout<<array[8];
	//*(array+8)=90;
	// 0     3     4    5   6
	// 1     2     3
	// 7A    7A    33
	// BB DD BB DD 33

	int frame[10]={0X00,0X02,0X3,0x7A,0X7A,0x7A};
	int frame_dec[10]={0};
	for(int i=0,j=0; i<7;i++)
	{
		if(frame[i]==0x7A)
		{
			frame_dec[j]=0XBB;
			frame_dec[j+1]=0xDD;
			frame_dec[j+2]=0xAA;
			j+=3;
		}
		else
		{  frame_dec[j]=frame[i];
		j++;
		}

	}
	 string str="test ";
     int s=0;
	 for(int i=str.size()+1;i>=0; i--)
	    {
	  //  cout<<" "<<str[str.size()]<<endl;
	   // cout<<str[i];
		 array_test[s]=str[i];
	    cout<<array_test[s];
	    s++;

	  }
	 std::reverse(str.begin(), str.end());
	 cout<<str;
	//  cout<<array;



	//	cout<<"&y="<<&y<<"arr="<< **&*&(arr)<<" "<<*&*&arr[0]<<endl<<arr+1<<" "<<arr+2<<" "<<arr+3<<'\n';
	//	cout<<"char_arr="<<char_arr<<endl<<char_arr+1<<" "<<char_arr+2<<" "<<char_arr+3;
	return 0;
}
