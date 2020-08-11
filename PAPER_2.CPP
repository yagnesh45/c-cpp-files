#include<iostream.h>
#include<conio.h>
class ArraySort{
	int *ar,size;
	public:
	ArraySort(int size){
	ar=new int[size];
	this->size=size;
	cout<<"Enter "<<size<<" elemnts:";
	cin>>ar;
	}
	void display(){
		cout<<"Sorted Array:"<<ar;
	}
	void sort(){
		int temp;
		for(int i=0;i<size;i++){
			for(int j=0;j<size-i-1;j++){
				if(ar[j]>ar[j+1]){
					temp=ar[j];
					ar[j]=ar[j+1]
					ar[j+1]=temp;
				}
			}
		}
	}

	~ArraySort(){delete[] ar;}
};
void main(){
	ArraySort a(5);
	a.sort();
	a.display();
	getch();
}