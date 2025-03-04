
#ifndef __ZIP_RESOURCE_H__
#define __ZIP_RESOURCE_H__

#include <string>
#include <list>
using namespace std;

class XZIP_FileHeader 
{
	char* fileName;
	unsigned dataOffset;
	unsigned dataSize;

	int extDataSize;
	char* extData;

public:
	void SetName(const char* p);

	unsigned size() const { return dataSize; }
	unsigned offset() const { return dataOffset; }
	char* data() const { return extData; }
	const char* name() const { return fileName; }

	void save(XStream& fh);

	XZIP_FileHeader();
	void set(const char* fname,unsigned offs,unsigned size,void* ext_ptr,int ext_sz);
	void load(XStream& fh);
	~XZIP_FileHeader();
};

// XZIP_Resource flags
const int XZIP_ENABLE_EXTERNAL_FILES	= 0x01;
const int XZIP_ENABLE_ZIP_HEADERS		= 0x02;

class XZIP_Resource 
{
	int flags;

	string fileName;
	string idxName;

	typedef list<XZIP_FileHeader> FileList;
	FileList fileList;

	XStream file;

	XZIP_FileHeader* find(const char* fname);
public:
	int open(const char* fname,XStream& fh,int mode = 0);

	void LoadHeaders();
	void LoadIndex();
	void SaveIndex();

	void dump(const char* fname);

	XZIP_Resource(const char* fname,int fl);
};

#endif 