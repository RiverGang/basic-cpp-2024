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
		// 생성자(기능: 객체를 생성하고 초기화한다)
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}

	int SaleApples(int money) 
	{
		int num = money / APPLE_PRICE;	//판매 개수
		numOfApples -= num;				// 남은 사과 개수 (복합대입연산자: -=. +=) numOfApples = numOfApples - num
		myMoney += money;				// 번 돈
		return num;	
	}

	void ShowSalesResult()
	{
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl;

	}
}; // class도 ';' (세미 콜론)으로 닫아줘야함

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
		numOfApples += refseller.SaleApples(money); // 다른 객체(FruitSeller)에 있는 메서드 값을 FruitBuyer 객체의 메서드에서 이용 => 메시지 전달(Message Passing)
		myMoney -= money;
	}

	void ShowBuyResult()
	{
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl << endl;
	}
};



int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;

}*/
