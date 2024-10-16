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
// This file exports the IPP APIs so that the API and all of its dependent functions
// are pulled in from the relavent static libraries into the custom shared object.
// Only those APIs which are currently being used is included in this file. This file
// has to be updated with new APIs as and when they are referenced.
// Complete list of available APIs can be obtained from ippi.c, ippi_l.c and ippcc.c
//
#include "ippi.h"
#include "ippi_l.h"
#include "ippcc.h"

#ifndef NULL
#ifdef  __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif

void ippiCustomTest()
{
	IppStatus status;
	IppiSize ippiSize= {0,0};
	IppiPoint ippiPoint= {0,0};
	IppSizeL ippSizeL = {0};
	IppiSizeL ippiSizeL = {0,0};
	IppiPointL ippiPointL = {0,0};
	IpprBorderType ipprBorderType = 0;

	status = ippiLUT_8u_C4R(NULL, 0, NULL, 0, ippiSize, NULL);
	status = ippiLUT_GetSize(ippHahn, ippUndef, ippC0, ippiSize, NULL, NULL);
	status = ippiLUT_Init_8u(ippHahn, ippC0, ippiSize, NULL, NULL, NULL, NULL);

	status = ippiResizeGetSize_L(ippiSizeL, ippiSizeL, ippUndef, ippHahn, 0, NULL, NULL);
	status = ippiResizeGetBufferSize_L(NULL, ippiSizeL, 0, NULL);
	status = ippiResizeGetSrcRoi_L(NULL, ippiPointL, ippiSizeL, NULL, NULL);
	status = ippiResizeCubicInit_L(ippiSizeL, ippiSizeL, ippUndef, 0.0f, 0.0f, NULL, NULL);
	status = ippiResizeCubic_8u_C4R_L(NULL, ippSizeL, NULL, ippSizeL, ippiPointL, ippiSizeL, ippBorderConst, NULL, NULL, NULL);

	status = ippiFilterBorderGetSize(ippiSize, ippiSize, ippUndef, ippUndef, 0, NULL, NULL);
	status = ippiFilterBorder_8u_C4R(NULL, 0, NULL, 0, ippiSize, ippBorderConst, NULL, NULL, NULL);
	status = ippiFilterBorderInit_32f(NULL, ippiSize, ippUndef, 0, ippRndZero, NULL);

	status = ippiHistogramGetBufferSize(ippUndef, ippiSize, NULL, 0, 0, NULL, NULL);
	status = ippiHistogramUniformInit(ippUndef, NULL, NULL, NULL, 0, NULL);
	status = ippiHistogram_8u_C1R(NULL, 0, ippiSize, NULL, NULL, NULL);
	status = ippiRGBToGray_8u_AC4C1R(NULL, 0, NULL, 0, ippiSize);


	status = ippiXor_8u_C4IR(NULL, 0, NULL, 0, ippiSize);
	status = ippiMul_8u_C4IRSfs(NULL, 0, NULL, 0, ippiSize, 0);
	status = ippiAdd_8u_C4IRSfs(NULL, 0, NULL, 0, ippiSize, 0);
	status = ippiSub_8u_C4IRSfs(NULL, 0, NULL, 0, ippiSize, 0);

	status = ippiCopy_8u_C4C1R(NULL, 0, NULL, 0, ippiSize);
	status = ippiCopy_8u_C4CR(NULL, 0, NULL, 0, ippiSize);
	status = ippiColorTwist32f_8u_AC4R(NULL, 0, NULL, 0, ippiSize, NULL);
}
