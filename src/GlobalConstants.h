/*
	Copyright (C) 2001 by Christian Taubenheim <mail at xp-antispy.org>
	This file is part of xp-AntiSpy http://www.xp-AntiSpy.org.

    xp-AntiSpy is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    xp-AntiSpy is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with xp-AntiSpy. If not, see <http://www.gnu.org/licenses/
*/

#ifndef _GLOBAL_CONSTANTS_H
#define _GLOBAL_CONSTANTS_H

#include "stdafx.h"
#include <vector>

// version number
#define APPVERSION "xp-AntiSpy V3.98-2";

const int BTNHEIGHT = 25;
const int SEARCH_HEIGHT = 20;

#define KEY_WOW64_64KEY 0x0100

/* always include the ST_END_ENTRY*/
const int ITEMCOUNT = 104;
const int GROUPCOUNT = 9;
const int PROFILE_SUGGESTS_OFF = -1;
const int PROFILE_SUGGESTS_ON = 1;
const int PROFILE_SUGGESTS_NOTHING = 0;

// Global constants
enum SETTING_STATE
{
	INACTIVE,				//0
	ACTIVE,					//1
	NON_EXISTENT,			//2
	INACTIVE_NO_PERMISSION,	//3
	ACTIVE_NO_PERMISSION,	//4
};

enum ICONS
{
	UNCHECKED,
	CHECKED,
	UNCHECKED_RIGHT,
	CHECKED_RIGHT,
	UNCHECKED_WRONG,
	CHECKED_WRONG,
	UNCHECKED_CHANGE,
	CHECKED_CHANGE,
	UNCHECKED_LOCKED,
	CHECKED_LOCKED,
	UNCHECKED_RIGHT_LOCKED,
	CHECKED_RIGHT_LOCKED,
	UNCHECKED_WRONG_LOCKED,
	CHECKED_WRONG_LOCKED,
	DISABLED,
	UNPINNED,
	PINNED,
	ALERT
};


