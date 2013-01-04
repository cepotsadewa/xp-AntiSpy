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
/*
    Do not touch. This file is automatically generated from ../templates/resource_helper.tpl
    Make changes to the template file instead.
*/

#include "resource_helper.h"
#include "resource.h"
#include "GlobalConstants.h"
#include <assert.h>

CString CResource::getText(UINT id)
{
	UINT resId=-1;
	switch(id)
	{
		case ST_NONETCRAWL:
			resId = IDS_NONETCRAWL;
		break;
		case ST_NO_UNREAD_MAIL:
			resId = IDS_NO_UNREAD_MAIL;
		break;
		case ST_NO_RECENT_DOCS:
			resId = IDS_NO_RECENT_DOCS;
		break;
		case ST_IE_WATSON:
			resId = IDS_IE_WATSON;
		break;
		case ST_LNK_SUFFIX:
			resId = IDS_LNK_SUFFIX;
		break;
		case ST_SERVICES_FIREWALL:
			resId = IDS_SERVICES_FIREWALL;
		break;
		case ST_MP9_SAVEMRU:
			resId = IDS_MP9_SAVEMRU;
		break;
		case ST_ERROR_REPORTS_SEND:
			resId = IDS_ERROR_REPORTS_SEND;
		break;
		case ST_PIF_SUFFIX:
			resId = IDS_PIF_SUFFIX;
		break;
		case ST_NO_ROOT_CERT:
			resId = IDS_NO_ROOT_CERT;
		break;
		case ST_MESSENGER_6_1_AUTOSTART:
			resId = IDS_MESSENGER_AUTOSTART;
		break;
		case ST_OE_START_MESSENGER:
			resId = IDS_OE_START_MESSENGER;
		break;
		case ST_WMP_PREVENT_LIBRARY_SHARING:
			resId = IDS_WMP_PREVENT_LIBRARY_SHARING;
		break;
		case ST_REMOTEDESKTOP:
			resId = IDS_REMOTEDESKTOP;
		break;
		case ST_NET_NO_RECENT_DOCS:
			resId = IDS_NET_NO_RECENT_DOCS;
		break;
		case ST_DENY_REGEDIT:
			resId = IDS_DENY_REGEDIT;
		break;
		case ST_IE_JAVASCRIPT:
			resId = IDS_IE_JAVASCRIPT;
		break;
		case ST_CERT_TRUST:
			resId = IDS_CERT_TRUST;
		break;
		case ST_TWEAK_SVC_BITS:
			resId = IDS_TWEAK_SVC_BITS;
		break;
		case ST_MESSENGER_DEINSTALL:
			resId = IDS_MESSENGER_DEINSTALL;
		break;
		case ST_RESTRICTANONYMOUS:
			resId = IDS_RESTRICTANONYMOUS;
		break;
		case ST_NO_SEARCH_ASSISTANT:
			resId = IDS_NO_SEARCH_ASSISTANT;
		break;
		case ST_SERVICES_INDEXER:
			resId = IDS_SERVICES_INDEXER;
		break;
		case ST_SHC_SUFFIX:
			resId = IDS_SHC_SUFFIX;
		break;
		case ST_IE_FORM_SUGGEST:
			resId = IDS_IE_FORM_SUGGEST;
		break;
		case ST_SERVICES_UPNP:
			resId = IDS_SERVICES_UPNP;
		break;
		case ST_MAX_CONNECTIONS:
			resId = IDS_MAX_CONNECTIONS;
		break;
		case ST_MP9_ADDMEDIATOLIB:
			resId = IDS_MP9_ADDMEDIATOLIB;
		break;
		case ST_SERVICES_ERROR_REPORTS:
			resId = IDS_SERVICES_ERROR_REPORTS;
		break;
		case ST_TWEAK_CLEANUP_WIZ:
			resId = IDS_TWEAK_CLEANUP_WIZ;
		break;
		case ST_MP9_RETRIEVEMETADATA:
			resId = IDS_MP9_RETRIEVEMETADATA;
		break;
		case ST_IE_UPLDDRVINFO:
			resId = IDS_IE_UPLDDRVINFO;
		break;
		case ST_MEDIAPLAYER_BLOCKUNINSTALL:
			resId = IDS_MEDIAPLAYER_BLOCKUNINSTALL;
		break;
		case ST_SERVICES_WINDOWS_DEFENDER:
			resId = IDS_SERVICES_WINDOWS_DEFENDER;
		break;
		case ST_TWEAK_NO_SHORTCUT_ARROW:
			resId = IDS_TWEAK_NO_SHORTCUT_ARROW;
		break;
		case ST_BALLOON_TIPS:
			resId = IDS_BALLOON_TIPS;
		break;
		case ST_IE_ACTIVEX:
			resId = IDS_IE_ACTIVEX;
		break;
		case ST_IE_SCHEDULED_UPDATES:
			resId = IDS_IE_SCHEDULED_UPDATES;
		break;
		case ST_MEDIAPLAYER_CODECS:
			resId = IDS_MEDIAPLAYER_CODECS;
		break;
		case ST_TIME_SYNC:
			resId = IDS_TIME_SYNC;
		break;
		case ST_NO_WGA_CHECK:
			resId = IDS_NO_WGA_CHECK;
		break;
		case ST_NO_VDM:
			resId = IDS_NO_VDM;
		break;
		case ST_NO_TEREDO:
			resId = IDS_NO_TEREDO;
		break;
		case ST_TWEAK_SVC_SUPPORT_CTR:
			resId = IDS_TWEAK_SVC_SUPPORT_CTR;
		break;
		case ST_IE_NO_SQM:
			resId = IDS_IE_NO_SQM;
		break;
		case ST_READER_DISABLE_JS:
			resId = IDS_READER_DISABLE_JS;
		break;
		case ST_IE_SUGGESTED_SITES:
			resId = IDS_IE_SUGGESTED_SITES;
		break;
		case ST_CERT_REVOCATION:
			resId = IDS_CERT_REVOCATION;
		break;
		case ST_SERVICES_AUTO_UPDATES:
			resId = IDS_SERVICES_AUTO_UPDATES;
		break;
		case ST_SERVICES_TASKSCHEDULER:
			resId = IDS_SERVICES_TASKSCHEDULER;
		break;
		case ST_REGSVR_LICDLL:
			resId = IDS_REGSVR_LICDLL;
		break;
		case ST_NO_ISATAP:
			resId = IDS_NO_ISATAP;
		break;
		case ST_SHOW_LAST_USERNAME:
			resId = IDS_SHOW_LAST_USERNAME;
		break;
		case ST_MEDIAPLAYER_SEND_GUID:
			resId = IDS_MEDIAPLAYER_SEND_GUID;
		break;
		case ST_CLEAR_PAGEFILE:
			resId = IDS_CLEAR_PAGEFILE;
		break;
		case ST_ALEXA:
			resId = IDS_ALEXA;
		break;
		case ST_DISABLE_UAC:
			resId = IDS_DISABLE_UAC;
		break;
		case ST_OXP_ERRORREPORT:
			resId = IDS_OXP_ERRORREPORT;
		break;
		case ST_NO_HTTPS_CACHE:
			resId = IDS_NO_HTTPS_CACHE;
		break;
		case ST_SCRIPTING_HOST:
			resId = IDS_SCRIPTING_HOST;
		break;
		case ST_MEDIAPLAYER_LICENSES:
			resId = IDS_MEDIAPLAYER_LICENSES;
		break;
		case ST_SERVICES_RPCLOCATOR:
			resId = IDS_SERVICES_RPCLOCATOR;
		break;
		case ST_HIDE_IN_NETWORK:
			resId = IDS_HIDE_IN_NETWORK;
		break;
		case ST_SHB_SUFFIX:
			resId = IDS_SHB_SUFFIX;
		break;
		case ST_TWEAK_DEL_CTFMON:
			resId = IDS_TWEAK_DEL_CTFMON;
		break;
		case ST_URL_SUFFIX:
			resId = IDS_URL_SUFFIX;
		break;
		case ST_NO_FORCEREBOOT:
			resId = IDS_NO_FORCEREBOOT;
		break;
		case ST_O2k3_ERRORREPORT:
			resId = IDS_O2K3_ERRORREPORT;
		break;
		case ST_SERVICES_TIMESERVER:
			resId = IDS_SERVICES_TIMESERVER;
		break;
		case ST_FIREWALL:
			resId = IDS_FIREWALL;
		break;
		case ST_IE_INTEGRATED_AUTHENTICATION:
			resId = IDS_IE_INTEGRATED_AUTHENTICATION;
		break;
		case ST_TWEAK_WEBSERVICE:
			resId = IDS_TWEAK_WEBSERVICE;
		break;
		case ST_MESSENGER_AUTOSTART:
			resId = IDS_MESSENGER_AUTOSTART;
		break;
		case ST_TWEAK_COMMAND_HERE:
			resId = IDS_TWEAK_COMMAND_HERE;
		break;
		case ST_MP_START_IN_MEDIA_GUIDE:
			resId = IDS_MP_START_IN_MEDIA_GUIDE;
		break;
		case ST_DO_NOT_ALLOW_IE70:
			resId = IDS_DO_NOT_ALLOW_IE70;
		break;
		case ST_SERVICES_MSGSRV:
			resId = IDS_SERVICES_MSGSRV;
		break;
		case ST_CD_AUTORUN:
			resId = IDS_CD_AUTORUN;
		break;
		case ST_REGSVR_ZIPFLDR:
			resId = IDS_REGSVR_ZIPFLDR;
		break;
		case ST_SUPPORTUSER:
			resId = IDS_SUPPORTUSER;
		break;
		case ST_NO_NCSI:
			resId = IDS_NO_NCSI;
		break;
		case ST_TWEAK_DEV_MANAGER:
			resId = IDS_TWEAK_DEV_MANAGER;
		break;
		case ST_TWEAK_WINUPDATE_NO_DRIVER:
			resId = IDS_TWEAK_WINUPDATE_NO_DRIVER;
		break;
		case ST_IE_POPUP_BLOCKER:
			resId = IDS_IE_POPUP_BLOCKER;
		break;
		case ST_MP9_USAGETRACKING:
			resId = IDS_MP9_USAGETRACKING;
		break;
		case ST_NO_THUMBNAIL_CACHE:
			resId = IDS_NO_THUMBNAIL_CACHE;
		break;
		case ST_FAST_SHUTDOWN:
			resId = IDS_FAST_SHUTDOWN;
		break;
		case ST_DONT_REPORT_INFECTION:
			resId = IDS_DONT_REPORT_INFECTION;
		break;
		case ST_REGDONE:
			resId = IDS_REGDONE;
		break;
		case ST_IE_CHECK_4_UPDATES:
			resId = IDS_IE_CHECK_4_UPDATES;
		break;
		case ST_MEDIAPLAYER_UPDATE:
			resId = IDS_MEDIAPLAYER_UPDATE;
		break;
		case ST_IE_PHISHING_FILTER:
			resId = IDS_IE_PHISHING_FILTER;
		break;
		case ST_SERVICES_SEC_CTR:
			resId = IDS_SERVICES_SEC_CTR;
		break;
		case ST_REGSVR_REGWIZC:
			resId = IDS_REGSVR_REGWIZC;
		break;
		case ST_NOLMHASH:
			resId = IDS_NOLMHASH;
		break;
		case ST_CLEAN_RECENT_DOCS:
			resId = IDS_CLEAN_RECENT_DOCS;
		break;
		case ST_IE_CLEAN_CACHE:
			resId = IDS_IE_CLEAN_CACHE;
		break;
		case ST_SHOW_FILE_EXT:
			resId = IDS_SHOW_FILE_EXT;
		break;
		case ST_TWEAK_SVC_WmdmPmSN:
			resId = IDS_TWEAK_SVC_WmdmPmSN;
		break;
		case ST_TWEAK_BSOD_AUTOREBOOT:
			resId = IDS_TWEAK_BSOD_AUTOREBOOT;
		break;
		case ST_TWEAK_NO_WINTOUR:
			resId = IDS_TWEAK_NO_WINTOUR;
		break;

	}
	assert(resId != -1);
	CString ret;
	ret.LoadString(resId);
	return ret;
}

