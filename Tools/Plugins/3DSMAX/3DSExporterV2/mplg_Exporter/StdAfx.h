// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#define _CRT_SECURE_NO_WARNINGS 1

#if !defined(AFX_STDAFX_H__84B376F5_72D5_4CE5_BBDB_327520E5343A__INCLUDED_)
#define AFX_STDAFX_H__84B376F5_72D5_4CE5_BBDB_327520E5343A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers
#endif

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER				// Allow use of features specific to Windows 95 and Windows NT 4 or later.
#define WINVER 0x0400		// Change this to the appropriate value to target Windows 98 and Windows 2000 or later.
#endif

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows NT 4 or later.
#define _WIN32_WINNT 0x0400	// Change this to the appropriate value to target Windows 2000 or later.
#endif						

#ifndef _WIN32_WINDOWS		// Allow use of features specific to Windows 98 or later.
#define _WIN32_WINDOWS 0x0410 // Change this to the appropriate value to target Windows Me or later.
#endif

#ifndef _WIN32_IE			// Allow use of features specific to IE 4.0 or later.
#define _WIN32_IE 0x0400	// Change this to the appropriate value to target IE 5.0 or later.
#endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxole.h>         // MFC OLE classes
#include <afxodlgs.h>       // MFC OLE dialog classes
#include <afxdisp.h>        // MFC OLE automation classes
#endif // _AFX_NO_OLE_SUPPORT

#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>			// MFC ODBC database classes
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>			// MFC DAO database classes
#endif // _AFX_NO_DAO_SUPPORT

#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include "../Common/MaxIncludes.h"

#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <sstream>
#include <algorithm>

#include "resource.h"

#pragma warning(disable: 4018)

#include "VertexCandidate.h"
#include "BoneCandidate.h"
#include "SkeletonCandidate.h"
#include "MaxMesh.h"
#include "MaxInterface.h"

#include "../Common/Utils.h"
#include "../Common/Log.h"

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__84B376F5_72D5_4CE5_BBDB_327520E5343A__INCLUDED_)