enum SETTINGS
{
	ST_ALEXA,						// 0 #group=GI_MISCELLANOUS
	ST_MEDIAPLAYER_LICENSES,		// 1 #group=GI_MEDIAPLAYER
	ST_MEDIAPLAYER_SEND_GUID,		// 2 #group=GI_MEDIAPLAYER
	ST_MEDIAPLAYER_CODECS,			// 3 #group=GI_MEDIAPLAYER
	ST_ERROR_REPORTS_SEND,			// 4 #group=GI_ERROR_REPORTS
	ST_ERROR_REPORTS_CRITICAL,		// 5 #disabled #group=GI_ERROR_REPORTS
	ST_IE_SCHEDULED_UPDATES,		// 6 #group=GI_INTERNET_EXPLORER
	ST_IE_CHECK_4_UPDATES,			// 7 #group=GI_INTERNET_EXPLORER
	ST_IE_INTEGRATED_AUTHENTICATION,// 8 #group=GI_INTERNET_EXPLORER
	ST_SERVICES_ERROR_REPORTS,		// 9 #group=GI_SERVICES
	ST_SERVICES_AUTO_UPDATES,		// 10 #group=GI_SERVICES
	ST_SERVICES_TIMESERVER,			// 11 #group=GI_SERVICES
	ST_SERVICES_TASKSCHEDULER,		// 12 #group=GI_SERVICES
	ST_MESSENGER_NO_ACTION,			// 13 #disabled
	ST_MESSENGER_AUTOSTART,			// 14 #group=GI_MESSENGER
	ST_MESSENGER_DEINSTALL,			// 15 #group=GI_MESSENGER
	ST_SUPPORTUSER,					// 16 #group=GI_MISCELLANOUS
	ST_REGSVR_REGWIZC,				// 17 #group=GI_REGSVR
	ST_REGSVR_LICDLL,				// 18 #group=GI_REGSVR
	ST_REMOTEDESKTOP,				// 19 #group=GI_MISCELLANOUS
	ST_REGDONE,						// 20 #group=GI_MISCELLANOUS
	ST_TIME_SYNC,					// 21 #group=GI_MISCELLANOUS
	ST_BALLOON_TIPS,				// 22 #group=GI_MISCELLANOUS
	ST_CLEAR_PAGEFILE,				// 23 #group=GI_MISCELLANOUS
	ST_OE_START_MESSENGER,			// 24 #group=GI_MISCELLANOUS
	ST_SERVICES_UPNP,				// 25 #group=GI_SERVICES
	ST_BANDWIDTH,					// 26 #disabled
	ST_OXP_ERRORREPORT,				// 27 #group=GI_ERROR_REPORTS
	ST_FAST_SHUTDOWN,				// 28 #group=GI_MISCELLANOUS
	ST_MAX_CONNECTIONS,				// 29 #group=GI_INTERNET_EXPLORER
	ST_REGSVR_ZIPFLDR,				// 30 #group=GI_MISCELLANOUS
	ST_SERVICES_MSGSRV,				// 31 #group=GI_SERVICES
	ST_IE_FORM_SUGGEST,				// 32 #group=GI_INTERNET_EXPLORER
	ST_IE_UPLDDRVINFO,				// 33 #group=GI_INTERNET_EXPLORER
	ST_MP9_ADDMEDIATOLIB,			// 34 #group=GI_MEDIAPLAYER
	ST_MP9_RETRIEVEMETADATA,		// 35 #group=GI_MEDIAPLAYER
	ST_MP9_USAGETRACKING,			// 36 #group=GI_MEDIAPLAYER
	ST_MP9_SAVEMRU,					// 37 #group=GI_MEDIAPLAYER
	ST_MESSENGER_6_1_AUTOSTART,		// 38 #res=IDS_MESSENGER_AUTOSTART
	ST_IE_JAVASCRIPT,				// 39 #group=GI_INTERNET_EXPLORER
	ST_IE_ACTIVEX,					// 40 #group=GI_INTERNET_EXPLORER
	ST_IE_POPUP_BLOCKER,			// 41 #group=GI_INTERNET_EXPLORER
	ST_FIREWALL,					// 42 #group=GI_NETWORK
	ST_SERVICES_FIREWALL,			// 43 #group=GI_SERVICES
	ST_SERVICES_SEC_CTR,			// 44 #group=GI_SERVICES
	ST_SHOW_FILE_EXT,				// 45 #group=GI_MISCELLANOUS
	ST_O2k3_ERRORREPORT,			// 46 #res=IDS_O2K3_ERRORREPORT
	ST_HIDE_IN_NETWORK,				// 47 #group=GI_NETWORK
	ST_DENY_REGEDIT,				// 48 #group=GI_MISCELLANOUS
	ST_SCRIPTING_HOST,				// 49 #group=GI_MISCELLANOUS
	ST_SHOW_LAST_USERNAME,			// 50 #group=GI_MISCELLANOUS
	ST_IE_WATSON,					// 51 #group=GI_INTERNET_EXPLORER
	ST_IE_CLEAN_CACHE,				// 52 #group=GI_INTERNET_EXPLORER
	ST_MEDIAPLAYER_UPDATE,			// 53 #group=GI_MEDIAPLAYER
	ST_LNK_SUFFIX,					// 54 #group=GI_MISCELLANOUS
	ST_PIF_SUFFIX,					// 55 #group=GI_MISCELLANOUS
	ST_SHC_SUFFIX,					// 56 #group=GI_MISCELLANOUS
	ST_URL_SUFFIX,					// 57 #group=GI_MISCELLANOUS
	ST_SHB_SUFFIX,					// 58 #group=GI_MISCELLANOUS
	ST_CD_AUTORUN,					// 59 #group=GI_MISCELLANOUS
	ST_CLEAN_RECENT_DOCS,			// 60 #group=GI_MISCELLANOUS
	ST_MP_START_IN_MEDIA_GUIDE,		// 61 #group=GI_MEDIAPLAYER
	ST_DONT_REPORT_INFECTION,		// 62 #group=GI_MISCELLANOUS
	ST_RESTRICTANONYMOUS,			// 63 #group=GI_NETWORK
	ST_NONETCRAWL,					// 64 #group=GI_NETWORK
	ST_MEDIAPLAYER_BLOCKUNINSTALL,	// 65 #group=GI_MEDIAPLAYER
	ST_SERVICES_RPCLOCATOR,			// 66 #group=GI_SERVICES
	ST_SERVICES_INDEXER,			// 67 #group=GI_SERVICES
	ST_NOLMHASH,					// 68 #group=GI_MISCELLANOUS
	ST_NO_WGA_CHECK,				// 69 #group=GI_NETWORK
	ST_DO_NOT_ALLOW_IE70,			// 70 #group=GI_INTERNET_EXPLORER
	ST_IE_PHISHING_FILTER,			// 71 #group=GI_INTERNET_EXPLORER
	ST_SERVICES_WINDOWS_DEFENDER,	// 72 #group=GI_SERVICES
	ST_WMP_PREVENT_LIBRARY_SHARING,	// 73 #group=GI_MEDIAPLAYER
	ST_READER_DISABLE_JS,			// 74 #group=GI_MISCELLANOUS
	ST_TWEAK_COMMAND_HERE,			// 75 #group=GI_TWEAKS
	ST_TWEAK_SVC_WmdmPmSN,			// 76 #group=GI_TWEAKS
	ST_TWEAK_SVC_SUPPORT_CTR,		// 77 #group=GI_TWEAKS
	ST_TWEAK_DEL_CTFMON,			// 78 #group=GI_TWEAKS
	ST_TWEAK_CLEANUP_WIZ,			// 79 #group=GI_TWEAKS
	ST_TWEAK_WINUPDATE_NO_DRIVER,	// 80 #group=GI_TWEAKS
	ST_TWEAK_WEBSERVICE,			// 81 #group=GI_TWEAKS
	ST_TWEAK_BSOD_AUTOREBOOT,		// 82 #group=GI_TWEAKS
	ST_TWEAK_DEV_MANAGER	,		// 83 #group=GI_TWEAKS
	ST_TWEAK_NO_WINTOUR	,			// 84 #group=GI_TWEAKS
	ST_NET_NO_RECENT_DOCS,			// 85 #group=GI_NETWORK
	ST_NO_THUMBNAIL_CACHE,			// 86 #group=GI_TWEAKS
	ST_NO_SEARCH_ASSISTANT,			// 87 #group=GI_TWEAKS
	ST_DISABLE_UAC,					// 88 #group=GI_TWEAKS
	ST_IE_NO_SQM,					// 89 #group=GI_INTERNET_EXPLORER
	ST_IE_SUGGESTED_SITES,			// 90 #group=GI_INTERNET_EXPLORER
	ST_NO_UNREAD_MAIL,				// 91 #group=GI_TWEAKS
	ST_NO_VDM,						// 92 #group=GI_MISCELLANOUS
	ST_NO_TEREDO,					// 93 #group=GI_TWEAKS
	ST_NO_ISATAP,					// 94 #group=GI_TWEAKS
	ST_NO_NCSI,						// 95 #group=GI_TWEAKS
	ST_NO_ROOT_CERT,				// 96 #group=GI_TWEAKS
	ST_CERT_REVOCATION,				// 97 #group=GI_INTERNET_EXPLORER
	ST_CERT_TRUST,					// 98 #group=GI_INTERNET_EXPLORER
	ST_NO_HTTPS_CACHE,				// 99 #group=GI_INTERNET_EXPLORER
	ST_NO_FORCEREBOOT,				//100 #group=GI_TWEAKS
	ST_TWEAK_NO_SHORTCUT_ARROW,		//101 #group=GI_TWEAKS
	ST_NO_RECENT_DOCS,				//102 #group=GI_TWEAKS
	ST_TWEAK_SVC_BITS,				//103 #group=GI_TWEAKS
	ST_END_ENTRY
};
enum groups
{
	GI_MEDIAPLAYER,
	GI_ERROR_REPORTS,
	GI_MISCELLANOUS,
	GI_NETWORK,
	GI_INTERNET_EXPLORER,
	GI_SERVICES,
	GI_MESSENGER,
	GI_REGSVR,
	GI_TWEAKS
};

