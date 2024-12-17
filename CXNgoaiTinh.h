#ifndef CXNGOAITINH_H
#define CXNGOAITINH_H
#include"ChuyenXe.h"

class CXNgoaiTinh:public ChuyenXe
{
protected:
	string NoiDen;
	int SoNgay;
public:
	CXNgoaiTinh();
	CXNgoaiTinh(string MaSo, string HoTen, string SoXe, long long DoanhThu,string NoiDen,int SoNgay);
	void SetNoiDen(string NoiDen);
	void SetSoNgay(int SoNgay);
	string GetNoiDen();
	int GetSoNgay();
	void XuatTT();
};

#endif // !CXNGOAITINH_H



