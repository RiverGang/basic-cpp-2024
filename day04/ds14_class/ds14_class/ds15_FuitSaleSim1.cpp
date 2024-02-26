/*# include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)
	{
		// ������(���: ��ü�� �����ϰ� �ʱ�ȭ�Ѵ�)
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}

	int SaleApples(int money) 
	{
		int num = money / APPLE_PRICE;	//�Ǹ� ����
		numOfApples -= num;				// ���� ��� ���� (���մ��Կ�����: -=. +=) numOfApples = numOfApples - num
		myMoney += money;				// �� ��
		return num;	
	}

	void ShowSalesResult()
	{
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl;

	}
}; // class�� ';' (���� �ݷ�)���� �ݾ������

class FruitBuyer
{
	int myMoney;
	int numOfApples;

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}

	void BuyApples(FruitSeller &refseller, int money)
	{
		numOfApples += refseller.SaleApples(money); // �ٸ� ��ü(FruitSeller)�� �ִ� �޼��� ���� FruitBuyer ��ü�� �޼��忡�� �̿� => �޽��� ����(Message Passing)
		myMoney -= money;
	}

	void ShowBuyResult()
	{
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl << endl;
	}
};



int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();
	return 0;

}*/