const int PROFILE_NORMAL_ON[]=
{
	ST_END_ENTRY
};
const int PROFILE_NORMAL_OFF[]=
{
	ST_END_ENTRY
};

const int PROFILE_SUGGESTED_ON[]=
{
	ST_ALEXA,						// 0
	ST_MEDIAPLAYER_LICENSES,		// 1
	ST_MEDIAPLAYER_SEND_GUID,		// 2
	ST_MEDIAPLAYER_CODECS,			// 3
	ST_ERROR_REPORTS_SEND,			// 4
	ST_IE_SCHEDULED_UPDATES,		// 6
	ST_IE_CHECK_4_UPDATES,			// 7
	ST_IE_INTEGRATED_AUTHENTICATION,// 8
	ST_SERVICES_ERROR_REPORTS,		// 9
	ST_SERVICES_AUTO_UPDATES,		// 10
	ST_SERVICES_TIMESERVER,			// 11
	ST_MESSENGER_AUTOSTART,			// 14
	ST_SUPPORTUSER,					// 16
	ST_REGSVR_REGWIZC,				// 17
	ST_REMOTEDESKTOP,				// 19
	ST_REGDONE,						// 20
	ST_TIME_SYNC,					// 21
	ST_OE_START_MESSENGER,			// 24
	ST_SERVICES_UPNP,				// 25
	ST_OXP_ERRORREPORT,				// 27
	ST_SERVICES_MSGSRV,				// 31
	ST_IE_FORM_SUGGEST,				// 32
	ST_IE_UPLDDRVINFO,				// 33
	ST_MP9_ADDMEDIATOLIB,			// 34
	ST_MP9_RETRIEVEMETADATA,		// 35
	ST_MP9_USAGETRACKING,			// 36
	ST_MP9_SAVEMRU,					// 37
	ST_IE_ACTIVEX,					// 40
	ST_MESSENGER_6_1_AUTOSTART,		// 38
	ST_SHOW_FILE_EXT,				// 45
	ST_SCRIPTING_HOST,				// 49
	ST_SERVICES_SEC_CTR,
	ST_PIF_SUFFIX,					// 55
	ST_SHC_SUFFIX,					// 56
	ST_URL_SUFFIX,					// 57
	ST_SHB_SUFFIX,					// 58
	ST_IE_POPUP_BLOCKER,			// 41
	ST_IE_PHISHING_FILTER,			// 71
	ST_SERVICES_WINDOWS_DEFENDER,	// 72
	ST_CD_AUTORUN,
	ST_END_ENTRY
};
const int PROFILE_SUGGESTED_OFF[]=
{
	ST_FIREWALL,					// 42
	ST_SERVICES_FIREWALL,			// 43
	ST_END_ENTRY
};

