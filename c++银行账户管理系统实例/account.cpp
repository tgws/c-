//savingAccount类相关成员的实现
//SavingAccount{int date,int id,double rate};
SavingAccount::SavingAccount(int date,int id,double rate)
	:id(id),balance(0),rate(rate),lastDate(date),accumulation(0){
	cout<<date<<"\t#"<<id<<" is created"<<endl;
}
//void record(int date,double amount);
void SavingAccount::record(int date,double amount){
	accumulation=accumulate(date);
	lastDate=date;
	amount=floor(amount*100+0.5)/100;
	balance+=amount;
	cout<<date<<"\t#"<<id<<"\t"<<amount<<"\t"<<balance<<endl;
}
//void deposit(int date,double amount);
void SavingAccount::deposit(int date,double amount){
	record(date,amount);
}
//void withdraw(int date,double amount);
void SavingAccount::withdraw(int date,double amount){
	if(amount>getBalance())
		cout<<"Error:not enough money"<<endl;
	else
		record(date,-amount);
}
//void settle(int date);
void SavingAccount::settle(int date){
	cout<<"#"<<id<<"\tBalance: "<<balance;
}

