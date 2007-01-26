/*
 * Copyright  �  2000,2007
 * The Regents of the University of Michigan
 * ALL RIGHTS RESERVED
 *
 * permission is granted to use, copy, create derivative works 
 * and redistribute this software and such derivative works 
 * for any purpose, so long as the name of the university of 
 * michigan is not used in any advertising or publicity 
 * pertaining to the use or distribution of this software 
 * without specific, written prior authorization.  if the 
 * above copyright notice or any other identification of the 
 * university of michigan is included in any copy of any 
 * portion of this software, then the disclaimer below must 
 * also be included.
 *
 * this software is provided as is, without representation 
 * from the university of michigan as to its fitness for any 
 * purpose, and without warranty by the university of 
 * michigan of any kind, either express or implied, including 
 * without limitation the implied warranties of 
 * merchantability and fitness for a particular purpose. the 
 * regents of the university of michigan shall not be liable 
 * for any damages, including special, indirect, incidental, or 
 * consequential damages, with respect to any claim arising 
 * out of or in connection with the use of the software, even 
 * if it has been or is hereafter advised of the possibility of 
 * such damages.
 */

/*
 * This file was automatically generated.  Do not edit it.
 * Instead, edit the file ldapconfig.h.edit.  See the LDAP
 * INSTALL file for more information.
 */ 

/*
 * Copyright (c) 1994 Regents of the University of Michigan.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that this notice is preserved and that due credit is given
 * to the University of Michigan at Ann Arbor. The name of the University
 * may not be used to endorse or promote products derived from this
 * software without specific prior written permission. This software
 * is provided ``as is'' without express or implied warranty.
 */

#ifndef _CONFIG_H
#define _CONFIG_H

/*
 * config.h for LDAP -- edit this file to customize LDAP client behavior.
 * NO platform-specific definitions should be placed in this file.
 * Note that this is NOT used by the LDAP or LBER libraries.
 */

/*
 * SHARED DEFINITIONS - things you should change
 */
	/* default ldap host */
#define LDAPHOST	"ldap.itd.umich.edu"
	/* default place to start searching */
#define DEFAULT_BASE	"o=University of Michigan, c=US"

/*********************************************************************
 *                                                                   *
 * You probably do not need to edit anything below this point        *
 *                                                                   *
 *********************************************************************/

/*
 * SHARED DEFINITIONS - other things you can change
 */
	/* default attribute to use when sorting entries, NULL => sort by DN */
#define SORT_ATTR	NULL
	/* default count of DN components to show in entry displays */
#define DEFAULT_RDNCOUNT	2
	/* default config file locations */
#define FILTERFILE	"/usr/local/etc/ldapfilter.conf"
#define TEMPLATEFILE	"/usr/local/etc/ldaptemplates.conf"
#define SEARCHFILE	"/usr/local/etc/ldapsearchprefs.conf"
#define FRIENDLYFILE	"/usr/local/etc/ldapfriendly"

/*
 * FINGER DEFINITIONS
 */
	/* who to bind as */
#define FINGER_BINDDN		"cn=finger, ou=Miscellaneous Servers, o=University of Michigan, c=US"
	/* where to search */
#define FINGER_BASE		DEFAULT_BASE
	/* banner to print */
#define FINGER_BANNER		"University of Michigan Finger Service...\r\n"
	/* who to report errors to */
#define FINGER_ERRORS		"Directory-Support@umich.edu"
	/* what to say if no matches are found */
#define FINGER_NOMATCH		"Search failed to find anything.\r\n"
	/* what to say if the service may be unavailable */
#define FINGER_UNAVAILABLE	\
"The online directory service may be temporarily unavailable.\r\n\
Please try again later.\r\n"
	/* printed if a match has no email address - for disptmp default */
#define FINGER_NOEMAIL1	"None registered in this service."
#define FINGER_NOEMAIL2	NULL
#define FINGER_NOEMAIL	{ FINGER_NOEMAIL1, FINGER_NOEMAIL2, NULL }
	/* maximum number of matches returned */
#define FINGER_SIZELIMIT	50
	/* max number of hits displayed in full before a list is presented */
#define FINGER_LISTLIMIT	1
	/* what to exec for "finger @host" */
#define FINGER_CMD		"/usr/ucb/finger"
	/* how to treat aliases when searching */