CString CResource::getGroupText(UINT id)
{
	UINT resId=-1;
	switch(id)
	{
		case GI_NETWORK:
			resId = IDS_GROUP_NETWORK;
		break;
		case GI_INTERNET_EXPLORER:
			resId = IDS_GROUP_INTERNET_EXPLORER;
		break;
		case GI_MEDIAPLAYER:
			resId = IDS_GROUP_MEDIAPLAYER;
		break;
		case GI_MESSENGER:
			resId = IDS_GROUP_MESSENGER;
		break;
		case GI_SERVICES:
			resId = IDS_GROUP_SERVICES;
		break;
		case GI_REGSVR:
			resId = IDS_GROUP_REGSVR;
		break;
		case GI_TWEAKS:
			resId = IDS_GROUP_TWEAKS;
		break;
		case GI_MISCELLANOUS:
			resId = IDS_GROUP_MISCELLANOUS;
		break;
		case GI_ERROR_REPORTS:
			resId = IDS_GROUP_ERROR_REPORTS;
		break;

	}
	assert(resId != -1);
	CString ret;
	ret.LoadString(resId);
	return ret;
}

CString CResource::getGroupHelpText(UINT id)
{
	UINT resId=-1;
	switch(id)
	{
		case GI_NETWORK:
			resId = IDS_GROUP_INFO_NETWORK;
		break;
		case GI_INTERNET_EXPLORER:
			resId = IDS_GROUP_INFO_INTERNET_EXPLORER;
		break;
		case GI_MEDIAPLAYER:
			resId = IDS_GROUP_INFO_MEDIAPLAYER;
		break;
		case GI_MESSENGER:
			resId = IDS_GROUP_INFO_MESSENGER;
		break;
		case GI_SERVICES:
			resId = IDS_GROUP_INFO_SERVICES;
		break;
		case GI_REGSVR:
			resId = IDS_GROUP_INFO_REGSVR;
		break;
		case GI_TWEAKS:
			resId = IDS_GROUP_INFO_TWEAKS;
		break;
		case GI_MISCELLANOUS:
			resId = IDS_GROUP_INFO_MISCELLANOUS;
		break;
		case GI_ERROR_REPORTS:
			resId = IDS_GROUP_INFO_ERROR_REPORTS;
		break;

	}
	assert(resId != -1);
	CString ret;
	ret.LoadString(resId);
	return ret;
}

