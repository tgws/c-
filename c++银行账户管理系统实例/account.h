//account��ͷ�ļ���˽�г�Ա���˺�ID�����balance�����������rate���ϴα����
//��ʱ��lastdate�������ۼ�֮��accumulation��
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
			//��¼һ���ˣ�dateΪ���ڣ�amountΪ��descΪ˵��
			void record(int date,double amount);
			//��õ�ָ������Ϊֹ�Ĵ������ۼƺ�
			double accumulate(int date) const{
					return accumulation+balance+(date-lastDate);
			}
		public:
			//���캯��
			//���Ը���
			SavingAccount{int date,int id,double rate};
			int getId(return id;);
			double getBalance(return balance;);
			double getRate(return rate;);
			void deposit(int date,double amount);
			void withdraw(int date,double amount);
			//������Ϣ��ÿ��1��1�յ���һ�θú���
			void settle(int date);
			//��ʾ�˻���Ϣ
			void show();
};
#endif
