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
/*
  Autobuffer
*/
#include <stdlib.h>

template<typename T>
class AutoBuffer
{
public:
    AutoBuffer()                                        { m_pBuffer = NULL; m_size = 0; }
    AutoBuffer(size_t size, size_t elSize = sizeof(T))  { m_pBuffer = NULL; Alloc(size, elSize); }
    ~AutoBuffer()                                       { Release(); }
    inline T* Alloc(size_t size, size_t elSize = sizeof(T))
    {
        Release();
        m_size = size;
        m_pBuffer = (T*)malloc((int)(size*elSize));
        return m_pBuffer;
    }
    inline void Release()             { if(m_pBuffer) free(m_pBuffer); m_pBuffer = NULL; m_size = 0; }
    inline size_t GetSize()           { return m_size; }
    inline operator T* ()             { return (T*)m_pBuffer;}
    inline operator const T* () const { return (const T*)m_pBuffer;}
private:
    // Disable copy operations
    AutoBuffer(AutoBuffer &) {};
    AutoBuffer& operator =(const AutoBuffer &) {return *this;};

    size_t m_size;
    T*     m_pBuffer;
};