const int PROFILE_WINDOWS_UPDATE_ON[]=
{
	ST_END_ENTRY
};
const int PROFILE_WINDOWS_UPDATE_OFF[]=
{
	ST_IE_JAVASCRIPT,				// 39
	ST_IE_ACTIVEX,					// 40
	ST_IE_CHECK_4_UPDATES,			// 7
	ST_SERVICES_AUTO_UPDATES,		// 10
	ST_REGSVR_LICDLL,				// 18
	ST_SERVICES_SEC_CTR,
	ST_END_ENTRY
};

const int PROFILE_SYSTEM_DEFAULT_ON[]=
{
	ST_END_ENTRY
};
const int PROFILE_SYSTEM_DEFAULT_OFF[]=
{
	ST_MEDIAPLAYER_LICENSES,		// 1
	ST_MEDIAPLAYER_SEND_GUID,		// 2
	ST_MEDIAPLAYER_CODECS,			// 3
	ST_ERROR_REPORTS_SEND,			// 4
	ST_IE_SCHEDULED_UPDATES,		// 6
	ST_IE_CHECK_4_UPDATES,			// 7
	ST_IE_INTEGRATED_AUTHENTICATION,// 8
	ST_SERVICES_ERROR_REPORTS,		// 9
	ST_SERVICES_AUTO_UPDATES,		// 10
	ST_SERVICES_TIMESERVER,			// 11
	ST_SERVICES_TASKSCHEDULER,		// 12
	ST_REGSVR_REGWIZC,				// 17
	ST_REGSVR_LICDLL,				// 18
	ST_REMOTEDESKTOP,				// 19
	ST_REGDONE,						// 20
	ST_TIME_SYNC,					// 21
	ST_BALLOON_TIPS,				// 22
	ST_CLEAR_PAGEFILE,				// 23
	ST_OE_START_MESSENGER,			// 24
	ST_SERVICES_UPNP,				// 25
	ST_OXP_ERRORREPORT,				// 27
	ST_FAST_SHUTDOWN,				// 28
	ST_MAX_CONNECTIONS,				// 29
	ST_SERVICES_MSGSRV,				// 31
	ST_IE_FORM_SUGGEST,				// 32
	ST_IE_UPLDDRVINFO,				// 33
	ST_MP9_ADDMEDIATOLIB,			// 34
	ST_MP9_RETRIEVEMETADATA,		// 35
	ST_MP9_USAGETRACKING,			// 36
	ST_MP9_SAVEMRU,					// 37
	ST_IE_JAVASCRIPT,				// 39
	ST_IE_ACTIVEX,					// 40
	ST_SERVICES_SEC_CTR,			// 44
	ST_SHOW_FILE_EXT,				// 45
	ST_O2k3_ERRORREPORT,			// 46
	ST_HIDE_IN_NETWORK,				// 47
	ST_DENY_REGEDIT,				// 48
	ST_SCRIPTING_HOST,				// 49
	ST_SHOW_LAST_USERNAME,			// 50
	ST_IE_WATSON,					// 51
	ST_IE_CLEAN_CACHE,				// 52
	ST_MEDIAPLAYER_UPDATE,			// 53
	ST_CD_AUTORUN,					// 58
	ST_CLEAN_RECENT_DOCS,			// 59
	ST_MP_START_IN_MEDIA_GUIDE,		// 60
	ST_IE_POPUP_BLOCKER,			// 41
	ST_FIREWALL,					// 42
	ST_SERVICES_FIREWALL,			// 43
	ST_LNK_SUFFIX,					// 54
	ST_PIF_SUFFIX,					// 55
	ST_SHC_SUFFIX,					// 56
	ST_URL_SUFFIX,					// 57
	ST_SHB_SUFFIX,					// 58
	ST_SERVICES_INDEXER,
	ST_NONETCRAWL,
	ST_RESTRICTANONYMOUS,
	ST_NOLMHASH,
	ST_DONT_REPORT_INFECTION,
	ST_END_ENTRY
};


