#ifndef CTTHUEXE_H
#define CTTHUEXE_H
#include"Library.h"
#include"CXNoiTinh.h"
#include"CXNgoaiTinh.h"

class CTThueXe
{
protected:
	vector<CXNoiTinh> DSNoiT;
	vector<CXNgoaiTinh> DSNgoaiT;
public:
	void ThemCX(CXNoiTinh cx);
	void ThemCX(CXNgoaiTinh cx);
	void InDSCX();
	long long TongDT();
};

#endif // !CTTHUEXE_H



