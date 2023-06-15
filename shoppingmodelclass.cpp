#include<iostream>
using namespace std;
//=========
class ITM
{
int icd[30];
float ics[30];
int count;
public:
void cnt() {count=0;}
void additem();
void sum();
void showitems();
void remove();

};
//===========


void ITM :: additem(){
	cout<<"Enter item code:";
	cin>>icd[count];
	cout<<endl<<"Enter item price:";
	cin>>ics[count];
	count++;
}
//============
void ITM :: sum(){
	float sum=0;
	int i;
	for(i=0;i<count;i++){
		sum=sum+ics[i];
	}
cout<<"Total amount is:"<<sum<<endl;	
}
//==============
void ITM :: showitems(){
	cout<<"\ncode  price\n";
	int i;
	for(i=0;i<count;i++){
		cout<<"\n"<<icd[i];
		cout<<"  "<<ics[i];
	}
	cout<<endl;
	cout<<"______"<<count<<"______";
}
//=======
void ITM :: remove(){
	int a;
	cout<<"enter item code:";
	cin>>a;
	for(int i=0;i<count;i++){
		if(icd[i]==a){
		break;
		
	}
	if (i < count)
{
    // reduce size of array and move all
    // elements on space ahead
    count = count - 1;
    for (int j=i; j<count; j++)
        ics[j] = ics[j-1];
}

}}
//=============
int main()
{
	ITM order;
	
	cout<<"size of object is"<<sizeof(order)<<endl;

	order.cnt();
	int x;
	
	do
	{
		cout<<"\nHere are options of operations"<<endl<<"1. Add item"<<endl<<"2. Remove item"<<endl<<"3. Total amount"<<endl<<"4. Display all items"<<endl<<"5. size check"<<endl<<"6.quit";
		cout<<"\n Enter your option:";
		cin>>x;
		switch(x)
		{
		    case 1: order.additem();break;	
			case 2: order.remove();break;
			case 3: order.sum();break;
			case 4: order.showitems();break;
		
			case 5: break;
			
			default: cout<<"invalid input";
			
	
			
		}
		
		
		cout<<"==================================================";
	} while (x != 5);
	
return 0;	
	
	
}








