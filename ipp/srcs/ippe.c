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
#include "ippe.h"

#ifndef NULL
#ifdef  __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif

void ippeTest()
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


	const IppLibraryVersion* v= ippeGetLibVersion();
	status = ippsMimoMMSE_1X2_16sc(NULL, 0, 0, 0, NULL, 0, NULL, 0, 0, 0, 0, 0, NULL, 0);
	status = ippsMimoMMSE_2X2_16sc(NULL, 0, 0, 0, NULL, 0, NULL, 0, 0, 0, 0, 0, NULL, 0);
	status = ippsMimoMMSE_1X4_16sc(NULL, 0, 0, 0, NULL, 0, NULL, 0, 0, 0, 0, 0, NULL, 0);
	status = ippsMimoMMSE_2X4_16sc(NULL, 0, 0, 0, NULL, 0, NULL, 0, 0, 0, 0, 0, NULL, 0);
	status = ippsCRC24a_8u(NULL, 0, NULL);
	status = ippsCRC24b_8u(NULL, 0, NULL);
	status = ippsCRC24c_8u(NULL, 0, NULL);
	status = ippsCRC16_8u(NULL, 0, NULL);
	status = ippsCRC24a_1u(NULL, 0, NULL, 0, 0);
	status = ippsCRC24b_1u(NULL, 0, NULL, 0, 0);
	status = ippsCRC24c_1u(NULL, 0, NULL, 0, 0);
	status = ippsCRC16_1u(NULL, 0, NULL, 0, 0);
	
}
