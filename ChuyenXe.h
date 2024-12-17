#ifndef CHUYENXE_H
#define CHUYENXE_H
#include"Library.h"

class ChuyenXe
{
protected:
	string MaSo;
	string HoTen;
	string SoXe;
	long long DoanhThu;
public:
	ChuyenXe();
	ChuyenXe(string MaSo, string HoTen, string SoXe, long long DoanhThu);
	void SetMaSo(string MaSo);
	void SetHoTen(string HoTen);
	void SetSoXe(string SoXe);
	void SetDoanhThu(long long DoanhThu);
	string GetMaSo();
	string GetHoTen();
	string GetSoXe();
	long long GetDoanhThu();
	void XuatTTCXe();
};

#endif // !CHUYENXE_H


