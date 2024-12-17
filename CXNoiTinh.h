#ifndef CXNOITINH_H
#define CXNOITINH_H
#include"Library.h"
#include"ChuyenXe.h"

class CXNoiTinh:public ChuyenXe
{
protected:
	int SoTuyen;
	int SoKm;
public:
	CXNoiTinh();
	CXNoiTinh(string MaSo, string HoTen, string SoXe, long long DoanhThu, int SoTuyen, int SoKm); 
	void SetSoTuyen(int SoTuyen);
	void SetSoKm(int SoKm);
	int GetSoTuyen();
	int GetSoKm();
	void XuatTT();
};

#endif // !CXNOITINH_H


