

#include "stdafx.h"
#include "Emulator.h"

#include "EmulatorDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif



IMPLEMENT_DYNCREATE(CEmulatorDoc, CDocument)

BEGIN_MESSAGE_MAP(CEmulatorDoc, CDocument)
END_MESSAGE_MAP()


CEmulatorDoc::CEmulatorDoc()
{


}

CEmulatorDoc::~CEmulatorDoc()
{
}

BOOL CEmulatorDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;



	return TRUE;
}






void CEmulatorDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		
	}
	else
	{
		
	}
}




#ifdef _DEBUG
void CEmulatorDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEmulatorDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif 



