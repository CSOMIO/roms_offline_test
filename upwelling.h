/*
** svn $Id$
*******************************************************************************
** Copyright (c) 2002-2018 The ROMS/TOMS Group                               **
**   Licensed under a MIT/X style license                                    **
**   See License_ROMS.txt                                                    **
*******************************************************************************
**
** Options for Upwelling Test.
**
** Application flag:   UPWELLING
** Input script:       ocean_upwelling.in
*/

#define UV_ADV
#define UV_COR
#define UV_LDRAG
#define UV_VIS2

#define MIX_S_UV
#define SPLINES_VDIFF
#define SPLINES_VVISC
#define TS_U3HADVECTION
#define TS_C4VADVECTION

#define DJ_GRADPS
#define TS_DIF2
#define MIX_S_TS

#define SALINITY
#define SOLVE3D
#define AVERAGES

#define ANA_GRID
#define ANA_INITIAL
#define ANA_SMFLUX
#define ANA_STFLUX
#define ANA_SSFLUX
#define ANA_BTFLUX
#define ANA_BSFLUX
#define ANA_VMIX