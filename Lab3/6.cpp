#include<iostream> 
using namespace std;
class employee{
    string name[30];
    string adress[30]; 
    int phone[2];
    int salary[2];
    int tax[2];
    int Net_salary;
    int calculate(int a,int b){
        
        Net_salary = a - b;
        return Net_salary;
    };
    public:
    void input(){
    
    for (int i=1;i<=2;i++){
    cout<<"Enter the name:"<<endl;
    cin>>name[i];
    cout<<"Enter the adress:"<<endl;
    cin>>adress[i]; 
    cout<<"Enter the phone number :"<<endl;
    cin>>phone[i];
    cout<<"Enter the salary:"<<endl;
    cin>>salary[i];
    cout<<"Enter the tax amount employee pays:"<<endl;
    cin>>tax[i];
    } 
    }
    void output(){
    for(int i=1;i<=2;i++){
    cout<<"The name is = "<<name[i]<<endl;
    cout<<"\tThe adress is = "<<adress[i]<<endl;
    cout<<"\tThe phone number is = "<<phone[i]<<endl;
    cout<<"\tThe salary is = "<<salary[i]<<endl;
    cout<<"\tThe tax amount paid  is = "<<tax[i]<<endl;
    cout<<"\tThe net Salary of the employee is = "<<calculate(salary[i],tax[i]);

    cout<<endl;
    }
    }
};
int main(){

employee e;

e.input();
e.output();
}