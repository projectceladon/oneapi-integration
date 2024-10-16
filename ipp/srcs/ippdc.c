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

void ippdcTest()
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


	const IppLibraryVersion* v= ippdcGetLibVersion();
	status = ippsMTFInit_8u(NULL);
	status = ippsMTFGetSize_8u(NULL);
	status = ippsMTFFwd_8u(NULL, NULL, 0, NULL);
	status = ippsMTFInv_8u(NULL, NULL, 0, NULL);
	status = ippsBWTFwdGetSize_8u(0, NULL);
	status = ippsBWTFwd_8u(NULL, NULL, 0, NULL, NULL);
	status = ippsBWTFwdGetBufSize_SelectSort_8u(0, NULL, ippBWTItohTanakaLimSort);
	status = ippsBWTFwd_SelectSort_8u(NULL, NULL, 0, NULL, NULL, ippBWTItohTanakaLimSort);
	status = ippsBWTInvGetSize_8u(0, NULL);
	status = ippsBWTInv_8u(NULL, NULL, 0, 0, NULL);
	status = ippsLZSSGetSize_8u(NULL);
	status = ippsEncodeLZSSInit_8u(NULL);
	status = ippsEncodeLZSS_8u(NULL, NULL, NULL, NULL, NULL);
	status = ippsEncodeLZSSFlush_8u(NULL, NULL, NULL);
	status = ippsDecodeLZSSInit_8u(NULL);
	status = ippsDecodeLZSS_8u(NULL, NULL, NULL, NULL, NULL);
	status = ippsAdler32_8u(NULL, 0, NULL);
	status = ippsCRC32_8u(NULL, 0, NULL);
	status = ippsCRC32C_8u(NULL, 0, NULL);
	status = ippsInflateBuildHuffTable(NULL, 0, 0, NULL);
	status = ippsInflate_8u(NULL, NULL, NULL, NULL, 0, NULL, NULL, 0, NULL, NULL);
	status = ippsDeflateLZ77_8u(NULL, NULL, NULL, NULL, 0, NULL, NULL, 0, NULL, NULL, NULL, NULL, NULL, 0, IppLZ77NoFlush);
	status = ippsDeflateLZ77Fast_8u(NULL, NULL, NULL, NULL, 0, NULL, NULL, 0, NULL, NULL, NULL, NULL, NULL, NULL, IppLZ77NoFlush);
	status = ippsDeflateLZ77Fastest_8u(NULL, NULL, NULL, NULL, 0, NULL, 0, NULL, NULL, NULL, 0, NULL, NULL, NULL, IppLZ77NoFlush);
	status = ippsDeflateLZ77FastestPrecompHeader_8u(NULL, NULL, NULL, NULL, 0, NULL, 0, NULL, NULL, NULL, 0, NULL, NULL, NULL, NULL, 0, IppLZ77NoFlush);
	status = ippsDeflateLZ77Slow_8u(NULL, NULL, NULL, NULL, 0, NULL, NULL, 0, NULL, NULL, NULL, NULL, NULL, NULL, IppLZ77NoFlush);
	status = ippsDeflateLZ77FastestGetStat_8u(NULL, NULL, NULL, NULL, 0, NULL, 0, NULL, NULL, IppLZ77NoFlush);
	status = ippsDeflateLZ77FastestGenHuffTable_8u(NULL, NULL, NULL, NULL);
	status = ippsDeflateLZ77FastestGenHeader_8u(NULL, NULL, NULL, NULL, NULL);
	status = ippsDeflateHuff_8u(NULL, NULL, 0, NULL, NULL, NULL, NULL, NULL, NULL);
	status = ippsDeflateDictionarySet_8u(NULL, 0, NULL, 0, NULL, NULL, 0, 0);
	status = ippsDeflateUpdateHash_8u(NULL, 0, 0, NULL, 0, NULL, 0, 0);
	status = ippsRLEGetSize_BZ2_8u(NULL);
	status = ippsEncodeRLEInit_BZ2_8u(NULL);
	status = ippsEncodeRLE_BZ2_8u(NULL, NULL, NULL, NULL, NULL);
	status = ippsEncodeRLEFlush_BZ2_8u(NULL, NULL, NULL);
	status = ippsDecodeRLEStateInit_BZ2_8u(NULL);
	status = ippsDecodeRLEState_BZ2_8u(NULL, NULL, NULL, NULL, NULL);
	status = ippsDecodeRLEStateFlush_BZ2_8u(NULL, NULL, NULL);
	status = ippsRLEGetInUseTable_8u(NULL, NULL);
	status = ippsEncodeZ1Z2_BZ2_8u16u(NULL, NULL, NULL, NULL, NULL);
	status = ippsDecodeZ1Z2_BZ2_16u8u(NULL, NULL, NULL, NULL);
	status = ippsReduceDictionary_8u_I(NULL, NULL, 0, NULL);
	status = ippsExpandDictionary_8u_I(NULL, NULL, 0, 0);
	status = ippsCRC32_BZ2_8u(NULL, 0, NULL);
	status = ippsEncodeHuffGetSize_BZ2_16u8u(0, NULL);
	status = ippsEncodeHuffInit_BZ2_16u8u(0, NULL, NULL, 0, NULL);
	status = ippsPackHuffContext_BZ2_16u8u(NULL, NULL, NULL, NULL, NULL);
	status = ippsEncodeHuff_BZ2_16u8u(NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	status = ippsDecodeHuffGetSize_BZ2_8u16u(0, NULL);
	status = ippsDecodeHuffInit_BZ2_8u16u(0, NULL);
	status = ippsUnpackHuffContext_BZ2_8u16u(NULL, NULL, NULL, NULL, NULL);
	status = ippsDecodeHuff_BZ2_8u16u(NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	status = ippsDecodeBlockGetSize_BZ2_8u(0, NULL);
	status = ippsDecodeBlock_BZ2_16u8u(NULL, 0, NULL, NULL, 0, 0, NULL, NULL);
	status = ippsEncodeLZOGetSize(IppLZO1XST, 0, NULL);
	status = ippsEncodeLZO_8u(NULL, 0, NULL, NULL, NULL);
	status = ippsEncodeLZOInit_8u(IppLZO1XST, 0, NULL);
	status = ippsDecodeLZO_8u(NULL, 0, NULL, NULL);
	status = ippsDecodeLZOSafe_8u(NULL, 0, NULL, NULL);
	status = ippsEncodeLZ4HashTableGetSize_8u(NULL);
	status = ippsEncodeLZ4HashTableInit_8u(NULL, 0);
	status = ippsEncodeLZ4DictHashTableInit_8u(NULL, 0);
	status = ippsEncodeLZ4_8u(NULL, 0, NULL, NULL, NULL);
	status = ippsEncodeLZ4Safe_8u(NULL, NULL, NULL, NULL, NULL);
	status = ippsEncodeLZ4Dict_8u(NULL, 0, 0, NULL, NULL, NULL, NULL, 0);
	status = ippsEncodeLZ4DictSafe_8u(NULL, 0, NULL, NULL, NULL, NULL, NULL, 0);
	status = ippsEncodeLZ4HCHashTableGetSize_8u(NULL, NULL);
	status = ippsEncodeLZ4HCHashTableInit_8u(NULL);
	status = ippsEncodeLZ4HC_8u(NULL, 0, NULL, NULL, NULL, NULL, NULL, 0, 0);
	status = ippsDecodeLZ4_8u(NULL, 0, NULL, NULL);
	status = ippsDecodeLZ4Dict_8u(NULL, NULL, NULL, 0, NULL, NULL, 0);
	status = ippsEncodeZfpGetStateSize_32f(NULL);
	status = ippsEncodeZfpInit_32f(NULL, 0, NULL);
	status = ippsEncodeZfpInitLong_32f(NULL, 0, NULL);
	status = ippsEncodeZfpSet_32f(0, 0, 0, 0, NULL);
	status = ippsEncodeZfpSetAccuracy_32f(0.0f, NULL);
	status = ippsEncodeZfp444_32f(NULL, 0, 0, NULL);
	status = ippsEncodeZfpFlush_32f(NULL);
	status = ippsEncodeZfpGetCompressedSize_32f(NULL, NULL);
	status = ippsEncodeZfpGetCompressedSizeLong_32f(NULL, NULL);
	status = ippsEncodeZfpGetCompressedBitSize_32f(NULL, NULL);
	status = ippsDecodeZfpGetStateSize_32f(NULL);
	status = ippsDecodeZfpInit_32f(NULL, 0, NULL);
	status = ippsDecodeZfpInitLong_32f(NULL, 0, NULL);
	status = ippsDecodeZfpSetAccuracy_32f(0.0f, NULL);
	status = ippsDecodeZfpSet_32f(0, 0, 0, 0, NULL);
	status = ippsDecodeZfp444_32f(NULL, NULL, 0, 0);
	status = ippsDecodeZfpGetDecompressedSize_32f(NULL, NULL);
	status = ippsDecodeZfpGetDecompressedSizeLong_32f(NULL, NULL);
	
}