#define FINGER_DEREF		LDAP_DEREF_FINDING
	/* attribute to use when sorting results */
#define FINGER_SORT_ATTR	SORT_ATTR
	/* enable ufn support */
#define FINGER_UFN
	/* timeout for searches */
#define FINGER_TIMEOUT		60
	/* number of DN components to show in entry displays */
#define FINGER_RDNCOUNT		DEFAULT_RDNCOUNT	

/*
 * GO500 GOPHER GATEWAY DEFINITIONS
 */
	/* who to bind as */
#define GO500_BINDDN	"cn=go500, ou=Miscellaneous Servers, o=University of Michigan, c=US"
	/* where to search */
#define GO500_BASE	DEFAULT_BASE
	/* port on which to listen */
#define GO500_PORT	5555
	/* how to handle aliases */
#define GO500_DEREF	LDAP_DEREF_FINDING
	/* attribute to use when sorting results */
#define GO500_SORT_ATTR	SORT_ATTR
	/* timeout for searches */
#define GO500_TIMEOUT	60
	/* enable ufn support */
#define GO500_UFN
	/*
	 * only set and uncomment this if your hostname() does not return
	 * a fully qualified hostname
	 */
/* #define GO500_HOSTNAME	"fully.qualified.hostname.here" */
	/* number of DN components to show in entry displays */
#define GO500_RDNCOUNT		DEFAULT_RDNCOUNT	

/*
 * GO500GW GOPHER GATEWAY DEFINITIONS
 */
	/* who to bind as */
#define GO500GW_BINDDN		"cn=go500gw, ou=Miscellaneous Servers, o=University of Michigan, c=US"
	/* where the helpfile lives */
#define GO500GW_HELPFILE	"/usr/local/etc/go500gw.help"
	/* port on which to listen */
#define GO500GW_PORT		7777
	/* timeout on all searches */
#define GO500GW_TIMEOUT		180
	/* enable ufn support */
#define GO500GW_UFN
	/* attribute to use when sorting results */
#define GO500GW_SORT_ATTR	SORT_ATTR
	/*
	 * only set and uncomment this if your hostname() does not return
	 * a fully qualified hostname
	 */
/* #define GO500GW_HOSTNAME	"fully.qualified.hostname.here" */
	/* number of DN components to show in entry displays */
#define GO500GW_RDNCOUNT	DEFAULT_RDNCOUNT	

/*
 * RCPT500 MAIL RESPONDER GATEWAY DEFINITIONS
 */
	/* who to bind as */
#define RCPT500_BINDDN		"cn=Rcpt500, ou=Miscellaneous Servers, o=University of Michigan, c=US"
	/* where the helpfile lives */
#define RCPT500_HELPFILE	"/usr/local/etc/rcpt500.help"
	/* maximum number of matches returned */
#define RCPT500_SIZELIMIT	50
	/* address replies will appear to come from */
#define RCPT500_FROM		"\"X.500 Query Program\" <X500-Query>"
	/* command that will accept an RFC822 message text on standard
	   input, and send it.  sendmail -t does this nicely. */
#define RCPT500_PIPEMAILCMD	"/usr/lib/sendmail -t -f'<>'"
        /* where to search */
#define RCPT500_BASE             DEFAULT_BASE
	/* attribute to use when sorting results */
#define RCPT500_SORT_ATTR	SORT_ATTR
	/* max number of hits displayed in full before a list is presented */
#define RCPT500_LISTLIMIT	3
	/* enable ufn support */
#define RCPT500_UFN
	/* number of DN components to show in entry displays */
#define RCPT500_RDNCOUNT	DEFAULT_RDNCOUNT	

/*
 * LDAPSEARCH TOOL
 */
	/* who to bind as */
#define LDAPSEARCH_BINDDN	"cn=LDAP Search Tool, ou=Miscellaneous Servers, o=University of Michigan, c=US"
	/* search base */
#define LDAPSEARCH_BASE		DEFAULT_BASE

/*
 * LDAPMODIFY TOOL
 */
	/* who to bind as */
#define LDAPMODIFY_BINDDN	"cn=Manager, o=University of Michigan, c=US"
	/* search base */
#define LDAPMODIFY_BASE		DEFAULT_BASE

/*
 * LDAPDELETE TOOL
 */
	/* who to bind as */
#define LDAPDELETE_BINDDN	"cn=Manager, o=University of Michigan, c=US"
	/* search base */
