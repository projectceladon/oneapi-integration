/*
 *Copyright (C) 2024 Intel Corporation
 * 
 *Licensed under the Apache License, Version 2.0 (the "License");
 *you may not use this file except in compliance with the License.
 *You may obtain a copy of the License at
 * 
 *http://www.apache.org/licenses/LICENSE-2.0
 * 
 *Unless required by applicable law or agreed to in writing,
 *software distributed under the License is distributed on an "AS IS" BASIS,
 *WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *See the License for the specific language governing permissions
 *and limitations under the License.
 * 
 *
 *SPDX-License-Identifier: Apache-2.0
*/
#include "ippch.h"

#ifndef NULL
#ifdef  __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif

void ippchTest()
{
	IppStatus status;
	IppiSize ippiSize= {0,0};
	IppiPoint ippiPoint= {0,0};
	IppiPoint_32f ippiPoint_32f= {0.0f,0.0f};
	IppPointPolar ippPointPolar= {0.0f,0.0f};
	IppiRect ippiRect= {0,0,0,0};
	IpprVolume ipprVolume= {0, 0, 0};
	IpprCuboid ipprCuboid= {0,0,0,0,0,0};
	IpprPoint ipprPoint= {0,0,0};
	Ipp16sc ipp16sc= {0,0};
	Ipp32sc ipp32sc= {0,0};
	Ipp32fc ipp32fc= {0.0f,0.0f};
	Ipp64sc ipp64sc= {0.0f,0.0f};
	Ipp64fc ipp64fc= {0.0f,0.0f};


	const IppLibraryVersion* v= ippchGetLibVersion();
	status = ippsFind_8u(NULL, 0, NULL, 0, NULL);
	status = ippsFindC_8u(NULL, 0, 0, NULL);
	status = ippsFindRev_8u(NULL, 0, NULL, 0, NULL);
	status = ippsFindRevC_8u(NULL, 0, 0, NULL);
	status = ippsFind_Z_8u(NULL, NULL, NULL);
	status = ippsFindC_Z_8u(NULL, 0, NULL);
	status = ippsCompare_8u(NULL, NULL, 0, NULL);
	status = ippsEqual_8u(NULL, NULL, 0, NULL);
	status = ippsTrimC_8u_I(NULL, NULL, 0);
	status = ippsTrimC_8u(NULL, 0, 0, NULL, NULL);
	status = ippsUppercaseLatin_8u_I(NULL, 0);
	status = ippsLowercaseLatin_8u_I(NULL, 0);
	status = ippsLowercaseLatin_8u(NULL, NULL, 0);
	status = ippsUppercaseLatin_8u(NULL, NULL, 0);
	status = ippsHash_8u32u(NULL, 0, NULL);
	status = ippsHash_16u32u(NULL, 0, NULL);
	status = ippsHashSJ2_8u32u(NULL, 0, NULL);
	status = ippsHashSJ2_16u32u(NULL, 0, NULL);
	status = ippsHashMSCS_8u32u(NULL, 0, NULL);
	status = ippsHashMSCS_16u32u(NULL, 0, NULL);
	status = ippsConcat_8u(NULL, 0, NULL, 0, NULL);
	status = ippsConcat_8u_D2L(NULL, NULL, 0, NULL);
	status = ippsConcatC_8u_D2L(NULL, NULL, 0, 0, NULL);
	status = ippsSplitC_8u_D2L(NULL, 0, 0, NULL, NULL, NULL);
	status = ippsFindCAny_8u(NULL, 0, NULL, 0, NULL);
	status = ippsFindRevCAny_8u(NULL, 0, NULL, 0, NULL);
	status = ippsReplaceC_8u(NULL, NULL, 0, 0, 0);
	status = ippsTrimCAny_8u(NULL, 0, NULL, 0, NULL, NULL);
	status = ippsTrimEndCAny_8u(NULL, 0, NULL, 0, NULL, NULL);
	status = ippsTrimStartCAny_8u(NULL, 0, NULL, 0, NULL, NULL);
	status = ippsCompareIgnoreCaseLatin_8u(NULL, NULL, 0, NULL);
	status = ippsInsert_8u_I(NULL, 0, NULL, NULL, 0);
	status = ippsInsert_8u(NULL, 0, NULL, 0, NULL, 0);
	status = ippsRemove_8u_I(NULL, NULL, 0, 0);
	status = ippsRemove_8u(NULL, 0, NULL, 0, 0);
	status = ippsRegExpGetSize(NULL, NULL);
	status = ippsRegExpInit(NULL, NULL, NULL, NULL);
	status = ippsRegExpSetMatchLimit(0, NULL);
	status = ippsRegExpSetFormat(ippFmtASCII, NULL);
	status = ippsRegExpFind_8u(NULL, 0, NULL, NULL, NULL);
	status = ippsConvertUTF_8u16u(NULL, NULL, NULL, NULL, 0);
	status = ippsConvertUTF_16u8u(NULL, NULL, NULL, NULL, 0);
	status = ippsRegExpReplaceGetSize(NULL, NULL);
	status = ippsRegExpReplaceInit(NULL, NULL);
	status = ippsRegExpReplace_8u(NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	
}
