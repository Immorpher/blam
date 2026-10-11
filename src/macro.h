// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// Copyright(C) 2012 Samuel Villarreal
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
// 02111-1307, USA.
//
//-----------------------------------------------------------------------------

#ifndef __BLAM_MACRO__
#define __BLAM_MACRO__

// Growable storage. These are only the INITIAL capacities; both the macro
// table and each macro's action list are reallocated on demand, so a script
// is no longer silently truncated/corrupted when it exceeds them.
#define INIT_MACRO_DEFS     256
#define INIT_MACRO_DATA     256

// The MACROS lump stores all counts as 16-bit values, so this is a real
// format limit and is enforced with a hard error.
#define HARD_MACRO_DATA     32767
#define HARD_MACRO_DEFS     32767

// Advisory only: the original 2012 tool used a fixed 255-entry buffer, so
// lumps larger than this were never exercised by the retail toolchain.
#define WARN_MACRO_DATA     255

// Legacy aliases, kept so external code still compiles.
#define MAX_MACRO_DATA  INIT_MACRO_DATA
#define MAX_MACRO_DEFS  INIT_MACRO_DEFS

typedef struct
{
	short id;
	short tag;
	short special;
} macrodata_t;

typedef struct
{
	int actions;			// entries currently used
	int maxactions;			// entries currently allocated
	macrodata_t *data;		// grown by M_AppendAction
} macrodef_t;

extern macrodef_t *macrodefs;
extern macrodata_t *macroaction;
extern macrodef_t *activemacro;
extern int m_activemacros;
extern int m_totalactions;
extern int m_currentline;

void M_Init(void);
void M_Shutdown(void);
void M_NewMacro(int id);
void M_AppendAction(int type, int tag);
void M_NewLine(void);
int M_GetLine(void);
void M_FinishMacro(void);
void M_WriteMacroLump(void);
void M_DecompileMacro(const char *file);

#endif