CString CResource::getHelpText(UINT id)
{
	UINT resId=-1;
	switch(id)
	{
		case ST_NONETCRAWL:
			resId = IDS_INFO_NONETCRAWL;
		break;
		case ST_NO_UNREAD_MAIL:
			resId = IDS_INFO_NO_UNREAD_MAIL;
		break;
		case ST_NO_RECENT_DOCS:
			resId = IDS_INFO_NO_RECENT_DOCS;
		break;
		case ST_IE_WATSON:
			resId = IDS_INFO_IE_WATSON;
		break;
		case ST_LNK_SUFFIX:
			resId = IDS_INFO_LNK_SUFFIX;
		break;
		case ST_SERVICES_FIREWALL:
			resId = IDS_INFO_SERVICES_FIREWALL;
		break;
		case ST_MP9_SAVEMRU:
			resId = IDS_INFO_MP9_SAVEMRU;
		break;
		case ST_ERROR_REPORTS_SEND:
			resId = IDS_INFO_ERROR_REPORTS_SEND;
		break;
		case ST_PIF_SUFFIX:
			resId = IDS_INFO_PIF_SUFFIX;
		break;
		case ST_NO_ROOT_CERT:
			resId = IDS_INFO_NO_ROOT_CERT;
		break;
		case ST_MESSENGER_6_1_AUTOSTART:
			resId = IDS_INFO_MESSENGER_AUTOSTART;
		break;
		case ST_OE_START_MESSENGER:
			resId = IDS_INFO_OE_START_MESSENGER;
		break;
		case ST_WMP_PREVENT_LIBRARY_SHARING:
			resId = IDS_INFO_WMP_PREVENT_LIBRARY_SHARING;
		break;
		case ST_REMOTEDESKTOP:
			resId = IDS_INFO_REMOTEDESKTOP;
		break;
		case ST_NET_NO_RECENT_DOCS:
			resId = IDS_INFO_NET_NO_RECENT_DOCS;
		break;
		case ST_DENY_REGEDIT:
			resId = IDS_INFO_DENY_REGEDIT;
		break;
		case ST_IE_JAVASCRIPT:
			resId = IDS_INFO_IE_JAVASCRIPT;
		break;
		case ST_CERT_TRUST:
			resId = IDS_INFO_CERT_TRUST;
		break;
		case ST_TWEAK_SVC_BITS:
			resId = IDS_INFO_TWEAK_SVC_BITS;
		break;
		case ST_MESSENGER_DEINSTALL:
			resId = IDS_INFO_MESSENGER_DEINSTALL;
		break;
		case ST_RESTRICTANONYMOUS:
			resId = IDS_INFO_RESTRICTANONYMOUS;
		break;
		case ST_NO_SEARCH_ASSISTANT:
			resId = IDS_INFO_NO_SEARCH_ASSISTANT;
		break;
		case ST_SERVICES_INDEXER:
			resId = IDS_INFO_SERVICES_INDEXER;
		break;
		case ST_SHC_SUFFIX:
			resId = IDS_INFO_SHC_SUFFIX;
		break;
		case ST_IE_FORM_SUGGEST:
			resId = IDS_INFO_IE_FORM_SUGGEST;
		break;
		case ST_SERVICES_UPNP:
			resId = IDS_INFO_SERVICES_UPNP;
		break;
		case ST_MAX_CONNECTIONS:
			resId = IDS_INFO_MAX_CONNECTIONS;
		break;
		case ST_MP9_ADDMEDIATOLIB:
			resId = IDS_INFO_MP9_ADDMEDIATOLIB;
		break;
		case ST_SERVICES_ERROR_REPORTS:
			resId = IDS_INFO_SERVICES_ERROR_REPORTS;
		break;
		case ST_TWEAK_CLEANUP_WIZ:
			resId = IDS_INFO_TWEAK_CLEANUP_WIZ;
		break;
		case ST_MP9_RETRIEVEMETADATA:
			resId = IDS_INFO_MP9_RETRIEVEMETADATA;
		break;
		case ST_IE_UPLDDRVINFO:
			resId = IDS_INFO_IE_UPLDDRVINFO;
		break;
		case ST_MEDIAPLAYER_BLOCKUNINSTALL:
			resId = IDS_INFO_MEDIAPLAYER_BLOCKUNINSTALL;
		break;
		case ST_SERVICES_WINDOWS_DEFENDER:
			resId = IDS_INFO_SERVICES_WINDOWS_DEFENDER;
		break;
		case ST_TWEAK_NO_SHORTCUT_ARROW:
			resId = IDS_INFO_TWEAK_NO_SHORTCUT_ARROW;
		break;
		case ST_BALLOON_TIPS:
			resId = IDS_INFO_BALLOON_TIPS;
		break;
		case ST_IE_ACTIVEX:
			resId = IDS_INFO_IE_ACTIVEX;
		break;
		case ST_IE_SCHEDULED_UPDATES:
			resId = IDS_INFO_IE_SCHEDULED_UPDATES;
		break;
		case ST_MEDIAPLAYER_CODECS:
			resId = IDS_INFO_MEDIAPLAYER_CODECS;
		break;
		case ST_TIME_SYNC:
			resId = IDS_INFO_TIME_SYNC;
		break;
		case ST_NO_WGA_CHECK:
			resId = IDS_INFO_NO_WGA_CHECK;
		break;
		case ST_NO_VDM:
			resId = IDS_INFO_NO_VDM;
		break;
		case ST_NO_TEREDO:
			resId = IDS_INFO_NO_TEREDO;
		break;
		case ST_TWEAK_SVC_SUPPORT_CTR:
			resId = IDS_INFO_TWEAK_SVC_SUPPORT_CTR;
		break;
		case ST_IE_NO_SQM:
			resId = IDS_INFO_IE_NO_SQM;
		break;
		case ST_READER_DISABLE_JS:
			resId = IDS_INFO_READER_DISABLE_JS;
		break;
		case ST_IE_SUGGESTED_SITES:
			resId = IDS_INFO_IE_SUGGESTED_SITES;
		break;
		case ST_CERT_REVOCATION:
			resId = IDS_INFO_CERT_REVOCATION;
		break;
		case ST_SERVICES_AUTO_UPDATES:
			resId = IDS_INFO_SERVICES_AUTO_UPDATES;
		break;
		case ST_SERVICES_TASKSCHEDULER:
			resId = IDS_INFO_SERVICES_TASKSCHEDULER;
		break;
		case ST_REGSVR_LICDLL:
			resId = IDS_INFO_REGSVR_LICDLL;
		break;
		case ST_NO_ISATAP:
			resId = IDS_INFO_NO_ISATAP;
		break;
		case ST_SHOW_LAST_USERNAME:
			resId = IDS_INFO_SHOW_LAST_USERNAME;
		break;
		case ST_MEDIAPLAYER_SEND_GUID:
			resId = IDS_INFO_MEDIAPLAYER_SEND_GUID;
		break;
		case ST_CLEAR_PAGEFILE:
			resId = IDS_INFO_CLEAR_PAGEFILE;
		break;
		case ST_ALEXA:
			resId = IDS_INFO_ALEXA;
		break;
		case ST_DISABLE_UAC:
			resId = IDS_INFO_DISABLE_UAC;
		break;
		case ST_OXP_ERRORREPORT:
			resId = IDS_INFO_OXP_ERRORREPORT;
		break;
		case ST_NO_HTTPS_CACHE:
			resId = IDS_INFO_NO_HTTPS_CACHE;
		break;
		case ST_SCRIPTING_HOST:
			resId = IDS_INFO_SCRIPTING_HOST;
		break;
		case ST_MEDIAPLAYER_LICENSES:
			resId = IDS_INFO_MEDIAPLAYER_LICENSES;
		break;
		case ST_SERVICES_RPCLOCATOR:
			resId = IDS_INFO_SERVICES_RPCLOCATOR;
		break;
		case ST_HIDE_IN_NETWORK:
			resId = IDS_INFO_HIDE_IN_NETWORK;
		break;
		case ST_SHB_SUFFIX:
			resId = IDS_INFO_SHB_SUFFIX;
		break;
		case ST_TWEAK_DEL_CTFMON:
			resId = IDS_INFO_TWEAK_DEL_CTFMON;
		break;
		case ST_URL_SUFFIX:
			resId = IDS_INFO_URL_SUFFIX;
		break;
		case ST_NO_FORCEREBOOT:
			resId = IDS_INFO_NO_FORCEREBOOT;
		break;
		case ST_O2k3_ERRORREPORT:
			resId = IDS_INFO_O2K3_ERRORREPORT;
		break;
		case ST_SERVICES_TIMESERVER:
			resId = IDS_INFO_SERVICES_TIMESERVER;
		break;
		case ST_FIREWALL:
			resId = IDS_INFO_FIREWALL;
		break;
		case ST_IE_INTEGRATED_AUTHENTICATION:
			resId = IDS_INFO_IE_INTEGRATED_AUTHENTICATION;
		break;
		case ST_TWEAK_WEBSERVICE:
			resId = IDS_INFO_TWEAK_WEBSERVICE;
		break;
		case ST_MESSENGER_AUTOSTART:
			resId = IDS_INFO_MESSENGER_AUTOSTART;
		break;
		case ST_TWEAK_COMMAND_HERE:
			resId = IDS_INFO_TWEAK_COMMAND_HERE;
		break;
		case ST_MP_START_IN_MEDIA_GUIDE:
			resId = IDS_INFO_MP_START_IN_MEDIA_GUIDE;
		break;
		case ST_DO_NOT_ALLOW_IE70:
			resId = IDS_INFO_DO_NOT_ALLOW_IE70;
		break;
		case ST_SERVICES_MSGSRV:
			resId = IDS_INFO_SERVICES_MSGSRV;
		break;
		case ST_CD_AUTORUN:
			resId = IDS_INFO_CD_AUTORUN;
		break;
		case ST_REGSVR_ZIPFLDR:
			resId = IDS_INFO_REGSVR_ZIPFLDR;
		break;
		case ST_SUPPORTUSER:
			resId = IDS_INFO_SUPPORTUSER;
		break;
		case ST_NO_NCSI:
			resId = IDS_INFO_NO_NCSI;
		break;
		case ST_TWEAK_DEV_MANAGER:
			resId = IDS_INFO_TWEAK_DEV_MANAGER;
		break;
		case ST_TWEAK_WINUPDATE_NO_DRIVER:
			resId = IDS_INFO_TWEAK_WINUPDATE_NO_DRIVER;
		break;
		case ST_IE_POPUP_BLOCKER:
			resId = IDS_INFO_IE_POPUP_BLOCKER;
		break;
		case ST_MP9_USAGETRACKING:
			resId = IDS_INFO_MP9_USAGETRACKING;
		break;
		case ST_NO_THUMBNAIL_CACHE:
			resId = IDS_INFO_NO_THUMBNAIL_CACHE;
		break;
		case ST_FAST_SHUTDOWN:
			resId = IDS_INFO_FAST_SHUTDOWN;
		break;
		case ST_DONT_REPORT_INFECTION:
			resId = IDS_INFO_DONT_REPORT_INFECTION;
		break;
		case ST_REGDONE:
			resId = IDS_INFO_REGDONE;
		break;
		case ST_IE_CHECK_4_UPDATES:
			resId = IDS_INFO_IE_CHECK_4_UPDATES;
		break;
		case ST_MEDIAPLAYER_UPDATE:
			resId = IDS_INFO_MEDIAPLAYER_UPDATE;
		break;
		case ST_IE_PHISHING_FILTER:
			resId = IDS_INFO_IE_PHISHING_FILTER;
		break;
		case ST_SERVICES_SEC_CTR:
			resId = IDS_INFO_SERVICES_SEC_CTR;
		break;
		case ST_REGSVR_REGWIZC:
			resId = IDS_INFO_REGSVR_REGWIZC;
		break;
		case ST_NOLMHASH:
			resId = IDS_INFO_NOLMHASH;
		break;
		case ST_CLEAN_RECENT_DOCS:
			resId = IDS_INFO_CLEAN_RECENT_DOCS;
		break;
		case ST_IE_CLEAN_CACHE:
			resId = IDS_INFO_IE_CLEAN_CACHE;
		break;
		case ST_SHOW_FILE_EXT:
			resId = IDS_INFO_SHOW_FILE_EXT;
		break;
		case ST_TWEAK_SVC_WmdmPmSN:
			resId = IDS_INFO_TWEAK_SVC_WmdmPmSN;
		break;
		case ST_TWEAK_BSOD_AUTOREBOOT:
			resId = IDS_INFO_TWEAK_BSOD_AUTOREBOOT;
		break;
		case ST_TWEAK_NO_WINTOUR:
			resId = IDS_INFO_TWEAK_NO_WINTOUR;
		break;

	}
	assert(resId != -1);
	CString ret;
	ret.LoadString(resId);
	return ret;
}