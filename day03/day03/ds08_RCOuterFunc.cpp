/*# include <iostream>
using namespace std;

namespace CAR_CONST
{
	enum // 열거형
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car // 멤버 함수의 정의를 Class 바깥으로 정리 => 선언과 정의 분리
{
	//====멤버 변수====//
	char gamerID[CAR_CONST::ID_LEN]; //char gameID[20], 대괄호 안 = 방의 갯수
	int fuelGauge;
	int curSpeed;

	//====멤버 함수====//
	void ShowCarState();
	void Accel();
	void Break();
};

void Car::ShowCarState() // Car:: -> 클래스명(Car)와 범위연산자(::)를 함수명 앞에 붙여 Class에 소속된 멤버함수임을 지정
{
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
};

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;


	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::FUEL_STEP;
		return;
	}

	curSpeed += CAR_CONST::ACC_STEP;
};

void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
};


int main(void)
{

	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();
	sped77.Accel();
	sped77.ShowCarState();
	return 0;
}*/