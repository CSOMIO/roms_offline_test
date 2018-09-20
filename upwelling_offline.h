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

#define ROMS_MODEL

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

#undef  LMD_MIXING
#undef  LMD_RIMIX
#undef  LMD_CONVEC
#undef  LMD_SKPP
#undef  LMD_BKPP
#undef  LMD_NONLOCAL

#define ANA_VMIX

#define SALINITY
#define SOLVE3D
#define AVERAGES

#define OFFLINE_BIOLOGY
#define OFFLINE

#define BIO_FENNEL
#define ANA_BIOLOGY

#define BULK_FLUXES
#define ANA_SPFLUX
#define ANA_BPFLUX
#define ANA_CLOUD
#define LONGWAVE
#define ANA_RAIN

#define ANA_GRID
#define ANA_INITIAL
#define ANA_SMFLUX
#define ANA_WINDS
#define ANA_PAIR
#define ANA_TAIR
#define ANA_HUMID
#define ANA_STFLUX
#define ANA_SSFLUX
#define ANA_BTFLUX
#define ANA_BSFLUX

