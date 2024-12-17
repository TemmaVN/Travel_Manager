#include "CXNgoaiTinh.h"

CXNgoaiTinh::CXNgoaiTinh()
{
	this->NoiDen = "";
	this->SoNgay = 0;
}

CXNgoaiTinh::CXNgoaiTinh(string MaSo, string HoTen, string SoXe, long long DoanhThu, string NoiDen, int SoNgay):ChuyenXe(MaSo, HoTen, SoXe, DoanhThu)
{
	this->NoiDen = NoiDen;
	this->SoNgay = SoNgay;
}

void CXNgoaiTinh::SetNoiDen(string NoiDen)
{
	this->NoiDen = NoiDen;
}

void CXNgoaiTinh::SetSoNgay(int SoNgay)
{
	this->SoNgay = SoNgay;
}

string CXNgoaiTinh::GetNoiDen()
{
	return this->NoiDen;
}

int CXNgoaiTinh::GetSoNgay()
{
	return SoNgay;
}

void CXNgoaiTinh::XuatTT()
{
	cout << "Cac thong tin cua chuyen xe ngoai tinh la : " << endl;
	XuatTTCXe();
	cout << "Noi den la : " << NoiDen << endl;
	cout << "So ngay co the di duoc : " << SoNgay << endl;
}
