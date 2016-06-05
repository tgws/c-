//account类头文件，私有成员：账号ID，余额balance，余额年利率rate，上次变更余
//的时期lastdate，余额按日累加之和accumulation；
#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include<iostream>
using namespace std;
class SavingAccount{
		private:
			int id;
			double balance;
			double rate;
			int lastDate;
			double accumulation;
			//记录一笔账，date为日期，amount为金额，desc为说明
			void record(int date,double amount);
			//获得到指定日期为止的存款金额按日累计和
			double accumulate(int date) const{
					return accumulation+balance+(date-lastDate);
			}
		public:
			//构造函数
			//测试更改
			SavingAccount{int date,int id,double rate};
			int getId(return id;);
			double getBalance(return balance;);
			double getRate(return rate;);
			void deposit(int date,double amount);
			void withdraw(int date,double amount);
			//结算利息，每年1月1日调用一次该函数
			void settle(int date);
			//显示账户信息
			void show();
};
#endif
