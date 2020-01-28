#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int i=1;
	int total=0;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" <<i<< "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == '0'){
			break;
		}
		if(grade=='A'){
			count[0]++;
			total++;
		} // if grade is A
			
		else if(grade=='B'){
			count[1]++;
			total++;
		}else if(grade=='C'){
			count[2]++;
			total++;
		}else if(grade=='D'){
			count[3]++;
			total++;
		}else if(grade=='F'){
			count[4]++;
			total++;
		 // if grade is B
			//Do something
		//and so on ... for grade = C, D, F	
		}else{ // grade is wrong input
			cout<<"Wrong input. Please input again.\n";//Do something
			i--;
		} 

		i++;
	}while(true);
	
	
	cout << "In total"<<total<< " students.\n";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";
	cout << "C = " << count[2] <<",";
	cout << "D = " << count[3] <<",";
	cout << "F = " << count[4] <<",";	
	//	and so on ... for grade = C, D, F	
	
	
	return 0;
}