#define LDAPDELETE_BASE		DEFAULT_BASE

/*
 * LDAPMODRDN TOOL
 */
	/* who to bind as */
#define LDAPMODRDN_BINDDN	"cn=Manager, o=University of Michigan, c=US"
	/* search base */
#define LDAPMODRDN_BASE		DEFAULT_BASE

/*
 * MAIL500 MAILER DEFINITIONS
 */
	/* who to bind as */
#define MAIL500_BINDDN		"cn=mail500, ou=Miscellaneous Servers, o=University of Michigan, c=US"
	/* max number of ambiguous matches reported */
#define MAIL500_MAXAMBIGUOUS	10
	/* max subscribers allowed (size limit when searching for them ) */
#define MAIL500_MAXGROUPMEMBERS	LDAP_NO_LIMIT
	/* timeout for all searches */
#define MAIL500_TIMEOUT		180
	/* sendmail location - mail500 needs to exec this */
#define MAIL500_SENDMAIL	"/usr/lib/sendmail"
	/* sendmail arguments */
#define MAIL500_SENDMAILARGS	{ MAIL500_SENDMAIL, "-oMrX.500", "-odi", "-oi", "-f", NULL, NULL }
	/* envelope from for bounce messages */
#define MAIL500_BOUNCEFROM	"<>"
	/* postmaster - who bounces of bounces are sent to */
#define MAIL500_POSTMASTER	"postmaster"

/*
 * UD DEFINITIONS
 */
	/* ud configuration file */
#define UD_CONFIG_FILE		"/usr/local/etc/ud.conf"
	/* default editor */
#define UD_DEFAULT_EDITOR	"/usr/ucb/vi"
	/* default bbasename of user config file */
#define UD_USER_CONFIG_FILE	".udrc"
	/* default user to bind as */
#define UD_BINDDN		"cn=ud, ou=Miscellaneous Servers, o=University of Michigan, c=US"
	/* default password to bind with */
#define UD_PASSWD		NULL
	/* default search base */
#define UD_BASE			DEFAULT_BASE
	/* default base where groups are created */
#define UD_WHERE_GROUPS_ARE_CREATED	"ou=User Groups, ou=Groups, o=University of Michigan, c=US"
	/* default base below which all groups live */
#define UD_WHERE_ALL_GROUPS_LIVE	"ou=Groups, o=University of Michigan, c=US"

/*
 * FAX500 DEFINITIONS
 */
	/* what to bind as */
#define FAX_BINDDN	"cn=mail500, ou=Miscellaneous Servers, o=University of Michigan, c=US"
	/* how long to wait for searches */
#define FAX_TIMEOUT		180
	/* maximum number of ambiguous matches reported */
#define FAX_MAXAMBIGUOUS	10
	/* maximum number of members allowed */
#define FAX_MAXMEMBERS		LDAP_NO_LIMIT
	/* program to send mail */
#define FAX_SENDMAIL		"/usr/lib/sendmail"

/*
 * RP500 DEFINITIONS
 */
	/* what to bind as */
#define RP_BINDDN	"cn=rp500, ou=Miscellaneous Servers, o=University of Michigan, c=US"
	/* prefix to add to non-fully-qualified numbers */
#define RP_PHONEPREFIX	"1313"

/*
 * SLAPD DEFINITIONS
 */
	/* location of the default slapd config file */
#define SLAPD_DEFAULT_CONFIGFILE	"/usr/local/etc/slapd.conf"
	/* default sizelimit on number of entries from a search */
#define SLAPD_DEFAULT_SIZELIMIT		500
	/* default timelimit to spend on a search */
#define SLAPD_DEFAULT_TIMELIMIT		3600
	/* location of the slapd pid file */
#define SLAPD_PIDFILE			"/usr/local/etc/slapd.pid"
	/* location of the slapd args file */
#define SLAPD_ARGSFILE			"/usr/local/etc/slapd.args"
	/* dn of the special "monitor" entry */
#define SLAPD_MONITOR_DN		"cn=monitor"
	/* dn of the special "config" entry */
#define SLAPD_CONFIG_DN			"cn=config"
	/* minimum max ids that a single index entry can map to in ldbm */
#define SLAPD_LDBM_MIN_MAXIDS		4000

#endif /* _CONFIG_H */
