#pragma once
#ifndef TXT_H_
#define TXT_H_
#include<vector>
#include<d3dx9.h>
#include<fstream>
#include<string>
#include<string.h>
#include<sstream>
#include<map>
#include<vector>
#include"MyTexture.h"

using namespace std;

enum TypeSprite {
	SBEEFLAPING,
	SBEEFLAPINGANDFLYING,
	SBEESTAND,

	SBLASTHORNETOPENINGVENOM,
	SBLASTHORNETPREPAREOPENVENOM,
	SBLASTHORNETREDHANDS,
	SBLASTHORNETREDKNEE,

	SHEADGUNNERCUSTOMERSHOOTABOVE,
	SHEADGUNNERCUSTOMERSHOOTBELOW,

	SHELITSTAND,

	SMEGAMANCLIMB,
	SMEGAMANDASH,
	SMEGAMANJUMP,
	SMEGAMANRUN,
	SMEGAMANRUNSHOOT,
	SMEGAMANSTAND,

	SNOTORBANGERJUMP,
	SNOTOBANGERSHOOT90,

	SSHURIKEINROTATELEFT,
	SSHURIKEINROTATERIGHT,
	SSHURIKEINRAPPEAR,

	SCARRYARMSTRAIGHT,
	SCARRYARMBREAK,
};

enum TypeTexture {
	TBEE,

	TBLASTHORNETOPENINGVENOM,
	TBLASTHORNETPREPAREOPENVENOM,
	TBLASTHORNETREDHANDS,
	TBLASTHORNETREDKNEE,

	THEADGUNNERCUSTOMER,

	THELIT,

	TMEGAMANCLIMB,
	TMEGAMANDASH,
	TMEGAMANJUMP,
	TMEGAMANRUN,
	TMEGAMANRUNSHOOT,
	TMEGAMANSTAND,

	TNOTORBANGER,
	TSHURIKEINROTATERIGHT,
	TSHURIKEINROTATELEFT,
	TSHURIKEINAPPEAR,

	TCARRYARM,
};


class TXT
{
private:
	static TXT* instance;

	map<TypeSprite, vector<RECT*>> listSourceRect;
	map<TypeTexture, MyTexture*> listTexture;

public:
	TXT();
	~TXT();

	static TXT* Instance();

	vector<RECT*> LoadListSourceRect(char* path);
	void LoadAllSourceRect();
	void LoadAllTexture();

	vector<RECT*> GetListSourceRect(TypeSprite type_sprite);
	MyTexture* GetTexture(TypeTexture type_texture);
};


#endif // !TXT_H_
