/*#include <iostream>
using namespace std;

class SinivelCap
{
public:
	void Take() const { cout << "콧물이 싹~ 납니다." << endl; } // 실질적으로 변경하진 않지만, 가능성도 배제시킴 => type 일치 과정.
};

class SneezeCap
{
public:
	void Take() const { cout << "재채기가 멎습니다." << endl; }
};

class SnuffleCap
{
public:
	void Take() const { cout << "코가 뻥 뚫립니다." << endl; }

};

class ColdPatient
{
public:
	void TakeSinivelCap(const SinivelCap& cap) const { cap.Take();} // TakeSinivalCap의 함수가 const 형태이면 호출되는 cap.Take()도 모두 상수 상태여야함, 변경 가능성이 존재하는 상태도 안됨.
	void TakeSneezeCap(const SneezeCap& cap) const { cap.Take(); }
	void TakeSnuffleCap(const SnuffleCap& cap) const { cap.Take(); }
};

int main(void)
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSinivelCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);
	return 0;
}*/