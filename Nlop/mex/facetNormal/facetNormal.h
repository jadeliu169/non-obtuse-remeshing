// facetNormal.h : main header file for the facetNormal DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CfacetNormalApp
// See facetNormal.cpp for the implementation of this class
//

class CfacetNormalApp : public CWinApp
{
public:
	CfacetNormalApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
