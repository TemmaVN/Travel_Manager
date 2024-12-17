#include "ChuyenXe.h"

ChuyenXe::ChuyenXe()
{
	this->MaSo = "";
	this->HoTen = "";
	this->SoXe = "";
	this->DoanhThu = 0;
}

ChuyenXe::ChuyenXe(string MaSo, string HoTen, string SoXe, long long DoanhThu)
{
	this->MaSo = MaSo;
	this->HoTen = HoTen;
	this->SoXe = SoXe;
	this->DoanhThu = DoanhThu;
}

void ChuyenXe::SetHoTen(string HoTen)
{
	this->HoTen = HoTen;
}

void ChuyenXe::SetMaSo(string MaSo)
{
	this->MaSo = MaSo;
}

void ChuyenXe::SetSoXe(string SoXe)
{
	this->SoXe = SoXe;
}

void ChuyenXe::SetDoanhThu(long long DoanhThu)
{
	this->DoanhThu = DoanhThu;
}

string ChuyenXe::GetHoTen()
{
	return this->HoTen;
}

string ChuyenXe::GetMaSo()
{
	return this->MaSo;
}

string ChuyenXe::GetSoXe()
{
	return this->SoXe;
}

long long ChuyenXe::GetDoanhThu()
{
	return this->DoanhThu;
}

void ChuyenXe::XuatTTCXe()
{
	cout << "Cac thong tin cua chuyen xe la : " << endl;
	cout << "Ho ten lai xe la : " << HoTen << endl;
	cout << "Ma so la : " << MaSo << endl;
	cout << "So xe la : " << SoXe << endl;
	cout << "Doanh thu la : " << DoanhThu << endl;
}
