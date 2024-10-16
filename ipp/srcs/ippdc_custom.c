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
#include "ippdc.h"

#ifndef NULL
#ifdef  __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif

void ippdcCustomTest()
{
	IppStatus status;
	
	status = ippsEncodeLZ4_8u(NULL, 0, NULL, NULL, NULL);
	status = ippsEncodeLZ4Safe_8u(NULL, NULL, NULL, NULL, NULL);
	status = ippsEncodeLZ4DictSafe_8u(NULL, 0, NULL, NULL, NULL, NULL, NULL, 0);
	status = ippsEncodeLZ4Dict_8u(NULL, 0, 0, NULL, NULL, NULL, NULL, 0);
	status = ippsDecodeLZ4Dict_8u(NULL, NULL, NULL, 0, NULL, NULL, 0);
	status = ippsEncodeLZ4HC_8u(NULL, 0, NULL, NULL, NULL, NULL, NULL, 0, 0);
	status = ippsEncodeLZ4HCHashTableGetSize_8u(NULL, NULL);
	status = ippsEncodeLZ4HCHashTableInit_8u(NULL);
}
