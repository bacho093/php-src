/* Generated by re2c 0.16 */
#line 1 "ext/phar/phar_path_check.re"
/*
  +----------------------------------------------------------------------+
  | phar php single-file executable PHP extension                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 2007-2018 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt.                                 |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Authors: Marcus Boerger <helly@php.net>                              |
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#include "phar_internal.h"

phar_path_check_result phar_path_check(char **s, int *len, const char **error)
{
	const unsigned char *p = (const unsigned char*)*s;
	const unsigned char *m;

	if (*len == 1 && *p == '.') {
		*error = "current directory reference";
		return pcr_err_curr_dir;
	} else if (*len == 2 && p[0] == '.' && p[1] == '.') {
		*error = "upper directory reference";
		return pcr_err_up_dir;
	}

#define YYCTYPE         unsigned char
#define YYCURSOR        p
#define YYLIMIT         p+*len
#define YYMARKER        m
#define YYFILL(n)

loop:

#line 47 "ext/phar/phar_path_check.c"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	if (yych <= '[') {
		if (yych <= ')') {
			if (yych <= '\f') {
				if (yych >= 0x01) goto yy4;
			} else {
				if (yych <= '\r') goto yy6;
				if (yych <= 0x19) goto yy4;
				goto yy7;
			}
		} else {
			if (yych <= '/') {
				if (yych <= '*') goto yy9;
				if (yych <= '.') goto yy7;
				goto yy11;
			} else {
				if (yych == '?') goto yy12;
				goto yy7;
			}
		}
	} else {
		if (yych <= 0xEC) {
			if (yych <= 0xC1) {
				if (yych <= '\\') goto yy14;
				if (yych <= 0x7F) goto yy7;
				goto yy4;
			} else {
				if (yych <= 0xDF) goto yy16;
				if (yych <= 0xE0) goto yy17;
				goto yy18;
			}
		} else {
			if (yych <= 0xF0) {
				if (yych <= 0xED) goto yy19;
				if (yych <= 0xEF) goto yy18;
				goto yy20;
			} else {
				if (yych <= 0xF3) goto yy21;
				if (yych <= 0xF4) goto yy22;
				goto yy4;
			}
		}
	}
	++YYCURSOR;
#line 93 "ext/phar/phar_path_check.re"
	{
			if (**s == '/') {
				(*s)++;
				(*len)--;
			}
			if ((p - (const unsigned char*)*s) - 1 != *len)
			{
				*error ="illegal character";
				return pcr_err_illegal_char;
			}
			*error = NULL;
			return pcr_is_ok;
		}
#line 110 "ext/phar/phar_path_check.c"
yy4:
	++YYCURSOR;
yy5:
#line 106 "ext/phar/phar_path_check.re"
	{
			*error ="illegal character";
			return pcr_err_illegal_char;
		}
#line 119 "ext/phar/phar_path_check.c"
yy6:
	yych = *++YYCURSOR;
	if (yych == '\n') goto yy4;
	goto yy5;
yy7:
	++YYCURSOR;
yy8:
#line 90 "ext/phar/phar_path_check.re"
	{
			goto loop;
		}
#line 131 "ext/phar/phar_path_check.c"
yy9:
	++YYCURSOR;
#line 78 "ext/phar/phar_path_check.re"
	{
			*error = "star";
			return pcr_err_star;
		}
#line 139 "ext/phar/phar_path_check.c"
yy11:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= '-') goto yy8;
	if (yych <= '.') goto yy23;
	if (yych <= '/') goto yy25;
	goto yy8;
yy12:
	++YYCURSOR;
#line 82 "ext/phar/phar_path_check.re"
	{
			if (**s == '/') {
				(*s)++;
			}
			*len = (p - (const unsigned char*)*s) -1;
			*error = NULL;
			return pcr_use_query;
		}
#line 158 "ext/phar/phar_path_check.c"
yy14:
	++YYCURSOR;
#line 74 "ext/phar/phar_path_check.re"
	{
			*error = "back-slash";
			return pcr_err_back_slash;
		}
#line 166 "ext/phar/phar_path_check.c"
yy16:
	yych = *++YYCURSOR;
	if (yych <= 0x7F) goto yy5;
	if (yych <= 0xBF) goto yy7;
	goto yy5;
yy17:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 0x9F) goto yy5;
	if (yych <= 0xBF) goto yy27;
	goto yy5;
yy18:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 0x7F) goto yy5;
	if (yych <= 0xBF) goto yy27;
	goto yy5;
yy19:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 0x7F) goto yy5;
	if (yych <= 0x9F) goto yy27;
	goto yy5;
yy20:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 0x8F) goto yy5;
	if (yych <= 0xBF) goto yy28;
	goto yy5;
yy21:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 0x7F) goto yy5;
	if (yych <= 0xBF) goto yy28;
	goto yy5;
yy22:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 0x7F) goto yy5;
	if (yych <= 0x8F) goto yy28;
	goto yy5;
yy23:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy29;
	if (yych <= '-') goto yy24;
	if (yych <= '.') goto yy31;
	if (yych <= '/') goto yy29;
yy24:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy8;
	} else {
		goto yy5;
	}
yy25:
	++YYCURSOR;
#line 62 "ext/phar/phar_path_check.re"
	{
			*error = "double slash";
			return pcr_err_double_slash;
		}
#line 228 "ext/phar/phar_path_check.c"
yy27:
	yych = *++YYCURSOR;
	if (yych <= 0x7F) goto yy24;
	if (yych <= 0xBF) goto yy7;
	goto yy24;
yy28:
	yych = *++YYCURSOR;
	if (yych <= 0x7F) goto yy24;
	if (yych <= 0xBF) goto yy27;
	goto yy24;
yy29:
	++YYCURSOR;
#line 70 "ext/phar/phar_path_check.re"
	{
			*error = "current directory reference";
			return pcr_err_curr_dir;
		}
#line 246 "ext/phar/phar_path_check.c"
yy31:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy32;
	if (yych != '/') goto yy24;
yy32:
	++YYCURSOR;
#line 66 "ext/phar/phar_path_check.re"
	{
			*error = "upper directory reference";
			return pcr_err_up_dir;
		}
#line 258 "ext/phar/phar_path_check.c"
}
#line 110 "ext/phar/phar_path_check.re"

}