const unsigned int WIN_95 = 1;
const unsigned int WIN_98 = 2;
const unsigned int WIN_ME = 3;
const unsigned int WIN_2K = 4;
const unsigned int WIN_XP_HOME = 5;
const unsigned int WIN_XP_PRO = 6;

typedef struct _OS_INFO 
{
	unsigned int osType;
	unsigned int servicePack;
	unsigned int buidNo;
	CString osName;
} OS_INFO;

typedef struct _OSVERSIONINFO_CUSTOM 
{
	DWORD dwOSVersionInfoSize;
	DWORD dwMajorVersion;
	DWORD dwMinorVersion;
	DWORD dwBuildNumber;
	DWORD dwPlatformId;
	TCHAR szCSDVersion[128];
	WORD wServicePackMajor;
	WORD wServicePackMinor;
	WORD wSuiteMask;
	BYTE wProductType;
	BYTE wReserved;
} OSVERSIONINFO_CUSTOM;

struct SETTING 
{
	int settingID;
	BOOL checked;
};
typedef std::vector<SETTING> SettingVec;

#define PRODUCT_UNDEFINED                       0x00000000

#define PRODUCT_ULTIMATE                        0x00000001
#define PRODUCT_ULTIMATE_E                      0x00000047
#define PRODUCT_ULTIMATE_N                      0x0000001C
#define PRODUCT_HOME_BASIC                      0x00000002
#define PRODUCT_HOME_PREMIUM                    0x00000003
#define PRODUCT_ENTERPRISE                      0x00000004
#define PRODUCT_HOME_BASIC_N                    0x00000005
#define PRODUCT_BUSINESS                        0x00000006
#define PRODUCT_STANDARD_SERVER                 0x00000007
#define PRODUCT_DATACENTER_SERVER               0x00000008
#define PRODUCT_SMALLBUSINESS_SERVER            0x00000009
#define PRODUCT_ENTERPRISE_SERVER               0x0000000A
#define PRODUCT_STARTER                         0x0000000B
#define PRODUCT_STARTER_E                       0x00000042
#define PRODUCT_STARTER_N                       0x0000002F
#define PRODUCT_DATACENTER_SERVER_CORE          0x0000000C
#define PRODUCT_STANDARD_SERVER_CORE            0x0000000D
#define PRODUCT_ENTERPRISE_SERVER_CORE          0x0000000E
#define PRODUCT_ENTERPRISE_SERVER_IA64          0x0000000F
#define PRODUCT_BUSINESS_N                      0x00000010
#define PRODUCT_WEB_SERVER                      0x00000011
#define PRODUCT_CLUSTER_SERVER                  0x00000012
#define PRODUCT_HOME_SERVER                     0x00000013
#define PRODUCT_STORAGE_EXPRESS_SERVER          0x00000014
#define PRODUCT_STORAGE_STANDARD_SERVER         0x00000015
#define PRODUCT_STORAGE_WORKGROUP_SERVER        0x00000016
#define PRODUCT_STORAGE_ENTERPRISE_SERVER       0x00000017
#define PRODUCT_SERVER_FOR_SMALLBUSINESS        0x00000018
#define PRODUCT_SMALLBUSINESS_SERVER_PREMIUM    0x00000019
#define PRODUCT_PROFESSIONAL				    0x00000030
#define PRODUCT_PROFESSIONAL_N				    0x00000031
#define PRODUCT_PROFESSIONAL_E				    0x00000045

#define PRODUCT_UNLICENSED                      0xABCDABCD
#endif