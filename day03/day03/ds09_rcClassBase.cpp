/* # include <iostream>
# include <cstring>
using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20, MAX_SPD = 200, FUEL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

struct Car 
{
private: // 클래스 안에서만 접근가능하도록 제한
	// 주로 멤버변수, 필드, 속성
	char gamerID[CAR_CONST::ID_LEN]; //char gameID[20], 대괄호 안 = 방의 갯수
	int fuelGauge;
	int curSpeed;


public: // 외부에서도 접근 가능
	// 멤버함수, 메서드, 기능
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};


void Car::InitMembers(const char * ID, int fuel) // 필드 초기화 담당
{
	strcpy(gamerID, ID); // gamerID라는 '변수'에 포인터 ID가 가르키는 값을 저장하라
	fuelGauge = fuel;
	curSpeed = 0;
}

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
	Car run99;							// class car 타입의 이름이 run99인 객체 생성
	run99.InitMembers("run99", 100);	// run99 객체의 InitMembers() 메서드 호출
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;
}
*/