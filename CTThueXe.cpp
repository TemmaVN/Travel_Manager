#include "CTThueXe.h"

void CTThueXe::ThemCX(CXNoiTinh cx)
{
	this->DSNoiT.push_back(cx);
}

void CTThueXe::ThemCX(CXNgoaiTinh cx)
{
	this->DSNgoaiT.push_back(cx);
}

void CTThueXe::InDSCX()
{
	cout << "Thong tin cac chuyen xe la : " << endl;
	for (CXNoiTinh x : DSNoiT)
	{
		x.XuatTT();
	}
	for (CXNgoaiTinh x : DSNgoaiT)
	{
		x.XuatTT();
	}
}

long long CTThueXe::TongDT()
{
	long long kq = 0;
	for (CXNoiTinh x : DSNoiT)
	{
		kq += x.GetDoanhThu();
	}
	for (CXNgoaiTinh x : DSNgoaiT)
	{
		kq += x.GetDoanhThu();
	}
	return kq;
}
