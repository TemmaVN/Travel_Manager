#include "CXNoiTinh.h"

CXNoiTinh::CXNoiTinh()
{
	this->SoTuyen = 0;
	this->SoKm = 0;
}

CXNoiTinh::CXNoiTinh(string MaSo, string HoTen, string SoXe, long long DoanhThu, int SoTuyen, int SoKm) :ChuyenXe(MaSo, HoTen, SoXe, DoanhThu)
{
	this->SoTuyen = SoTuyen;
	this->SoKm = SoKm;
}

void CXNoiTinh::SetSoTuyen(int SoTuyen)
{
	this->SoTuyen = SoTuyen;
}

void CXNoiTinh::SetSoKm(int SoKm)
{
	this->SoKm = SoKm;
}

int CXNoiTinh::GetSoTuyen()
{
	return this->SoTuyen;
}

int CXNoiTinh::GetSoKm()
{
	return this->SoKm;
}

void CXNoiTinh::XuatTT()
{
	cout << "Cac thong tin cua chuyen xe la : " << endl;
	XuatTTCXe();
	cout << "Gom co " << SoTuyen << " tuyen " << endl;
	cout << "Da di " << SoKm << " Km" << endl;
}

